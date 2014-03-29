// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "cbase.h"
#include "npcevent.h"
#include "srcpy_entities.h"
#include "bone_setup.h"
#include "baseprojectile.h"
#include "basegrenade_shared.h"
#include "SkyCamera.h"
#include "ai_basenpc.h"
#include "modelentities.h"
#include "basetoggle.h"
#include "triggers.h"
#include "AI_Criteria.h"
#include "saverestore.h"
#include "vcollide_parse.h"
#include "iservervehicle.h"
#include "gib.h"
#include "spark.h"
#include "filters.h"
#include "EntityFlame.h"
#include "player_resource.h"
#include "props.h"
#include "physics_prop_ragdoll.h"
#include "nav_area.h"
#include "Sprite.h"
#include "SpriteTrail.h"
#include "smoke_trail.h"
#include "beam_shared.h"
#include "hl2wars_player.h"
#include "unit_base_shared.h"
#include "wars_func_unit.h"
#include "hl2wars_player_shared.h"
#include "wars_mapboundary.h"
#include "srcpy_util.h"
#include "wars_weapon.h"
#include "srcpy.h"
#include "tier0/memdbgon.h"
#include "_entities_free_functions_pypp.hpp"

namespace bp = boost::python;

void _entities_register_free_functions(){

    { //::CreateEntityByName
    
        typedef ::CBaseEntity * ( *CreateEntityByName_function_type )( char const *,int,bool );
        
        bp::def( 
            "CreateEntityByName"
            , CreateEntityByName_function_type( &::CreateEntityByName )
            , ( bp::arg("className"), bp::arg("iForceEdictIndex")=(int)(-0x000000001), bp::arg("bNotify")=(bool)(true) )
            , bp::return_value_policy< bp::return_by_value >() );
    
    }

    { //::CreateRagGib
    
        typedef ::CBaseEntity * ( *CreateRagGib_function_type )( char const *,::Vector const &,::QAngle const &,::Vector const &,float,bool );
        
        bp::def( 
            "CreateRagGib"
            , CreateRagGib_function_type( &::CreateRagGib )
            , ( bp::arg("szModel"), bp::arg("vecOrigin"), bp::arg("vecAngles"), bp::arg("vecForce"), bp::arg("flFadeTime")=0.0, bp::arg("bShouldIgnite")=(bool)(false) )
            , bp::return_value_policy< bp::return_by_value >() );
    
    }

    { //::DispatchSpawn
    
        typedef int ( *DispatchSpawn_function_type )( ::CBaseEntity *,bool );
        
        bp::def( 
            "DispatchSpawn"
            , DispatchSpawn_function_type( &::DispatchSpawn )
            , ( bp::arg("pEntity"), bp::arg("bRunVScripts")=(bool)(true) ) );
    
    }

    { //::DoSpark
    
        typedef void ( *DoSpark_function_type )( ::CBaseEntity *,::Vector const &,int,int,bool,::Vector const & );
        
        bp::def( 
            "DoSpark"
            , DoSpark_function_type( &::DoSpark )
            , ( bp::arg("ent"), bp::arg("location"), bp::arg("nMagnitude"), bp::arg("nTrailLength"), bp::arg("bPlaySound"), bp::arg("vecDir") ) );
    
    }

    { //::GetMapBoundaryList
    
        typedef ::CBaseFuncMapBoundary * ( *GetMapBoundaryList_function_type )(  );
        
        bp::def( 
            "GetMapBoundaryList"
            , GetMapBoundaryList_function_type( &::GetMapBoundaryList )
            , bp::return_value_policy< bp::return_by_value >() );
    
    }

    { //::GetPlayerRelationShip
    
        typedef ::Disposition_t ( *GetPlayerRelationShip_function_type )( int,int );
        
        bp::def( 
            "GetPlayerRelationShip"
            , GetPlayerRelationShip_function_type( &::GetPlayerRelationShip )
            , ( bp::arg("p1"), bp::arg("p2") ) );
    
    }

    { //::MapUnits
    
        typedef void ( *MapUnits_function_type )( ::boost::python::object );
        
        bp::def( 
            "MapUnits"
            , MapUnits_function_type( &::MapUnits )
            , ( bp::arg("method") ) );
    
    }

    { //::PropBreakablePrecacheAll
    
        typedef int ( *PropBreakablePrecacheAll_function_type )( ::string_t );
        
        bp::def( 
            "PropBreakablePrecacheAll"
            , PropBreakablePrecacheAll_function_type( &::PropBreakablePrecacheAll )
            , ( bp::arg("modelName") ) );
    
    }

    { //::RadiusDamage
    
        typedef void ( *RadiusDamage_function_type )( ::CTakeDamageInfo const &,::Vector const &,float,int,::CBaseEntity * );
        
        bp::def( 
            "RadiusDamage"
            , RadiusDamage_function_type( &::RadiusDamage )
            , ( bp::arg("info"), bp::arg("vecSrc"), bp::arg("flRadius"), bp::arg("iClassIgnore"), bp::arg("pEntityIgnore") ) );
    
    }

    { //::SetPlayerRelationShip
    
        typedef void ( *SetPlayerRelationShip_function_type )( int,int,::Disposition_t );
        
        bp::def( 
            "SetPlayerRelationShip"
            , SetPlayerRelationShip_function_type( &::SetPlayerRelationShip )
            , ( bp::arg("p1"), bp::arg("p2"), bp::arg("rel") ) );
    
    }

    { //::SpawnBlood
    
        typedef void ( *SpawnBlood_function_type )( ::Vector,::Vector const &,int,float );
        
        bp::def( 
            "SpawnBlood"
            , SpawnBlood_function_type( &::SpawnBlood )
            , ( bp::arg("vecSpot"), bp::arg("vecDir"), bp::arg("bloodColor"), bp::arg("flDamage") ) );
    
    }

}

