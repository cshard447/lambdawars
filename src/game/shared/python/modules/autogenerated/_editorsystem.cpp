// This file has been generated by Py++.

#include "cbase.h"
#ifdef CLIENT_DLL
#include "cbase.h"

#include "editor/editorsystem.h"

#include "srcpy.h"

#include "tier0/memdbgon.h"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_editorsystem){
    bp::docstring_options doc_options( true, true, false );

    { //::CEditorSystem
        typedef bp::class_< CEditorSystem, boost::noncopyable > CEditorSystem_exposer_t;
        CEditorSystem_exposer_t CEditorSystem_exposer = CEditorSystem_exposer_t( "CEditorSystem", bp::no_init );
        bp::scope CEditorSystem_scope( CEditorSystem_exposer );
        bp::enum_< CEditorSystem::EditorInteractionMode_t>("EditorInteractionMode_t")
            .value("EDITORINTERACTION_NONE", CEditorSystem::EDITORINTERACTION_NONE)
            .value("EDITORINTERACTION_SELECT", CEditorSystem::EDITORINTERACTION_SELECT)
            .value("EDITORINTERACTION_ADD", CEditorSystem::EDITORINTERACTION_ADD)
            .value("EDITORINTERACTION_TRANSLATE", CEditorSystem::EDITORINTERACTION_TRANSLATE)
            .value("EDITORINTERACTION_ROTATE", CEditorSystem::EDITORINTERACTION_ROTATE)
            .value("EDITORINTERACTION_COUNT", CEditorSystem::EDITORINTERACTION_COUNT)
            .export_values()
            ;
        { //::CEditorSystem::ClearLoadedMap
        
            typedef void ( ::CEditorSystem::*ClearLoadedMap_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "ClearLoadedMap"
                , ClearLoadedMap_function_type( &::CEditorSystem::ClearLoadedMap ) );
        
        }
        { //::CEditorSystem::ClearSelection
        
            typedef void ( ::CEditorSystem::*ClearSelection_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "ClearSelection"
                , ClearSelection_function_type( &::CEditorSystem::ClearSelection ) );
        
        }
        { //::CEditorSystem::CreateClearSelectionCommand
        
            typedef ::KeyValues * ( ::CEditorSystem::*CreateClearSelectionCommand_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "CreateClearSelectionCommand"
                , CreateClearSelectionCommand_function_type( &::CEditorSystem::CreateClearSelectionCommand )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::CEditorSystem::CreateFloraCreateCommand
        
            typedef ::KeyValues * ( ::CEditorSystem::*CreateFloraCreateCommand_function_type )( ::CWarsFlora *,::Vector const * ) ;
            
            CEditorSystem_exposer.def( 
                "CreateFloraCreateCommand"
                , CreateFloraCreateCommand_function_type( &::CEditorSystem::CreateFloraCreateCommand )
                , ( bp::arg("pFlora"), bp::arg("vOffset")=bp::object() )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::CEditorSystem::DeleteSelection
        
            typedef void ( ::CEditorSystem::*DeleteSelection_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "DeleteSelection"
                , DeleteSelection_function_type( &::CEditorSystem::DeleteSelection ) );
        
        }
        { //::CEditorSystem::DoSelect
        
            typedef void ( ::CEditorSystem::*DoSelect_function_type )( ::C_HL2WarsPlayer * ) ;
            
            CEditorSystem_exposer.def( 
                "DoSelect"
                , DoSelect_function_type( &::CEditorSystem::DoSelect )
                , ( bp::arg("pPlayer") ) );
        
        }
        { //::CEditorSystem::GetCurrentVmfPath
        
            typedef char const * ( ::CEditorSystem::*GetCurrentVmfPath_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "GetCurrentVmfPath"
                , GetCurrentVmfPath_function_type( &::CEditorSystem::GetCurrentVmfPath ) );
        
        }
        { //::CEditorSystem::GetEditorMode
        
            typedef ::CEditorSystem::EditorInteractionMode_t ( ::CEditorSystem::*GetEditorMode_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "GetEditorMode"
                , GetEditorMode_function_type( &::CEditorSystem::GetEditorMode ) );
        
        }
        { //::CEditorSystem::GetLastMapError
        
            typedef char const * ( ::CEditorSystem::*GetLastMapError_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "GetLastMapError"
                , GetLastMapError_function_type( &::CEditorSystem::GetLastMapError ) );
        
        }
        { //::CEditorSystem::Init
        
            typedef bool ( ::CEditorSystem::*Init_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "Init"
                , Init_function_type( &::CEditorSystem::Init ) );
        
        }
        { //::CEditorSystem::IsActive
        
            typedef bool ( ::CEditorSystem::*IsActive_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "IsActive"
                , IsActive_function_type( &::CEditorSystem::IsActive ) );
        
        }
        { //::CEditorSystem::IsMapLoaded
        
            typedef bool ( ::CEditorSystem::*IsMapLoaded_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "IsMapLoaded"
                , IsMapLoaded_function_type( &::CEditorSystem::IsMapLoaded ) );
        
        }
        { //::CEditorSystem::LevelShutdownPreEntity
        
            typedef void ( ::CEditorSystem::*LevelShutdownPreEntity_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "LevelShutdownPreEntity"
                , LevelShutdownPreEntity_function_type( &::CEditorSystem::LevelShutdownPreEntity ) );
        
        }
        { //::CEditorSystem::LoadCurrentVmf
        
            typedef void ( ::CEditorSystem::*LoadCurrentVmf_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "LoadCurrentVmf"
                , LoadCurrentVmf_function_type( &::CEditorSystem::LoadCurrentVmf ) );
        
        }
        { //::CEditorSystem::OnMousePressed
        
            typedef void ( ::CEditorSystem::*OnMousePressed_function_type )( ::vgui::MouseCode ) ;
            
            CEditorSystem_exposer.def( 
                "OnMousePressed"
                , OnMousePressed_function_type( &::CEditorSystem::OnMousePressed )
                , ( bp::arg("code") ) );
        
        }
        { //::CEditorSystem::OnMouseReleased
        
            typedef void ( ::CEditorSystem::*OnMouseReleased_function_type )( ::vgui::MouseCode ) ;
            
            CEditorSystem_exposer.def( 
                "OnMouseReleased"
                , OnMouseReleased_function_type( &::CEditorSystem::OnMouseReleased )
                , ( bp::arg("code") ) );
        
        }
        { //::CEditorSystem::ProcessCommand
        
            typedef bool ( ::CEditorSystem::*ProcessCommand_function_type )( ::KeyValues * ) ;
            
            CEditorSystem_exposer.def( 
                "ProcessCommand"
                , ProcessCommand_function_type( &::CEditorSystem::ProcessCommand )
                , ( bp::arg("pCommand") ) );
        
        }
        { //::CEditorSystem::ProcessCreateCommand
        
            typedef bool ( ::CEditorSystem::*ProcessCreateCommand_function_type )( ::KeyValues * ) ;
            
            CEditorSystem_exposer.def( 
                "ProcessCreateCommand"
                , ProcessCreateCommand_function_type( &::CEditorSystem::ProcessCreateCommand )
                , ( bp::arg("pCommand") ) );
        
        }
        { //::CEditorSystem::ProcessDeleteFloraCommand
        
            typedef bool ( ::CEditorSystem::*ProcessDeleteFloraCommand_function_type )( ::KeyValues * ) ;
            
            CEditorSystem_exposer.def( 
                "ProcessDeleteFloraCommand"
                , ProcessDeleteFloraCommand_function_type( &::CEditorSystem::ProcessDeleteFloraCommand )
                , ( bp::arg("pCommand") ) );
        
        }
        { //::CEditorSystem::ProcessSelectCommand
        
            typedef bool ( ::CEditorSystem::*ProcessSelectCommand_function_type )( ::KeyValues * ) ;
            
            CEditorSystem_exposer.def( 
                "ProcessSelectCommand"
                , ProcessSelectCommand_function_type( &::CEditorSystem::ProcessSelectCommand )
                , ( bp::arg("pCommand") ) );
        
        }
        { //::CEditorSystem::QueueCommand
        
            typedef void ( ::CEditorSystem::*QueueCommand_function_type )( ::KeyValues * ) ;
            
            CEditorSystem_exposer.def( 
                "QueueCommand"
                , QueueCommand_function_type( &::CEditorSystem::QueueCommand )
                , ( bp::arg("pCommand") ) );
        
        }
        { //::CEditorSystem::SetEditorMode
        
            typedef void ( ::CEditorSystem::*SetEditorMode_function_type )( ::CEditorSystem::EditorInteractionMode_t ) ;
            
            CEditorSystem_exposer.def( 
                "SetEditorMode"
                , SetEditorMode_function_type( &::CEditorSystem::SetEditorMode )
                , ( bp::arg("mode") ) );
        
        }
        { //::CEditorSystem::SetSelectionCenterLocked
        
            typedef void ( ::CEditorSystem::*SetSelectionCenterLocked_function_type )( bool ) ;
            
            CEditorSystem_exposer.def( 
                "SetSelectionCenterLocked"
                , SetSelectionCenterLocked_function_type( &::CEditorSystem::SetSelectionCenterLocked )
                , ( bp::arg("locked") ) );
        
        }
        { //::CEditorSystem::Shutdown
        
            typedef void ( ::CEditorSystem::*Shutdown_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "Shutdown"
                , Shutdown_function_type( &::CEditorSystem::Shutdown ) );
        
        }
    }

    { //::EditorSystem
    
        typedef ::CEditorSystem * ( *EditorSystem_function_type )(  );
        
        bp::def( 
            "EditorSystem"
            , EditorSystem_function_type( &::EditorSystem )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }
}
#else
#include "cbase.h"

#include "editor/editorsystem.h"

#include "srcpy.h"

#include "tier0/memdbgon.h"

namespace bp = boost::python;

BOOST_PYTHON_MODULE(_editorsystem){
    bp::docstring_options doc_options( true, true, false );

    { //::CEditorSystem
        typedef bp::class_< CEditorSystem, boost::noncopyable > CEditorSystem_exposer_t;
        CEditorSystem_exposer_t CEditorSystem_exposer = CEditorSystem_exposer_t( "CEditorSystem", bp::no_init );
        bp::scope CEditorSystem_scope( CEditorSystem_exposer );
        bp::enum_< CEditorSystem::EditorInteractionMode_t>("EditorInteractionMode_t")
            .value("EDITORINTERACTION_NONE", CEditorSystem::EDITORINTERACTION_NONE)
            .value("EDITORINTERACTION_SELECT", CEditorSystem::EDITORINTERACTION_SELECT)
            .value("EDITORINTERACTION_ADD", CEditorSystem::EDITORINTERACTION_ADD)
            .value("EDITORINTERACTION_TRANSLATE", CEditorSystem::EDITORINTERACTION_TRANSLATE)
            .value("EDITORINTERACTION_ROTATE", CEditorSystem::EDITORINTERACTION_ROTATE)
            .value("EDITORINTERACTION_COUNT", CEditorSystem::EDITORINTERACTION_COUNT)
            .export_values()
            ;
        { //::CEditorSystem::ClearCopyCommands
        
            typedef void ( ::CEditorSystem::*ClearCopyCommands_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "ClearCopyCommands"
                , ClearCopyCommands_function_type( &::CEditorSystem::ClearCopyCommands ) );
        
        }
        { //::CEditorSystem::ClearLoadedMap
        
            typedef void ( ::CEditorSystem::*ClearLoadedMap_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "ClearLoadedMap"
                , ClearLoadedMap_function_type( &::CEditorSystem::ClearLoadedMap ) );
        
        }
        { //::CEditorSystem::ClearSelection
        
            typedef void ( ::CEditorSystem::*ClearSelection_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "ClearSelection"
                , ClearSelection_function_type( &::CEditorSystem::ClearSelection ) );
        
        }
        { //::CEditorSystem::CopySelection
        
            typedef void ( ::CEditorSystem::*CopySelection_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "CopySelection"
                , CopySelection_function_type( &::CEditorSystem::CopySelection ) );
        
        }
        { //::CEditorSystem::CreateClearSelectionCommand
        
            typedef ::KeyValues * ( ::CEditorSystem::*CreateClearSelectionCommand_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "CreateClearSelectionCommand"
                , CreateClearSelectionCommand_function_type( &::CEditorSystem::CreateClearSelectionCommand )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::CEditorSystem::CreateFloraCreateCommand
        
            typedef ::KeyValues * ( ::CEditorSystem::*CreateFloraCreateCommand_function_type )( ::CWarsFlora *,::Vector const * ) ;
            
            CEditorSystem_exposer.def( 
                "CreateFloraCreateCommand"
                , CreateFloraCreateCommand_function_type( &::CEditorSystem::CreateFloraCreateCommand )
                , ( bp::arg("pFlora"), bp::arg("vOffset")=bp::object() )
                , bp::return_value_policy< bp::return_by_value >() );
        
        }
        { //::CEditorSystem::DeleteSelection
        
            typedef void ( ::CEditorSystem::*DeleteSelection_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "DeleteSelection"
                , DeleteSelection_function_type( &::CEditorSystem::DeleteSelection ) );
        
        }
        { //::CEditorSystem::DoSelect
        
            typedef void ( ::CEditorSystem::*DoSelect_function_type )( ::CHL2WarsPlayer * ) ;
            
            CEditorSystem_exposer.def( 
                "DoSelect"
                , DoSelect_function_type( &::CEditorSystem::DoSelect )
                , ( bp::arg("pPlayer") ) );
        
        }
        { //::CEditorSystem::GetCurrentVmfPath
        
            typedef char const * ( ::CEditorSystem::*GetCurrentVmfPath_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "GetCurrentVmfPath"
                , GetCurrentVmfPath_function_type( &::CEditorSystem::GetCurrentVmfPath ) );
        
        }
        { //::CEditorSystem::GetEditorMode
        
            typedef ::CEditorSystem::EditorInteractionMode_t ( ::CEditorSystem::*GetEditorMode_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "GetEditorMode"
                , GetEditorMode_function_type( &::CEditorSystem::GetEditorMode ) );
        
        }
        { //::CEditorSystem::GetLastMapError
        
            typedef char const * ( ::CEditorSystem::*GetLastMapError_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "GetLastMapError"
                , GetLastMapError_function_type( &::CEditorSystem::GetLastMapError ) );
        
        }
        { //::CEditorSystem::Init
        
            typedef bool ( ::CEditorSystem::*Init_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "Init"
                , Init_function_type( &::CEditorSystem::Init ) );
        
        }
        { //::CEditorSystem::IsActive
        
            typedef bool ( ::CEditorSystem::*IsActive_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "IsActive"
                , IsActive_function_type( &::CEditorSystem::IsActive ) );
        
        }
        { //::CEditorSystem::IsMapLoaded
        
            typedef bool ( ::CEditorSystem::*IsMapLoaded_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "IsMapLoaded"
                , IsMapLoaded_function_type( &::CEditorSystem::IsMapLoaded ) );
        
        }
        { //::CEditorSystem::LevelShutdownPreEntity
        
            typedef void ( ::CEditorSystem::*LevelShutdownPreEntity_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "LevelShutdownPreEntity"
                , LevelShutdownPreEntity_function_type( &::CEditorSystem::LevelShutdownPreEntity ) );
        
        }
        { //::CEditorSystem::LoadCurrentVmf
        
            typedef void ( ::CEditorSystem::*LoadCurrentVmf_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "LoadCurrentVmf"
                , LoadCurrentVmf_function_type( &::CEditorSystem::LoadCurrentVmf ) );
        
        }
        { //::CEditorSystem::OnEntityDeleted
        
            typedef void ( ::CEditorSystem::*OnEntityDeleted_function_type )( ::CBaseEntity * ) ;
            
            CEditorSystem_exposer.def( 
                "OnEntityDeleted"
                , OnEntityDeleted_function_type( &::CEditorSystem::OnEntityDeleted )
                , ( bp::arg("pEntity") ) );
        
        }
        { //::CEditorSystem::PasteSelection
        
            typedef void ( ::CEditorSystem::*PasteSelection_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "PasteSelection"
                , PasteSelection_function_type( &::CEditorSystem::PasteSelection ) );
        
        }
        { //::CEditorSystem::ProcessCommand
        
            typedef bool ( ::CEditorSystem::*ProcessCommand_function_type )( ::KeyValues * ) ;
            
            CEditorSystem_exposer.def( 
                "ProcessCommand"
                , ProcessCommand_function_type( &::CEditorSystem::ProcessCommand )
                , ( bp::arg("pCommand") ) );
        
        }
        { //::CEditorSystem::ProcessCreateCommand
        
            typedef bool ( ::CEditorSystem::*ProcessCreateCommand_function_type )( ::KeyValues * ) ;
            
            CEditorSystem_exposer.def( 
                "ProcessCreateCommand"
                , ProcessCreateCommand_function_type( &::CEditorSystem::ProcessCreateCommand )
                , ( bp::arg("pCommand") ) );
        
        }
        { //::CEditorSystem::ProcessDeleteFloraCommand
        
            typedef bool ( ::CEditorSystem::*ProcessDeleteFloraCommand_function_type )( ::KeyValues * ) ;
            
            CEditorSystem_exposer.def( 
                "ProcessDeleteFloraCommand"
                , ProcessDeleteFloraCommand_function_type( &::CEditorSystem::ProcessDeleteFloraCommand )
                , ( bp::arg("pCommand") ) );
        
        }
        { //::CEditorSystem::ProcessSelectCommand
        
            typedef bool ( ::CEditorSystem::*ProcessSelectCommand_function_type )( ::KeyValues * ) ;
            
            CEditorSystem_exposer.def( 
                "ProcessSelectCommand"
                , ProcessSelectCommand_function_type( &::CEditorSystem::ProcessSelectCommand )
                , ( bp::arg("pCommand") ) );
        
        }
        { //::CEditorSystem::QueueCommand
        
            typedef void ( ::CEditorSystem::*QueueCommand_function_type )( ::KeyValues * ) ;
            
            CEditorSystem_exposer.def( 
                "QueueCommand"
                , QueueCommand_function_type( &::CEditorSystem::QueueCommand )
                , ( bp::arg("pCommand") ) );
        
        }
        { //::CEditorSystem::SaveCurrentVmf
        
            typedef void ( ::CEditorSystem::*SaveCurrentVmf_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "SaveCurrentVmf"
                , SaveCurrentVmf_function_type( &::CEditorSystem::SaveCurrentVmf ) );
        
        }
        { //::CEditorSystem::SetEditorMode
        
            typedef void ( ::CEditorSystem::*SetEditorMode_function_type )( ::CEditorSystem::EditorInteractionMode_t ) ;
            
            CEditorSystem_exposer.def( 
                "SetEditorMode"
                , SetEditorMode_function_type( &::CEditorSystem::SetEditorMode )
                , ( bp::arg("mode") ) );
        
        }
        { //::CEditorSystem::SetSelectionCenterLocked
        
            typedef void ( ::CEditorSystem::*SetSelectionCenterLocked_function_type )( bool ) ;
            
            CEditorSystem_exposer.def( 
                "SetSelectionCenterLocked"
                , SetSelectionCenterLocked_function_type( &::CEditorSystem::SetSelectionCenterLocked )
                , ( bp::arg("locked") ) );
        
        }
        { //::CEditorSystem::Shutdown
        
            typedef void ( ::CEditorSystem::*Shutdown_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "Shutdown"
                , Shutdown_function_type( &::CEditorSystem::Shutdown ) );
        
        }
    }

    { //::EditorSystem
    
        typedef ::CEditorSystem * ( *EditorSystem_function_type )(  );
        
        bp::def( 
            "EditorSystem"
            , EditorSystem_function_type( &::EditorSystem )
            , bp::return_value_policy< bp::reference_existing_object >() );
    
    }
}
#endif

