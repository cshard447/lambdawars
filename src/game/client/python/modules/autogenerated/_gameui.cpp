// This file has been generated by Py++.

#include "cbase.h"



#include "gameui/gameui_util.h"

#include "videocfg/videocfg.h"

#include "srcpy.h"

#include "tier0/memdbgon.h"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_gameui){
    bp::docstring_options doc_options( true, true, false );

    { //::CGameUIConVarRef
        typedef bp::class_< CGameUIConVarRef > CGameUIConVarRef_exposer_t;
        CGameUIConVarRef_exposer_t CGameUIConVarRef_exposer = CGameUIConVarRef_exposer_t( "CGameUIConVarRef", bp::init< char const * >(( bp::arg("pName") )) );
        bp::scope CGameUIConVarRef_scope( CGameUIConVarRef_exposer );
        bp::implicitly_convertible< char const *, CGameUIConVarRef >();
        CGameUIConVarRef_exposer.def( bp::init< char const *, bool >(( bp::arg("pName"), bp::arg("bIgnoreMissing") )) );
        CGameUIConVarRef_exposer.def( bp::init< IConVar * >(( bp::arg("pConVar") )) );
        bp::implicitly_convertible< IConVar *, CGameUIConVarRef >();
        { //::CGameUIConVarRef::GetBaseName
        
            typedef char const * ( ::CGameUIConVarRef::*GetBaseName_function_type )(  ) const;
            
            CGameUIConVarRef_exposer.def( 
                "GetBaseName"
                , GetBaseName_function_type( &::CGameUIConVarRef::GetBaseName ) );
        
        }
        { //::CGameUIConVarRef::GetBool
        
            typedef bool ( ::CGameUIConVarRef::*GetBool_function_type )(  ) const;
            
            CGameUIConVarRef_exposer.def( 
                "GetBool"
                , GetBool_function_type( &::CGameUIConVarRef::GetBool ) );
        
        }
        { //::CGameUIConVarRef::GetDefault
        
            typedef char const * ( ::CGameUIConVarRef::*GetDefault_function_type )(  ) const;
            
            CGameUIConVarRef_exposer.def( 
                "GetDefault"
                , GetDefault_function_type( &::CGameUIConVarRef::GetDefault ) );
        
        }
        { //::CGameUIConVarRef::GetFloat
        
            typedef float ( ::CGameUIConVarRef::*GetFloat_function_type )(  ) const;
            
            CGameUIConVarRef_exposer.def( 
                "GetFloat"
                , GetFloat_function_type( &::CGameUIConVarRef::GetFloat ) );
        
        }
        { //::CGameUIConVarRef::GetInt
        
            typedef int ( ::CGameUIConVarRef::*GetInt_function_type )(  ) const;
            
            CGameUIConVarRef_exposer.def( 
                "GetInt"
                , GetInt_function_type( &::CGameUIConVarRef::GetInt ) );
        
        }
        { //::CGameUIConVarRef::GetName
        
            typedef char const * ( ::CGameUIConVarRef::*GetName_function_type )(  ) const;
            
            CGameUIConVarRef_exposer.def( 
                "GetName"
                , GetName_function_type( &::CGameUIConVarRef::GetName ) );
        
        }
        { //::CGameUIConVarRef::GetString
        
            typedef char const * ( ::CGameUIConVarRef::*GetString_function_type )(  ) const;
            
            CGameUIConVarRef_exposer.def( 
                "GetString"
                , GetString_function_type( &::CGameUIConVarRef::GetString ) );
        
        }
        { //::CGameUIConVarRef::Init
        
            typedef void ( ::CGameUIConVarRef::*Init_function_type )( char const *,bool ) ;
            
            CGameUIConVarRef_exposer.def( 
                "Init"
                , Init_function_type( &::CGameUIConVarRef::Init )
                , ( bp::arg("pName"), bp::arg("bIgnoreMissing") ) );
        
        }
        { //::CGameUIConVarRef::IsFlagSet
        
            typedef bool ( ::CGameUIConVarRef::*IsFlagSet_function_type )( int ) const;
            
            CGameUIConVarRef_exposer.def( 
                "IsFlagSet"
                , IsFlagSet_function_type( &::CGameUIConVarRef::IsFlagSet )
                , ( bp::arg("nFlags") ) );
        
        }
        { //::CGameUIConVarRef::IsValid
        
            typedef bool ( ::CGameUIConVarRef::*IsValid_function_type )(  ) const;
            
            CGameUIConVarRef_exposer.def( 
                "IsValid"
                , IsValid_function_type( &::CGameUIConVarRef::IsValid ) );
        
        }
        { //::CGameUIConVarRef::SetValue
        
            typedef void ( ::CGameUIConVarRef::*SetValue_function_type )( char const * ) ;
            
            CGameUIConVarRef_exposer.def( 
                "SetValue"
                , SetValue_function_type( &::CGameUIConVarRef::SetValue )
                , ( bp::arg("pValue") ) );
        
        }
        { //::CGameUIConVarRef::SetValue
        
            typedef void ( ::CGameUIConVarRef::*SetValue_function_type )( float ) ;
            
            CGameUIConVarRef_exposer.def( 
                "SetValue"
                , SetValue_function_type( &::CGameUIConVarRef::SetValue )
                , ( bp::arg("flValue") ) );
        
        }
        { //::CGameUIConVarRef::SetValue
        
            typedef void ( ::CGameUIConVarRef::*SetValue_function_type )( int ) ;
            
            CGameUIConVarRef_exposer.def( 
                "SetValue"
                , SetValue_function_type( &::CGameUIConVarRef::SetValue )
                , ( bp::arg("nValue") ) );
        
        }
        { //::CGameUIConVarRef::SetValue
        
            typedef void ( ::CGameUIConVarRef::*SetValue_function_type )( bool ) ;
            
            CGameUIConVarRef_exposer.def( 
                "SetValue"
                , SetValue_function_type( &::CGameUIConVarRef::SetValue )
                , ( bp::arg("bValue") ) );
        
        }
    }

    { //::ReadCurrentVideoConfig
    
        typedef bool ( *ReadCurrentVideoConfig_function_type )( ::KeyValues *,bool );
        
        bp::def( 
            "ReadCurrentVideoConfig"
            , ReadCurrentVideoConfig_function_type( &::ReadCurrentVideoConfig )
            , ( bp::arg("pConfigKeys"), bp::arg("bDefault")=(bool)(false) ) );
    
    }
}
