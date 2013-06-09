// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "boost/python.hpp"
#include "cbase.h"
#include "mathlib/vmatrix.h"
#include "utlvector.h"
#include "shareddefs.h"
#include "util.h"
#include "takedamageinfo.h"
#include "baseanimating.h"
#include "BaseAnimatingOverlay.h"
#include "baseflex.h"
#include "basecombatcharacter.h"
#include "basegrenade_shared.h"
#include "player.h"
#include "hl2wars_player.h"
#include "unit_base_shared.h"
#include "unit_sense.h"
#include "wars_func_unit.h"
#include "soundent.h"
#include "gib.h"
#include "Sprite.h"
#include "SpriteTrail.h"
#include "smoke_trail.h"
#include "entityoutput.h"
#include "props.h"
#include "modelentities.h"
#include "triggers.h"
#include "wars_weapon.h"
#include "spark.h"
#include "physics_prop_ragdoll.h"
#include "filters.h"
#include "EntityFlame.h"
#include "shared_classnames.h"
#include "npcevent.h"
#include "studio.h"
#include "src_python_entities.h"
#include "isaverestore.h"
#include "saverestore.h"
#include "mapentities_shared.h"
#include "vcollide_parse.h"
#include "hl2wars_player_shared.h"
#include "imouse.h"
#include "props_shared.h"
#include "beam_shared.h"
#include "basecombatweapon_shared.h"
#include "wars_mapboundary.h"
#include "src_python_converters_ents.h"
#include "src_python.h"
#include "tier0/memdbgon.h"
#include "DeadEntity_pypp.hpp"

namespace bp = boost::python;

void register_DeadEntity_class(){

    bp::class_< DeadEntity >( "DeadEntity" )    
        .def( 
            "__nonzero__"
            , (bool ( ::DeadEntity::* )(  ) )( &::DeadEntity::NonZero ) );

}

