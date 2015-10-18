// This file has been generated by Py++.

#include "cbase.h"
// This file has been generated by Py++.

#include "cbase.h"
#include "npcevent.h"
#include "srcpy_entities.h"
#include "bone_setup.h"
#include "baseprojectile.h"
#include "basegrenade_shared.h"
#include "takedamageinfo.h"
#include "c_ai_basenpc.h"
#include "c_basetoggle.h"
#include "c_triggers.h"
#include "soundinfo.h"
#include "saverestore.h"
#include "saverestoretypes.h"
#include "vcollide_parse.h"
#include "iclientvehicle.h"
#include "steam/steamclientpublic.h"
#include "view_shared.h"
#include "c_playerresource.h"
#include "c_breakableprop.h"
#include "nav_area.h"
#include "Sprite.h"
#include "SpriteTrail.h"
#include "c_smoke_trail.h"
#include "beam_shared.h"
#include "c_hl2wars_player.h"
#include "unit_base_shared.h"
#include "wars_func_unit.h"
#include "hl2wars_player_shared.h"
#include "wars_mapboundary.h"
#include "srcpy_util.h"
#include "c_wars_weapon.h"
#include "wars_flora.h"
#include "unit_baseanimstate.h"
#include "srcpy.h"
#include "tier0/memdbgon.h"
#include "C_Sprite_pypp.hpp"

namespace bp = boost::python;

struct C_Sprite_wrapper : C_Sprite, bp::wrapper< C_Sprite > {

    C_Sprite_wrapper( )
    : C_Sprite( )
      , bp::wrapper< C_Sprite >(){
        // null constructor
    
    }

    virtual void ClientThink(  ) {
        PY_OVERRIDE_CHECK( C_Sprite, ClientThink )
        PY_OVERRIDE_LOG( _entities, C_Sprite, ClientThink )
        bp::override func_ClientThink = this->get_override( "ClientThink" );
        if( func_ClientThink.ptr() != Py_None )
            try {
                func_ClientThink(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_Sprite::ClientThink(  );
            }
        else
            this->C_Sprite::ClientThink(  );
    }
    
    void default_ClientThink(  ) {
        C_Sprite::ClientThink( );
    }

    virtual void ComputeWorldSpaceSurroundingBox( ::Vector * pVecWorldMins, ::Vector * pVecWorldMaxs ) {
        PY_OVERRIDE_CHECK( C_Sprite, ComputeWorldSpaceSurroundingBox )
        PY_OVERRIDE_LOG( _entities, C_Sprite, ComputeWorldSpaceSurroundingBox )
        bp::override func_ComputeWorldSpaceSurroundingBox = this->get_override( "ComputeWorldSpaceSurroundingBox" );
        if( func_ComputeWorldSpaceSurroundingBox.ptr() != Py_None )
            try {
                func_ComputeWorldSpaceSurroundingBox( boost::python::ptr(pVecWorldMins), boost::python::ptr(pVecWorldMaxs) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_Sprite::ComputeWorldSpaceSurroundingBox( pVecWorldMins, pVecWorldMaxs );
            }
        else
            this->C_Sprite::ComputeWorldSpaceSurroundingBox( pVecWorldMins, pVecWorldMaxs );
    }
    
    void default_ComputeWorldSpaceSurroundingBox( ::Vector * pVecWorldMins, ::Vector * pVecWorldMaxs ) {
        C_Sprite::ComputeWorldSpaceSurroundingBox( pVecWorldMins, pVecWorldMaxs );
    }

    virtual void OnDataChanged( ::DataUpdateType_t updateType ) {
        PY_OVERRIDE_CHECK( C_Sprite, OnDataChanged )
        PY_OVERRIDE_LOG( _entities, C_Sprite, OnDataChanged )
        bp::override func_OnDataChanged = this->get_override( "OnDataChanged" );
        if( func_OnDataChanged.ptr() != Py_None )
            try {
                func_OnDataChanged( updateType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_Sprite::OnDataChanged( updateType );
            }
        else
            this->C_Sprite::OnDataChanged( updateType );
    }
    
    void default_OnDataChanged( ::DataUpdateType_t updateType ) {
        C_Sprite::OnDataChanged( updateType );
    }

    virtual void Precache(  ) {
        PY_OVERRIDE_CHECK( C_Sprite, Precache )
        PY_OVERRIDE_LOG( _entities, C_Sprite, Precache )
        bp::override func_Precache = this->get_override( "Precache" );
        if( func_Precache.ptr() != Py_None )
            try {
                func_Precache(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_Sprite::Precache(  );
            }
        else
            this->C_Sprite::Precache(  );
    }
    
    void default_Precache(  ) {
        C_Sprite::Precache( );
    }

    virtual void Spawn(  ) {
        PY_OVERRIDE_CHECK( C_Sprite, Spawn )
        PY_OVERRIDE_LOG( _entities, C_Sprite, Spawn )
        bp::override func_Spawn = this->get_override( "Spawn" );
        if( func_Spawn.ptr() != Py_None )
            try {
                func_Spawn(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_Sprite::Spawn(  );
            }
        else
            this->C_Sprite::Spawn(  );
    }
    
    void default_Spawn(  ) {
        C_Sprite::Spawn( );
    }

    virtual void Activate(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, Activate )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, Activate )
        bp::override func_Activate = this->get_override( "Activate" );
        if( func_Activate.ptr() != Py_None )
            try {
                func_Activate(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::Activate(  );
            }
        else
            this->C_BaseEntity::Activate(  );
    }
    
    void default_Activate(  ) {
        C_BaseEntity::Activate( );
    }

    void AddToEntityList( ::entity_list_ids_t listId ){
        C_BaseEntity::AddToEntityList( listId );
    }

    virtual bool CreateVPhysics(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, CreateVPhysics )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, CreateVPhysics )
        bp::override func_CreateVPhysics = this->get_override( "CreateVPhysics" );
        if( func_CreateVPhysics.ptr() != Py_None )
            try {
                return func_CreateVPhysics(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::CreateVPhysics(  );
            }
        else
            return this->C_BaseEntity::CreateVPhysics(  );
    }
    
    bool default_CreateVPhysics(  ) {
        return C_BaseEntity::CreateVPhysics( );
    }

    virtual void DoImpactEffect( ::trace_t & tr, int nDamageType ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, DoImpactEffect )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, DoImpactEffect )
        bp::override func_DoImpactEffect = this->get_override( "DoImpactEffect" );
        if( func_DoImpactEffect.ptr() != Py_None )
            try {
                func_DoImpactEffect( boost::ref(tr), nDamageType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::DoImpactEffect( tr, nDamageType );
            }
        else
            this->C_BaseEntity::DoImpactEffect( tr, nDamageType );
    }
    
    void default_DoImpactEffect( ::trace_t & tr, int nDamageType ) {
        C_BaseEntity::DoImpactEffect( tr, nDamageType );
    }

    virtual void EndTouch( ::C_BaseEntity * pOther ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, EndTouch )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, EndTouch )
        bp::override func_EndTouch = this->get_override( "EndTouch" );
        if( func_EndTouch.ptr() != Py_None )
            try {
                func_EndTouch( pOther ? pOther->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::EndTouch( pOther );
            }
        else
            this->C_BaseEntity::EndTouch( pOther );
    }
    
    void default_EndTouch( ::C_BaseEntity * pOther ) {
        C_BaseEntity::EndTouch( pOther );
    }

    virtual ::CollideType_t GetCollideType(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, GetCollideType )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, GetCollideType )
        bp::override func_GetCollideType = this->get_override( "GetCollideType" );
        if( func_GetCollideType.ptr() != Py_None )
            try {
                return func_GetCollideType(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::GetCollideType(  );
            }
        else
            return this->C_BaseEntity::GetCollideType(  );
    }
    
    ::CollideType_t default_GetCollideType(  ) {
        return C_BaseEntity::GetCollideType( );
    }

    virtual ::IMouse * GetIMouse(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, GetIMouse )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, GetIMouse )
        bp::override func_GetIMouse = this->get_override( "GetIMouse" );
        if( func_GetIMouse.ptr() != Py_None )
            try {
                return func_GetIMouse(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::GetIMouse(  );
            }
        else
            return this->C_BaseEntity::GetIMouse(  );
    }
    
    ::IMouse * default_GetIMouse(  ) {
        return C_BaseEntity::GetIMouse( );
    }

    virtual char const * GetTracerType(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, GetTracerType )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, GetTracerType )
        bp::override func_GetTracerType = this->get_override( "GetTracerType" );
        if( func_GetTracerType.ptr() != Py_None )
            try {
                return func_GetTracerType(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::GetTracerType(  );
            }
        else
            return this->C_BaseEntity::GetTracerType(  );
    }
    
    char const * default_GetTracerType(  ) {
        return C_BaseEntity::GetTracerType( );
    }

    virtual bool KeyValue( char const * szKeyName, char const * szValue ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, szValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::KeyValue( szKeyName, szValue );
            }
        else
            return this->C_BaseEntity::KeyValue( szKeyName, szValue );
    }
    
    bool default_KeyValue( char const * szKeyName, char const * szValue ) {
        return C_BaseEntity::KeyValue( szKeyName, szValue );
    }

    virtual bool KeyValue( char const * szKeyName, float flValue ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, flValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::KeyValue( szKeyName, flValue );
            }
        else
            return this->C_BaseEntity::KeyValue( szKeyName, flValue );
    }
    
    bool default_KeyValue( char const * szKeyName, float flValue ) {
        return C_BaseEntity::KeyValue( szKeyName, flValue );
    }

    virtual bool KeyValue( char const * szKeyName, int nValue ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, nValue );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::KeyValue( szKeyName, nValue );
            }
        else
            return this->C_BaseEntity::KeyValue( szKeyName, nValue );
    }
    
    bool default_KeyValue( char const * szKeyName, int nValue ) {
        return C_BaseEntity::KeyValue( szKeyName, nValue );
    }

    virtual bool KeyValue( char const * szKeyName, ::Vector const & vecValue ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, KeyValue )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, KeyValue )
        bp::override func_KeyValue = this->get_override( "KeyValue" );
        if( func_KeyValue.ptr() != Py_None )
            try {
                return func_KeyValue( szKeyName, boost::ref(vecValue) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::KeyValue( szKeyName, vecValue );
            }
        else
            return this->C_BaseEntity::KeyValue( szKeyName, vecValue );
    }
    
    bool default_KeyValue( char const * szKeyName, ::Vector const & vecValue ) {
        return C_BaseEntity::KeyValue( szKeyName, vecValue );
    }

    virtual void MakeTracer( ::Vector const & vecTracerSrc, ::trace_t const & tr, int iTracerType ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, MakeTracer )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, MakeTracer )
        bp::override func_MakeTracer = this->get_override( "MakeTracer" );
        if( func_MakeTracer.ptr() != Py_None )
            try {
                func_MakeTracer( boost::ref(vecTracerSrc), boost::ref(tr), iTracerType );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
            }
        else
            this->C_BaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
    }
    
    void default_MakeTracer( ::Vector const & vecTracerSrc, ::trace_t const & tr, int iTracerType ) {
        C_BaseEntity::MakeTracer( vecTracerSrc, tr, iTracerType );
    }

    virtual void NotifyShouldTransmit( ::ShouldTransmitState_t state ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, NotifyShouldTransmit )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, NotifyShouldTransmit )
        bp::override func_NotifyShouldTransmit = this->get_override( "NotifyShouldTransmit" );
        if( func_NotifyShouldTransmit.ptr() != Py_None )
            try {
                func_NotifyShouldTransmit( state );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::NotifyShouldTransmit( state );
            }
        else
            this->C_BaseEntity::NotifyShouldTransmit( state );
    }
    
    void default_NotifyShouldTransmit( ::ShouldTransmitState_t state ) {
        C_BaseEntity::NotifyShouldTransmit( state );
    }

    virtual void OnChangeOwnerNumber( int old_owner_number ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, OnChangeOwnerNumber )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, OnChangeOwnerNumber )
        bp::override func_OnChangeOwnerNumber = this->get_override( "OnChangeOwnerNumber" );
        if( func_OnChangeOwnerNumber.ptr() != Py_None )
            try {
                func_OnChangeOwnerNumber( old_owner_number );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::OnChangeOwnerNumber( old_owner_number );
            }
        else
            this->C_BaseEntity::OnChangeOwnerNumber( old_owner_number );
    }
    
    void default_OnChangeOwnerNumber( int old_owner_number ) {
        C_BaseEntity::OnChangeOwnerNumber( old_owner_number );
    }

    virtual void OnRestore(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, OnRestore )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, OnRestore )
        bp::override func_OnRestore = this->get_override( "OnRestore" );
        if( func_OnRestore.ptr() != Py_None )
            try {
                func_OnRestore(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::OnRestore(  );
            }
        else
            this->C_BaseEntity::OnRestore(  );
    }
    
    void default_OnRestore(  ) {
        C_BaseEntity::OnRestore( );
    }

    virtual void PyReceiveMessage( ::boost::python::list msg ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, PyReceiveMessage )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, PyReceiveMessage )
        bp::override func_ReceiveMessage = this->get_override( "ReceiveMessage" );
        if( func_ReceiveMessage.ptr() != Py_None )
            try {
                func_ReceiveMessage( msg );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::PyReceiveMessage( msg );
            }
        else
            this->C_BaseEntity::PyReceiveMessage( msg );
    }
    
    void default_ReceiveMessage( ::boost::python::list msg ) {
        C_BaseEntity::PyReceiveMessage( msg );
    }

    void RemoveFromEntityList( ::entity_list_ids_t listId ){
        C_BaseEntity::RemoveFromEntityList( listId );
    }

    virtual int Restore( ::IRestore & restore ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, Restore )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, Restore )
        bp::override func_Restore = this->get_override( "Restore" );
        if( func_Restore.ptr() != Py_None )
            try {
                return func_Restore( boost::ref(restore) );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::Restore( restore );
            }
        else
            return this->C_BaseEntity::Restore( restore );
    }
    
    int default_Restore( ::IRestore & restore ) {
        return C_BaseEntity::Restore( restore );
    }

    virtual bool ShouldDraw(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, ShouldDraw )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, ShouldDraw )
        bp::override func_ShouldDraw = this->get_override( "ShouldDraw" );
        if( func_ShouldDraw.ptr() != Py_None )
            try {
                return func_ShouldDraw(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::ShouldDraw(  );
            }
        else
            return this->C_BaseEntity::ShouldDraw(  );
    }
    
    bool default_ShouldDraw(  ) {
        return C_BaseEntity::ShouldDraw( );
    }

    virtual bool Simulate(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, Simulate )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, Simulate )
        bp::override func_Simulate = this->get_override( "Simulate" );
        if( func_Simulate.ptr() != Py_None )
            try {
                return func_Simulate(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                return this->C_BaseEntity::Simulate(  );
            }
        else
            return this->C_BaseEntity::Simulate(  );
    }
    
    bool default_Simulate(  ) {
        return C_BaseEntity::Simulate( );
    }

    virtual void StartTouch( ::C_BaseEntity * pOther ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, StartTouch )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, StartTouch )
        bp::override func_StartTouch = this->get_override( "StartTouch" );
        if( func_StartTouch.ptr() != Py_None )
            try {
                func_StartTouch( pOther ? pOther->GetPyHandle() : boost::python::object() );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::StartTouch( pOther );
            }
        else
            this->C_BaseEntity::StartTouch( pOther );
    }
    
    void default_StartTouch( ::C_BaseEntity * pOther ) {
        C_BaseEntity::StartTouch( pOther );
    }

    virtual void UpdateOnRemove(  ) {
        PY_OVERRIDE_CHECK( C_BaseEntity, UpdateOnRemove )
        PY_OVERRIDE_LOG( _entities, C_BaseEntity, UpdateOnRemove )
        bp::override func_UpdateOnRemove = this->get_override( "UpdateOnRemove" );
        if( func_UpdateOnRemove.ptr() != Py_None )
            try {
                func_UpdateOnRemove(  );
            } catch(bp::error_already_set &) {
                PyErr_Print();
                this->C_BaseEntity::UpdateOnRemove(  );
            }
        else
            this->C_BaseEntity::UpdateOnRemove(  );
    }
    
    void default_UpdateOnRemove(  ) {
        C_BaseEntity::UpdateOnRemove( );
    }

    virtual PyObject *GetPySelf() const { return bp::detail::wrapper_base_::get_owner(*this); }

    virtual ClientClass* GetClientClass() {
        PY_OVERRIDE_CHECK( C_Sprite, GetClientClass )
        if( PyObject_HasAttrString(GetPyInstance().ptr(), "pyClientClass") )
        {
            try
            {
                ClientClass *pClientClass = boost::python::extract<ClientClass *>( GetPyInstance().attr("pyClientClass") );
                if( pClientClass )
                    return pClientClass;
            }
            catch( bp::error_already_set & ) 
            {
                PyErr_Print();
            }
        }
        return C_Sprite::GetClientClass();
    }

    static int m_lifeState_Get( C_Sprite const & inst ) { return inst.m_lifeState; }

    static void m_lifeState_Set( C_Sprite & inst, int val ) { inst.m_lifeState = val; }

    static int m_takedamage_Get( C_Sprite const & inst ) { return inst.m_takedamage; }

    static void m_takedamage_Set( C_Sprite & inst, int val ) { inst.m_takedamage = val; }

};

void register_C_Sprite_class(){

    bp::class_< C_Sprite_wrapper, bp::bases< C_BaseEntity >, boost::noncopyable >( "C_Sprite", bp::init< >() )    
        .def( 
            "Animate"
            , (void ( ::C_Sprite::* )( float ) )( &::C_Sprite::Animate )
            , ( bp::arg("frames") ) )    
        .def( 
            "AnimateAndDie"
            , (void ( ::C_Sprite::* )( float ) )( &::C_Sprite::AnimateAndDie )
            , ( bp::arg("framerate") ) )    
        .def( 
            "AnimateForTime"
            , (void ( ::C_Sprite::* )( float,float ) )( &::C_Sprite::AnimateForTime )
            , ( bp::arg("framerate"), bp::arg("time") ) )    
        .def( 
            "AnimateThink"
            , (void ( ::C_Sprite::* )(  ) )( &::C_Sprite::AnimateThink ) )    
        .def( 
            "AnimateUntilDead"
            , (void ( ::C_Sprite::* )(  ) )( &::C_Sprite::AnimateUntilDead ) )    
        .def( 
            "BeginFadeOutThink"
            , (void ( ::C_Sprite::* )(  ) )( &::C_Sprite::BeginFadeOutThink ) )    
        .def( 
            "ClientThink"
            , (void ( ::C_Sprite::* )(  ) )(&::C_Sprite::ClientThink)
            , (void ( C_Sprite_wrapper::* )(  ) )(&C_Sprite_wrapper::default_ClientThink) )    
        .def( 
            "ComputeWorldSpaceSurroundingBox"
            , (void ( ::C_Sprite::* )( ::Vector *,::Vector * ) )(&::C_Sprite::ComputeWorldSpaceSurroundingBox)
            , (void ( C_Sprite_wrapper::* )( ::Vector *,::Vector * ) )(&C_Sprite_wrapper::default_ComputeWorldSpaceSurroundingBox)
            , ( bp::arg("pVecWorldMins"), bp::arg("pVecWorldMaxs") ) )    
        .def( 
            "DrawModel"
            , (int ( ::C_Sprite::* )( int,::RenderableInstance_t const & ) )( &::C_Sprite::DrawModel )
            , ( bp::arg("flags"), bp::arg("instance") ) )    
        .def( 
            "EnableWorldSpaceScale"
            , (void ( ::C_Sprite::* )( bool ) )( &::C_Sprite::EnableWorldSpaceScale )
            , ( bp::arg("bEnable") ) )    
        .def( 
            "Expand"
            , (void ( ::C_Sprite::* )( float,float ) )( &::C_Sprite::Expand )
            , ( bp::arg("scaleSpeed"), bp::arg("fadeSpeed") ) )    
        .def( 
            "ExpandThink"
            , (void ( ::C_Sprite::* )(  ) )( &::C_Sprite::ExpandThink ) )    
        .def( 
            "FadeAndDie"
            , (void ( ::C_Sprite::* )( float ) )( &::C_Sprite::FadeAndDie )
            , ( bp::arg("duration") ) )    
        .def( 
            "FadeOutFromSpawn"
            , (void ( ::C_Sprite::* )(  ) )( &::C_Sprite::FadeOutFromSpawn ) )    
        .def( 
            "Frames"
            , (float ( ::C_Sprite::* )(  ) )( &::C_Sprite::Frames ) )    
        .def( 
            "GetBrightness"
            , (int ( ::C_Sprite::* )(  ) )( &::C_Sprite::GetBrightness ) )    
        .def( 
            "GetHDRColorScale"
            , (float ( ::C_Sprite::* )(  ) )( &::C_Sprite::GetHDRColorScale ) )    
        .def( 
            "GetRenderBounds"
            , (void ( ::C_Sprite::* )( ::Vector &,::Vector & ) )( &::C_Sprite::GetRenderBounds )
            , ( bp::arg("vecMins"), bp::arg("vecMaxs") ) )    
        .def( 
            "GetRenderBrightness"
            , (int ( ::C_Sprite::* )(  ) )( &::C_Sprite::GetRenderBrightness ) )    
        .def( 
            "GetRenderOrigin"
            , (::Vector const & ( ::C_Sprite::* )(  ) )( &::C_Sprite::GetRenderOrigin )
            , bp::return_value_policy< bp::copy_const_reference >() )    
        .def( 
            "GetRenderScale"
            , (float ( ::C_Sprite::* )(  ) )( &::C_Sprite::GetRenderScale ) )    
        .def( 
            "GetScale"
            , (float ( ::C_Sprite::* )(  ) )( &::C_Sprite::GetScale ) )    
        .def( 
            "GetToolRecordingState"
            , (void ( ::C_Sprite::* )( ::KeyValues * ) )( &::C_Sprite::GetToolRecordingState )
            , ( bp::arg("msg") ) )    
        .def( 
            "IsOn"
            , (bool ( ::C_Sprite::* )(  ) )( &::C_Sprite::IsOn ) )    
        .def( 
            "IsSprite"
            , (bool ( ::C_Sprite::* )(  ) const)( &::C_Sprite::IsSprite ) )    
        .def( 
            "OnDataChanged"
            , (void ( ::C_Sprite::* )( ::DataUpdateType_t ) )(&::C_Sprite::OnDataChanged)
            , (void ( C_Sprite_wrapper::* )( ::DataUpdateType_t ) )(&C_Sprite_wrapper::default_OnDataChanged)
            , ( bp::arg("updateType") ) )    
        .def( 
            "Precache"
            , (void ( ::C_Sprite::* )(  ) )(&::C_Sprite::Precache)
            , (void ( C_Sprite_wrapper::* )(  ) )(&C_Sprite_wrapper::default_Precache) )    
        .def( 
            "SetAttachment"
            , (void ( ::C_Sprite::* )( ::C_BaseEntity *,int ) )( &::C_Sprite::SetAttachment )
            , ( bp::arg("pEntity"), bp::arg("attachment") ) )    
        .def( 
            "SetBrightness"
            , (void ( ::C_Sprite::* )( int,float ) )( &::C_Sprite::SetBrightness )
            , ( bp::arg("brightness"), bp::arg("duration")=0.0f ) )    
        .def( 
            "SetColor"
            , (void ( ::C_Sprite::* )( int,int,int ) )( &::C_Sprite::SetColor )
            , ( bp::arg("r"), bp::arg("g"), bp::arg("b") ) )    
        .def( 
            "SetGlowProxySize"
            , (void ( ::C_Sprite::* )( float ) )( &::C_Sprite::SetGlowProxySize )
            , ( bp::arg("flSize") ) )    
        .def( 
            "SetModel"
            , (void ( ::C_Sprite::* )( char const * ) )( &::C_Sprite::SetModel )
            , ( bp::arg("szModelName") ) )    
        .def( 
            "SetScale"
            , (void ( ::C_Sprite::* )( float,float ) )( &::C_Sprite::SetScale )
            , ( bp::arg("scale"), bp::arg("duration")=0.0f ) )    
        .def( 
            "SetSpriteScale"
            , (void ( ::C_Sprite::* )( float ) )( &::C_Sprite::SetSpriteScale )
            , ( bp::arg("scale") ) )    
        .def( 
            "SetTexture"
            , (void ( ::C_Sprite::* )( int ) )( &::C_Sprite::SetTexture )
            , ( bp::arg("spriteIndex") ) )    
        .def( 
            "SetTransparency"
            , (void ( ::C_Sprite::* )( int,int,int,int,int,int ) )( &::C_Sprite::SetTransparency )
            , ( bp::arg("rendermode"), bp::arg("r"), bp::arg("g"), bp::arg("b"), bp::arg("a"), bp::arg("fx") ) )    
        .def( 
            "Spawn"
            , (void ( ::C_Sprite::* )(  ) )(&::C_Sprite::Spawn)
            , (void ( C_Sprite_wrapper::* )(  ) )(&C_Sprite_wrapper::default_Spawn) )    
        .def( 
            "SpriteCreatePredictable"
            , (::C_Sprite * (*)( char const *,int,char const *,::Vector const &,bool ))( &::C_Sprite::SpriteCreatePredictable )
            , ( bp::arg("module"), bp::arg("line"), bp::arg("pSpriteName"), bp::arg("origin"), bp::arg("animate") )
            , bp::return_value_policy< bp::return_by_value >() )    
        .def( 
            "SpriteInit"
            , (void ( ::C_Sprite::* )( char const *,::Vector const & ) )( &::C_Sprite::SpriteInit )
            , ( bp::arg("pSpriteName"), bp::arg("origin") ) )    
        .def( 
            "TurnOff"
            , (void ( ::C_Sprite::* )(  ) )( &::C_Sprite::TurnOff ) )    
        .def( 
            "TurnOn"
            , (void ( ::C_Sprite::* )(  ) )( &::C_Sprite::TurnOn ) )    
        .def( 
            "Activate"
            , (void ( ::C_BaseEntity::* )(  ) )(&::C_BaseEntity::Activate)
            , (void ( C_Sprite_wrapper::* )(  ) )(&C_Sprite_wrapper::default_Activate) )    
        .def( 
            "AddToEntityList"
            , (void ( C_Sprite_wrapper::* )( ::entity_list_ids_t ) )(&C_Sprite_wrapper::AddToEntityList)
            , ( bp::arg("listId") ) )    
        .def( 
            "CreateVPhysics"
            , (bool ( ::C_BaseEntity::* )(  ) )(&::C_BaseEntity::CreateVPhysics)
            , (bool ( C_Sprite_wrapper::* )(  ) )(&C_Sprite_wrapper::default_CreateVPhysics) )    
        .def( 
            "DoImpactEffect"
            , (void ( ::C_BaseEntity::* )( ::trace_t &,int ) )(&::C_BaseEntity::DoImpactEffect)
            , (void ( C_Sprite_wrapper::* )( ::trace_t &,int ) )(&C_Sprite_wrapper::default_DoImpactEffect)
            , ( bp::arg("tr"), bp::arg("nDamageType") ) )    
        .def( 
            "EndTouch"
            , (void ( ::C_BaseEntity::* )( ::C_BaseEntity * ) )(&::C_BaseEntity::EndTouch)
            , (void ( C_Sprite_wrapper::* )( ::C_BaseEntity * ) )(&C_Sprite_wrapper::default_EndTouch)
            , ( bp::arg("pOther") ) )    
        .def( 
            "GetCollideType"
            , (::CollideType_t ( ::C_BaseEntity::* )(  ) )(&::C_BaseEntity::GetCollideType)
            , (::CollideType_t ( C_Sprite_wrapper::* )(  ) )(&C_Sprite_wrapper::default_GetCollideType) )    
        .def( 
            "GetIMouse"
            , (::IMouse * ( ::C_BaseEntity::* )(  ) )(&::C_BaseEntity::GetIMouse)
            , (::IMouse * ( C_Sprite_wrapper::* )(  ) )(&C_Sprite_wrapper::default_GetIMouse)
            , bp::return_value_policy< bp::return_by_value >() )    
        .def( 
            "GetTracerType"
            , (char const * ( ::C_BaseEntity::* )(  ) )(&::C_BaseEntity::GetTracerType)
            , (char const * ( C_Sprite_wrapper::* )(  ) )(&C_Sprite_wrapper::default_GetTracerType) )    
        .def( 
            "KeyValue"
            , (bool ( ::C_BaseEntity::* )( char const *,char const * ) )(&::C_BaseEntity::KeyValue)
            , (bool ( C_Sprite_wrapper::* )( char const *,char const * ) )(&C_Sprite_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("szValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::C_BaseEntity::* )( char const *,float ) )(&::C_BaseEntity::KeyValue)
            , (bool ( C_Sprite_wrapper::* )( char const *,float ) )(&C_Sprite_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("flValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::C_BaseEntity::* )( char const *,int ) )(&::C_BaseEntity::KeyValue)
            , (bool ( C_Sprite_wrapper::* )( char const *,int ) )(&C_Sprite_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("nValue") ) )    
        .def( 
            "KeyValue"
            , (bool ( ::C_BaseEntity::* )( char const *,::Vector const & ) )(&::C_BaseEntity::KeyValue)
            , (bool ( C_Sprite_wrapper::* )( char const *,::Vector const & ) )(&C_Sprite_wrapper::default_KeyValue)
            , ( bp::arg("szKeyName"), bp::arg("vecValue") ) )    
        .def( 
            "MakeTracer"
            , (void ( ::C_BaseEntity::* )( ::Vector const &,::trace_t const &,int ) )(&::C_BaseEntity::MakeTracer)
            , (void ( C_Sprite_wrapper::* )( ::Vector const &,::trace_t const &,int ) )(&C_Sprite_wrapper::default_MakeTracer)
            , ( bp::arg("vecTracerSrc"), bp::arg("tr"), bp::arg("iTracerType") ) )    
        .def( 
            "NotifyShouldTransmit"
            , (void ( ::C_BaseEntity::* )( ::ShouldTransmitState_t ) )(&::C_BaseEntity::NotifyShouldTransmit)
            , (void ( C_Sprite_wrapper::* )( ::ShouldTransmitState_t ) )(&C_Sprite_wrapper::default_NotifyShouldTransmit)
            , ( bp::arg("state") ) )    
        .def( 
            "OnChangeOwnerNumber"
            , (void ( ::C_BaseEntity::* )( int ) )(&::C_BaseEntity::OnChangeOwnerNumber)
            , (void ( C_Sprite_wrapper::* )( int ) )(&C_Sprite_wrapper::default_OnChangeOwnerNumber)
            , ( bp::arg("old_owner_number") ) )    
        .def( 
            "OnRestore"
            , (void ( ::C_BaseEntity::* )(  ) )(&::C_BaseEntity::OnRestore)
            , (void ( C_Sprite_wrapper::* )(  ) )(&C_Sprite_wrapper::default_OnRestore) )    
        .def( 
            "ReceiveMessage"
            , (void ( ::C_BaseEntity::* )( ::boost::python::list ) )(&::C_BaseEntity::PyReceiveMessage)
            , (void ( C_Sprite_wrapper::* )( ::boost::python::list ) )(&C_Sprite_wrapper::default_ReceiveMessage)
            , ( bp::arg("msg") ) )    
        .def( 
            "RemoveFromEntityList"
            , (void ( C_Sprite_wrapper::* )( ::entity_list_ids_t ) )(&C_Sprite_wrapper::RemoveFromEntityList)
            , ( bp::arg("listId") ) )    
        .def( 
            "Restore"
            , (int ( ::C_BaseEntity::* )( ::IRestore & ) )(&::C_BaseEntity::Restore)
            , (int ( C_Sprite_wrapper::* )( ::IRestore & ) )(&C_Sprite_wrapper::default_Restore)
            , ( bp::arg("restore") ) )    
        .def( 
            "ShouldDraw"
            , (bool ( ::C_BaseEntity::* )(  ) )(&::C_BaseEntity::ShouldDraw)
            , (bool ( C_Sprite_wrapper::* )(  ) )(&C_Sprite_wrapper::default_ShouldDraw) )    
        .def( 
            "Simulate"
            , (bool ( ::C_BaseEntity::* )(  ) )(&::C_BaseEntity::Simulate)
            , (bool ( C_Sprite_wrapper::* )(  ) )(&C_Sprite_wrapper::default_Simulate) )    
        .def( 
            "StartTouch"
            , (void ( ::C_BaseEntity::* )( ::C_BaseEntity * ) )(&::C_BaseEntity::StartTouch)
            , (void ( C_Sprite_wrapper::* )( ::C_BaseEntity * ) )(&C_Sprite_wrapper::default_StartTouch)
            , ( bp::arg("pOther") ) )    
        .def( 
            "UpdateOnRemove"
            , (void ( ::C_BaseEntity::* )(  ) )(&::C_BaseEntity::UpdateOnRemove)
            , (void ( C_Sprite_wrapper::* )(  ) )(&C_Sprite_wrapper::default_UpdateOnRemove) )    
        .staticmethod( "SpriteCreatePredictable" )    
        .add_property( "lifestate", &C_Sprite_wrapper::m_lifeState_Get, &C_Sprite_wrapper::m_lifeState_Set )    
        .add_property( "takedamage", &C_Sprite_wrapper::m_takedamage_Get, &C_Sprite_wrapper::m_takedamage_Set );

}

