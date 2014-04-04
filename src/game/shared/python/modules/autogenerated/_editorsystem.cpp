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
        { //::CEditorSystem::Init
        
            typedef bool ( ::CEditorSystem::*Init_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "Init"
                , Init_function_type( &::CEditorSystem::Init ) );
        
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
        { //::CEditorSystem::RemoveFloraInRadius
        
            typedef void ( ::CEditorSystem::*RemoveFloraInRadius_function_type )( ::Vector const &,float ) ;
            
            CEditorSystem_exposer.def( 
                "RemoveFloraInRadius"
                , RemoveFloraInRadius_function_type( &::CEditorSystem::RemoveFloraInRadius )
                , ( bp::arg("vPosition"), bp::arg("fRadius") ) );
        
        }
        { //::CEditorSystem::SetEditorMode
        
            typedef void ( ::CEditorSystem::*SetEditorMode_function_type )( ::CEditorSystem::EditorInteractionMode_t ) ;
            
            CEditorSystem_exposer.def( 
                "SetEditorMode"
                , SetEditorMode_function_type( &::CEditorSystem::SetEditorMode )
                , ( bp::arg("mode") ) );
        
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
        { //::CEditorSystem::Init
        
            typedef bool ( ::CEditorSystem::*Init_function_type )(  ) ;
            
            CEditorSystem_exposer.def( 
                "Init"
                , Init_function_type( &::CEditorSystem::Init ) );
        
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
        { //::CEditorSystem::RemoveFloraInRadius
        
            typedef void ( ::CEditorSystem::*RemoveFloraInRadius_function_type )( ::Vector const &,float ) ;
            
            CEditorSystem_exposer.def( 
                "RemoveFloraInRadius"
                , RemoveFloraInRadius_function_type( &::CEditorSystem::RemoveFloraInRadius )
                , ( bp::arg("vPosition"), bp::arg("fRadius") ) );
        
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

