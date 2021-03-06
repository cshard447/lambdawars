//====== Copyright � Sandern Corporation, All rights reserved. ===========//
//
// Purpose: A simple save restore system for Python. Collects fields in a dictionary,
//			saves them to file as strings.
//			These fields are collected and restored through a fired signal.
//
// $NoKeywords: $
//=============================================================================//

#include "cbase.h"
#include "srcpy_saverestore.h"
#include "srcpy.h"
#include "saverestore.h"
#include "saverestoretypes.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

//-----------------------------------------------------------------------------
// Helper interface exposed to fields in Python
//-----------------------------------------------------------------------------
void PySaveHelper::WriteShort( short value )
{
	m_pSave->WriteShort( m_pFieldName, &value );
}

void PySaveHelper::WriteInteger( int value )
{
	m_pSave->WriteInt( m_pFieldName, &value );
}

void PySaveHelper::WriteFloat( float value )
{
	m_pSave->WriteFloat( m_pFieldName, &value );
}

void PySaveHelper::WriteBoolean( bool value )
{
	m_pSave->WriteBool( m_pFieldName, &value );
}

void PySaveHelper::WriteString( const char *value )
{
	m_pSave->WriteString( m_pFieldName, value );
}

void PySaveHelper::WriteVector( Vector &value )
{
	m_pSave->WriteVector( m_pFieldName, &value );
}

void PySaveHelper::WriteEHandle( CBaseEntity *value )
{
	EHANDLE eh( value );
	m_pSave->WriteEHandle( m_pFieldName, &eh );
}

void PySaveHelper::WriteBytes( boost::python::object bytes )
{
	char *pBytes = PyBytes_AsString( bytes.ptr() );
	if( pBytes )
	{
		m_pSave->WriteString( m_pFieldName, pBytes );
	}
}

void PySaveHelper::WriteFields( boost::python::object instance )
{
	m_pSave->StartBlock( m_pFieldName );
	m_pSave->PyWriteAll( instance );
	m_pSave->EndBlock();
}

#ifndef CLIENT_DLL
void PySaveHelper::WriteOutputEvent( PyOutputEvent &ev )
{
	// Hacky code duplicated from CSave::WriteBasicField
	typedescription_t typeDesc = { FIELD_CUSTOM, m_pFieldName, -1, 1, FTYPEDESC_OUTPUT | FTYPEDESC_SAVE | FTYPEDESC_KEY, "", eventFuncs };

	m_pSave->StartBlock( m_pFieldName );

	SaveRestoreFieldInfo_t fieldInfo =
	{
		(char *)&ev,
		NULL,
		&typeDesc
	};
	typeDesc.pSaveRestoreOps->Save( fieldInfo, m_pSave );
			
	m_pSave->EndBlock();
}
#endif // CLIENT_DLL

//-----------------------------------------------------------------------------
// Read functions
//-----------------------------------------------------------------------------
boost::python::object PyRestoreHelper::ReadShort()
{
	return boost::python::object( m_pRestore->ReadShort() );
}

boost::python::object PyRestoreHelper::ReadInteger()
{
	return boost::python::object( m_pRestore->ReadInt() );
}

boost::python::object PyRestoreHelper::ReadFloat()
{
	float v;
	m_pRestore->ReadFloat( &v );
	return boost::python::object( v );
}

boost::python::object PyRestoreHelper::ReadBoolean()
{
	bool v;
	m_pRestore->ReadBool( &v );
	return boost::python::object( v );
}

boost::python::object PyRestoreHelper::ReadString()
{
	int bufSize = (m_pActiveHeader->size + 1) * sizeof( char );
	char *buf = (char *)stackalloc( bufSize );
	m_pRestore->ReadString( buf, bufSize, 0 );
	return boost::python::object( (const char *)buf );
}

boost::python::object PyRestoreHelper::ReadVector()
{
	Vector v;
	m_pRestore->ReadVector( &v, 1, 0 );
	return boost::python::object( v );
}

boost::python::object PyRestoreHelper::ReadEHandle()
{
	EHANDLE eh;
	m_pRestore->ReadEHandle( &eh );

	if( eh )
		return eh->GetPyHandle();
	// If it does not exist, create a new handle
	try 
	{								
		return _entities.attr("PyHandle")( eh.GetEntryIndex(), eh.GetSerialNumber() );							
	} 
	catch(boost::python::error_already_set &) 
	{					
		Warning("ReadEHandle: Failed to create a PyHandle\n");				
		PyErr_Print();											
	}	
	return boost::python::object();
}

boost::python::object PyRestoreHelper::ReadBytes()
{
	int bufSize = (m_pActiveHeader->size + 1) * sizeof( char );
	char *buf = (char *)stackalloc( bufSize );
	m_pRestore->ReadString( buf, bufSize, 0 );

	PyObject *pBytes = PyBytes_FromString( buf );
	if( pBytes )
	{
		return boost::python::object(
			boost::python::handle<>(
				pBytes
			)
		);
	}
	return boost::python::object();
}

void PyRestoreHelper::ReadFields( boost::python::object instance )
{
	m_pRestore->PyReadAll( instance );
}

#ifndef CLIENT_DLL
void PyRestoreHelper::ReadOutputEvent( PyOutputEvent &ev )
{
	// Hacky code duplicated from CRestore::ReadBasicField
	const char *pFieldName = m_pRestore->GetSaveRestoreSegment()->StringFromSymbol( m_pActiveHeader->symbol );

	typedescription_t typeDesc = { FIELD_CUSTOM, pFieldName, -1, 1, FTYPEDESC_OUTPUT | FTYPEDESC_SAVE | FTYPEDESC_KEY, "" /* output name */, eventFuncs };

	// No corresponding "block" (see write) as it was used as the header of the field
	int posNextField = m_pRestore->GetReadPos() + m_pActiveHeader->size;

	SaveRestoreFieldInfo_t fieldInfo =
	{
		(char *)&ev,
		NULL,
		&typeDesc
	};
			
	typeDesc.pSaveRestoreOps->Restore( fieldInfo, m_pRestore );
			
	Assert( posNextField >= m_pRestore->GetReadPos() );
	m_pRestore->SetReadPos( posNextField );
}
#endif // CLIENT_DLL

//-----------------------------------------------------------------------------
// Block handler for data not directly related to entities in Python
//-----------------------------------------------------------------------------
static short PYTHON_SAVE_RESTORE_VERSION = 1;

class CPython_SaveRestoreBlockHandler : public CDefSaveRestoreBlockHandler
{
public:
	const char *GetBlockName()
	{
		return "Python";
	}

	//---------------------------------

	void Save( ISave *pSave )
	{
		try
		{
			CSaveRestoreSegment *pData = pSave->GetSaveRestoreSegment();

			int iHeaderPos = pData->GetCurPos();
			int count = -1;
			pSave->WriteInt( &count, 1 );

			// Send signal to collect fields
			boost::python::dict kwargs;
			kwargs["sender"] = boost::python::object();
			kwargs["fields"] = boost::python::dict();
			boost::python::object signal = SrcPySystem()->Get( "saverestore_save", "core.signals", true );
			SrcPySystem()->CallSignal( signal, kwargs );

			// Save the fields
			count = 0;
			boost::python::object items = kwargs["fields"].attr("items")();
			boost::python::object iterator = items.attr("__iter__")();
			unsigned long ulCount = boost::python::len(items); 
			for( unsigned long u = 0; u < ulCount; u++ )
			{
				boost::python::object item = iterator.attr( PY_NEXT_METHODNAME )();

				const char *pFieldName = boost::python::extract< const char * >( item[0] );
				const char *pFieldValue = boost::python::extract< const char * >( item[1] );

				pSave->WriteString( pFieldName, pFieldValue );
				count += 1;
			}

			int iCurPos = pData->GetCurPos();
			int iRewind = iCurPos - iHeaderPos;
			pData->Rewind( iRewind );
			pSave->WriteInt( &count, 1 );
			iCurPos = pData->GetCurPos();
			pData->MoveCurPos( iRewind - ( iCurPos - iHeaderPos ) );
		}
		catch( boost::python::error_already_set & ) 
		{
			PyErr_Print();
		}
	}

	//---------------------------------

	void WriteSaveHeaders( ISave *pSave )
	{
		pSave->WriteShort( &PYTHON_SAVE_RESTORE_VERSION );
	}

	//---------------------------------

	void ReadRestoreHeaders( IRestore *pRestore )
	{
		// No reason why any future version shouldn't try to retain backward compatability. The default here is to not do so.
		short version;
		pRestore->ReadShort( &version );
		m_fDoLoad = ( version == PYTHON_SAVE_RESTORE_VERSION );
	}

	//---------------------------------

	void Restore( IRestore *pRestore, bool createPlayers )
	{
		if ( m_fDoLoad )
		{
			try
			{
				// Read fields, all strings
				boost::python::dict fields;

				int nFields = pRestore->ReadInt();

				char buf[2048];
				SaveRestoreRecordHeader_t header;

				for( int i = 0; i < nFields; i++ )
				{
					pRestore->ReadHeader( &header );

					const char *pFieldName = pRestore->StringFromHeaderSymbol( header.symbol );
					pRestore->ReadString( buf, sizeof( buf ), 0 );

					fields[pFieldName] = boost::python::object( buf );
				}

				// Send signal with restored fields around
				boost::python::dict kwargs;
				kwargs["sender"] = boost::python::object();
				kwargs["fields"] = fields;
				boost::python::object signal = SrcPySystem()->Get( "saverestore_restore", "core.signals", true );
				SrcPySystem()->CallSignal( signal, kwargs );
			}
			catch( boost::python::error_already_set & ) 
			{
				PyErr_Print();
			}
		}
	}

private:
	bool m_fDoLoad;
};

//-----------------------------------------------------------------------------

CPython_SaveRestoreBlockHandler g_Python_SaveRestoreBlockHandler;

//-------------------------------------

ISaveRestoreBlockHandler *GetPythonSaveRestoreBlockHandler()
{
	return &g_Python_SaveRestoreBlockHandler;
}
