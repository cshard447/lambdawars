//====== Copyright � Sandern Corporation, All rights reserved. ===========//
//
// Purpose: 
//
// $NoKeywords: $
//=============================================================================//
#include "cbase.h"
#include "c_unit_base.h"
#include "unit_base_shared.h"
#include "gamestringpool.h"
#include "model_types.h"
#include "cdll_bounded_cvars.h"
#include "glow_outline_effect.h"

#include <vgui_controls/Controls.h>
#include <vgui/ISurface.h>
#include <vgui/IScheme.h>

#include "c_hl2wars_player.h"
#include "hl2wars_util_shared.h"
#include "iinput.h"
#include "networkstringtable_clientdll.h"

#include "unit_baseanimstate.h"

// memdbgon must be the last include file in a .cpp file!!!
#include "tier0/memdbgon.h"

ConVar cl_unit_disable_order_sounds( "cl_unit_disable_order_sounds", "0", FCVAR_ARCHIVE | FCVAR_USERINFO, "Disable playing order sounds." );

static ConVar	cl_wars_smooth		( "cl_wars_smooth", "1", 0, "Smooth unit's render origin after prediction errors" );
static ConVar	cl_wars_smoothtime	( 
	"cl_wars_smoothtime", 
	"0.1", 
	0, 
	"Smooth unit's render origin after prediction error over this many seconds",
	true, 0.01,	// min/max is 0.01/2.0
	true, 2.0
	 );

extern float Unit_ClampYaw( float yawSpeedPerSec, float current, float target, float time );

//-----------------------------------------------------------------------------
// Purpose: Recv proxies
//-----------------------------------------------------------------------------
void RecvProxy_Unit_LocalVelocityX( const CRecvProxyData *pData, void *pStruct, void *pOut )
{
	CUnitBase *pUnit = (CUnitBase *) pStruct;

	Assert( pUnit );

	float flNewVel_x = pData->m_Value.m_Float;
	
	Vector vecVelocity = pUnit->GetLocalVelocity();	

	if( vecVelocity.x != flNewVel_x )	// Should this use an epsilon check?
	{
		//if (vecVelocity.x > 30.0f)
		//{
			
		//}		
		vecVelocity.x = flNewVel_x;
		pUnit->SetLocalVelocity( vecVelocity );
	}
}

void RecvProxy_Unit_LocalVelocityY( const CRecvProxyData *pData, void *pStruct, void *pOut )
{
	CUnitBase *pUnit = (CUnitBase *) pStruct;

	Assert( pUnit );

	float flNewVel_y = pData->m_Value.m_Float;

	Vector vecVelocity = pUnit->GetLocalVelocity();

	if( vecVelocity.y != flNewVel_y )
	{
		vecVelocity.y = flNewVel_y;
		pUnit->SetLocalVelocity( vecVelocity );
	}
}

void RecvProxy_Unit_LocalVelocityZ( const CRecvProxyData *pData, void *pStruct, void *pOut )
{
	CUnitBase *pUnit = (CUnitBase *) pStruct;
	
	Assert( pUnit );

	float flNewVel_z = pData->m_Value.m_Float;

	Vector vecVelocity = pUnit->GetLocalVelocity();

	if( vecVelocity.z != flNewVel_z )
	{
		vecVelocity.z = flNewVel_z;
		pUnit->SetLocalVelocity( vecVelocity );
	}
}

void RecvProxy_Health( const CRecvProxyData *pData, void *pStruct, void *pOut )
{
	CUnitBase *unit = ( CUnitBase * )pStruct;

	unit->SetHealth( (pData->m_Value.m_Int / (float)((1 << SENDPROP_HEALTH_BITS_LOW) - 1)) * unit->GetMaxHealth() );
}

void RecvProxy_Energy( const CRecvProxyData *pData, void *pStruct, void *pOut )
{
	CUnitBase *unit = ( CUnitBase * )pStruct;

	unit->SetEnergy( (pData->m_Value.m_Int / (float)((1 << SENDPROP_HEALTH_BITS_LOW) - 1)) * unit->GetMaxEnergy() );
}

//-----------------------------------------------------------------------------
// Purpose: Recv tables
//-----------------------------------------------------------------------------
extern void RecvProxy_LocalVelocityX( const CRecvProxyData *pData, void *pStruct, void *pOut );
extern void RecvProxy_LocalVelocityY( const CRecvProxyData *pData, void *pStruct, void *pOut );
extern void RecvProxy_LocalVelocityZ( const CRecvProxyData *pData, void *pStruct, void *pOut );
extern void RecvProxy_SimulationTime( const CRecvProxyData *pData, void *pStruct, void *pOut );

BEGIN_RECV_TABLE_NOBASE( CUnitBase, DT_CommanderExclusive )
	// Only received by the commander
	RecvPropVector		( RECVINFO( m_vecBaseVelocity ) ),
	RecvPropFloat		( RECVINFO(m_vecVelocity[0]), 0, RecvProxy_Unit_LocalVelocityX ),
	RecvPropFloat		( RECVINFO(m_vecVelocity[1]), 0, RecvProxy_Unit_LocalVelocityY ),
	RecvPropFloat		( RECVINFO(m_vecVelocity[2]), 0, RecvProxy_Unit_LocalVelocityZ ),
	RecvPropFloat		( RECVINFO(m_vecViewOffset[0]) ),
	RecvPropFloat		( RECVINFO(m_vecViewOffset[1]) ),
	RecvPropFloat		( RECVINFO(m_vecViewOffset[2]) ),
END_RECV_TABLE()

BEGIN_RECV_TABLE_NOBASE( CUnitBase, DT_MinimalTable )
END_RECV_TABLE()

BEGIN_RECV_TABLE_NOBASE( CUnitBase, DT_FullTable )
	RecvPropFloat( RECVINFO_NAME( m_angNetworkAngles[0], m_angRotation[0] ) ),
	RecvPropFloat( RECVINFO_NAME( m_angNetworkAngles[2], m_angRotation[2] ) ),

	RecvPropInt		(RECVINFO( m_iMaxHealth )),
	RecvPropInt		(RECVINFO(m_iMaxEnergy)),

	RecvPropInt		(RECVINFO( m_takedamage )),
	RecvPropInt		(RECVINFO( m_lifeState )),

	RecvPropEHandle		( RECVINFO( m_hSquadUnit ) ),
	RecvPropEHandle		( RECVINFO( m_hCommander ) ),
	RecvPropEHandle		( RECVINFO( m_hEnemy ) ),
	RecvPropEHandle		( RECVINFO( m_hGarrisonedBuilding ) ),

	RecvPropBool( RECVINFO( m_bCrouching ) ),
	RecvPropBool( RECVINFO( m_bClimbing ) ),
END_RECV_TABLE()

BEGIN_RECV_TABLE_NOBASE( CUnitBase, DT_SingleSelectionTable )
	RecvPropInt		(RECVINFO( m_iHealth )),
	RecvPropInt		(RECVINFO( m_iEnergy )),
	RecvPropInt		(RECVINFO( m_iKills )),
END_RECV_TABLE()

BEGIN_RECV_TABLE_NOBASE( CUnitBase, DT_MultiOrNoneSelectionTable )
	RecvPropInt		(RECVINFO( m_iHealth ), 0, RecvProxy_Health ),
	RecvPropInt		(RECVINFO( m_iEnergy ), 0, RecvProxy_Energy ),
END_RECV_TABLE()

IMPLEMENT_NETWORKCLASS_ALIASED( UnitBase, DT_UnitBase )

BEGIN_NETWORK_TABLE( CUnitBase, DT_UnitBase )
	RecvPropVectorXY( RECVINFO_NAME( m_vecNetworkOrigin, m_vecOrigin ), 0, C_BaseEntity::RecvProxy_CellOriginXY ),
	RecvPropFloat( RECVINFO_NAME( m_vecNetworkOrigin[2], m_vecOrigin[2] ), 0, C_BaseEntity::RecvProxy_CellOriginZ ),

	RecvPropFloat( RECVINFO_NAME( m_angNetworkAngles[1], m_angRotation[1] ) ),
	RecvPropFloat( RECVINFO( m_fEyePitch ) ),

	RecvPropInt		(RECVINFO( m_fFlags )),
	RecvPropInt		(RECVINFO( m_NetworkedUnitTypeSymbol )),

	RecvPropDataTable( "minimaldata", 0, 0, &REFERENCE_RECV_TABLE(DT_MinimalTable) ),
	RecvPropDataTable( "fulldata", 0, 0, &REFERENCE_RECV_TABLE(DT_FullTable) ),
	RecvPropDataTable( "commanderdata", 0, 0, &REFERENCE_RECV_TABLE(DT_CommanderExclusive) ),
	RecvPropDataTable( "singleselectiondata", 0, 0, &REFERENCE_RECV_TABLE(DT_SingleSelectionTable) ),
	RecvPropDataTable( "multiornoselectiondata", 0, 0, &REFERENCE_RECV_TABLE(DT_MultiOrNoneSelectionTable) ),
END_RECV_TABLE()

BEGIN_PREDICTION_DATA( CUnitBase )
	//DEFINE_PRED_FIELD( m_flSimulationTime, FIELD_FLOAT, FTYPEDESC_OVERRIDE | FTYPEDESC_PRIVATE | FTYPEDESC_NOERRORCHECK ),

	//DEFINE_PRED_FIELD( m_vecVelocity, FIELD_FLOAT, FTYPEDESC_OVERRIDE | FTYPEDESC_PRIVATE | FTYPEDESC_NOERRORCHECK ),
	DEFINE_PRED_FIELD( m_flCycle, FIELD_FLOAT, FTYPEDESC_OVERRIDE | FTYPEDESC_PRIVATE | FTYPEDESC_NOERRORCHECK ),
	//DEFINE_PRED_FIELD( m_flAnimTime, FIELD_FLOAT, FTYPEDESC_OVERRIDE | FTYPEDESC_PRIVATE | FTYPEDESC_NOERRORCHECK ),	
	DEFINE_PRED_FIELD( m_nSequence, FIELD_INTEGER, FTYPEDESC_OVERRIDE | FTYPEDESC_PRIVATE | FTYPEDESC_NOERRORCHECK ),	
	DEFINE_PRED_FIELD( m_nNewSequenceParity, FIELD_INTEGER, FTYPEDESC_OVERRIDE | FTYPEDESC_PRIVATE | FTYPEDESC_NOERRORCHECK ),
	DEFINE_PRED_FIELD( m_nResetEventsParity, FIELD_INTEGER, FTYPEDESC_OVERRIDE | FTYPEDESC_PRIVATE | FTYPEDESC_NOERRORCHECK ),
	DEFINE_PRED_FIELD( m_hGroundEntity, FIELD_EHANDLE, FTYPEDESC_INSENDTABLE ),
	DEFINE_PRED_FIELD_TOL( m_vecBaseVelocity, FIELD_VECTOR, FTYPEDESC_INSENDTABLE, 0.05 ),

	DEFINE_PRED_FIELD( m_iHealth, FIELD_INTEGER, FTYPEDESC_INSENDTABLE | FTYPEDESC_NOERRORCHECK ),
	DEFINE_PRED_FIELD( m_iMaxHealth, FIELD_INTEGER, FTYPEDESC_INSENDTABLE ),
	DEFINE_PRED_FIELD( m_iEnergy, FIELD_INTEGER, FTYPEDESC_INSENDTABLE | FTYPEDESC_NOERRORCHECK ),
	DEFINE_PRED_FIELD( m_iMaxEnergy, FIELD_INTEGER, FTYPEDESC_INSENDTABLE ),
	DEFINE_PRED_FIELD( m_iKills, FIELD_INTEGER, FTYPEDESC_INSENDTABLE ),
END_PREDICTION_DATA()

//-----------------------------------------------------------------------------
// Purpose: Default on hover paints the health bar
//-----------------------------------------------------------------------------
void CUnitBase::OnHoverPaint()
{
	//DrawHealthBar( this );
}

//-----------------------------------------------------------------------------
// Purpose: 
// Input  : updateType - 
//-----------------------------------------------------------------------------
void CUnitBase::Spawn( )
{
	BaseClass::Spawn();

	SetGlobalFadeScale( 0.0f );
}

//-----------------------------------------------------------------------------
// Purpose: 
// Input  : updateType - 
//-----------------------------------------------------------------------------
void CUnitBase::OnDataChanged( DataUpdateType_t updateType )
{
	BaseClass::OnDataChanged( updateType );

	// Created?
	if( updateType == DATA_UPDATE_CREATED )
	{
		// If owernumber wasn't changed yet, trigger on change once
		if( GetOwnerNumber() == 0 )
			OnChangeOwnerNumber(0);
	}

	// Check if the unit type changed
	if( m_NetworkedUnitTypeSymbol != m_OldNetworkedUnitTypeSymbol )
	{
		if ( m_NetworkedUnitTypeSymbol >= 0 && m_NetworkedUnitTypeSymbol < g_pStringTableGameDBNames->GetMaxStrings() )
		{
			char old_unittype[MAX_PATH];
			old_unittype[0] = '\0';;
			if( m_UnitType != NULL_STRING )
				V_strncpy( old_unittype, m_UnitType, MAX_PATH );

			const char *unittype = g_pStringTableGameDBNames->GetString( m_NetworkedUnitTypeSymbol );
			if( unittype )
			{
				m_UnitType = AllocPooledString( unittype );
			
				OnUnitTypeChanged(old_unittype);
			}
			else
			{
				Warning("CUnitBase::OnDataChanged: invalid string in table\n");
			}
		}
		else
		{
			Warning("CUnitBase::OnDataChanged: Unit received an invalid unit type\n");
		}

		m_OldNetworkedUnitTypeSymbol = m_NetworkedUnitTypeSymbol;
	}

	// Check change commander
	if( m_hOldCommander != m_hCommander )
	{
		UpdateVisibility();
		AddFlag( FL_ONGROUND ); // Should usually be on the ground after leaving control
		m_hOldCommander = m_hCommander;
	}

	// Check change active weapon
	if( m_hOldActiveWeapon != GetActiveWeapon() )
	{
		OnActiveWeaponChanged();
		m_hOldActiveWeapon = GetActiveWeapon();
	}

	// Check for enemy, make sure we are hating on the client (for correct effects)
	if( m_hOldEnemy != m_hEnemy )
	{
		if( m_bForcedEnemyHate )
		{
			if( m_hOldEnemy )
				RemoveEntityRelationship( m_hOldEnemy );
			m_bForcedEnemyHate = false;
		}

		m_hOldEnemy = m_hEnemy;

		if( m_hEnemy && IRelationType( m_hEnemy ) != D_HT )
		{
			AddEntityRelationship( m_hEnemy, D_HT, 0 );
			m_bForcedEnemyHate = true;
		}
	}

	// Health changed?
	if( m_iHealth != m_iOldHealth )
	{
		if( m_iOldHealth > m_iHealth )
			m_fLastTakeDamageTime = gpGlobals->curtime;
		m_iOldHealth = m_iHealth;
	}
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
int CUnitBase::DrawModel( int flags, const RenderableInstance_t &instance )
{
	if( m_bIsBlinking )
	{
		flags |= STUDIO_ITEM_BLINK;
		if( m_fBlinkTimeOut != -1 && m_fBlinkTimeOut < gpGlobals->curtime )
			m_bIsBlinking = false;
	}

	return BaseClass::DrawModel( flags, instance );
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
const Vector& CUnitBase::GetRenderOrigin( void )
{
	//if( m_pAnimState )
	//	return m_pAnimState->GetRenderOrigin();
	return BaseClass::GetRenderOrigin(); 
	//if( m_bCustomLightingOrigin )
	//	return BaseClass::GetRenderOrigin() + m_vCustomLightingOrigin;
	//return BaseClass::GetRenderOrigin(); 
}

//-----------------------------------------------------------------------------
// Purpose: Makes the unit play the blink effect (highlights the unit)
//-----------------------------------------------------------------------------
void CUnitBase::Blink( float blink_time )
{
	m_bIsBlinking = true;
	m_fBlinkTimeOut = blink_time != -1 ? gpGlobals->curtime + blink_time : -1;
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
bool CUnitBase::ShouldDraw( void )
{
	if( GetCommander() && GetCommander() == C_HL2WarsPlayer::GetLocalHL2WarsPlayer() )
	{
		if( !input->CAM_IsThirdPerson() )
			return false;
	}
	return BaseClass::ShouldDraw();
}

ConVar cl_unit_interp_rate( "cl_unit_interp_rate", "0.1", FCVAR_NONE, "Interpolation for units client side." );

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
void CUnitBase::UpdateClientSideAnimation()
{
	if( m_bUpdateClientAnimations )
	{
		// Yaw and Pitch are updated in UserCmd if the unit has a commander
		// The eye pitch is computed by the locomotion component and directly stored in m_fEyePitch.
		if( !GetCommander() )
		{
			m_fEyeYaw = EyeAngles()[YAW];
		}

		if( GetSequence() != -1 )
			FrameAdvance( gpGlobals->frametime );

		if( m_pAnimState )
		{
			m_fSmoothedEyePitch = Unit_ClampYaw( 25.0f, m_fSmoothedEyePitch, m_fEyePitch, gpGlobals->frametime );

			m_pAnimState->Update( m_fEyeYaw, m_fSmoothedEyePitch );
		}
	}

	if( GetSequence() != -1 )
		OnLatchInterpolatedVariables( LATCH_ANIMATION_VAR );
}

//-----------------------------------------------------------------------------
// 
//-----------------------------------------------------------------------------
bool CUnitBase::OnInternalDrawModel( ClientModelRenderInfo_t *pInfo )
{
	if( m_pTeamColorGlowEffect )
	{
		m_pTeamColorGlowEffect->SetColor( GetTeamColor( false ) );
	}
	return BaseClass::OnInternalDrawModel( pInfo );
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
void CUnitBase::EnableTeamColorGlow( )
{
	if( m_pTeamColorGlowEffect )
		return;

	m_pTeamColorGlowEffect = new CGlowObject( this, GetTeamColor(), 1.0, true );
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
void CUnitBase::DisableTeamColorGlow( )
{
	if( !m_pTeamColorGlowEffect )
		return;
	
	delete m_pTeamColorGlowEffect;
	m_pTeamColorGlowEffect = NULL;
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
void CUnitBase::InitPredictable( C_BasePlayer *pOwner )
{
	SetLocalVelocity(vec3_origin);
	BaseClass::InitPredictable( pOwner );
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
void CUnitBase::PostDataUpdate( DataUpdateType_t updateType )
{
	// Base simulation time on when the origin changed
	bool originChanged = ( m_vecOldUnitOrigin != GetLocalOrigin() ) ? true : false;
	if( originChanged )
	{
		m_flOldSimulationTime = m_flSimulationTime;
		m_flSimulationTime = gpGlobals->curtime;
		m_fNextSimulationUpdate = gpGlobals->curtime + cl_unit_interp_rate.GetFloat();

		m_vecOldUnitOrigin = GetLocalOrigin();
	}

	bool bPredict = ShouldPredict();
	if ( bPredict )
	{
		SetSimulatedEveryTick( true );
	}
	else
	{
		SetSimulatedEveryTick( false );

		// estimate velocity for non local players
		float flTimeDelta = m_flSimulationTime - m_flOldSimulationTime;
		if ( flTimeDelta > 0  && !IsEffectActive(EF_NOINTERP) )
		{
			Vector newVelo = (GetNetworkOrigin() - GetOldOrigin()  ) / flTimeDelta;
			SetAbsVelocity( newVelo);
		}
	}

	// if player has switched into this marine, set it to be prediction eligible
	if (bPredict)
	{
		// C_BaseEntity assumes we're networking the entity's angles, so pretend that it
		// networked the same value we already have.
		//SetNetworkAngles( GetLocalAngles() );
		SetPredictionEligible( true );
	}
	else
	{
		SetPredictionEligible( false );
	}

	BaseClass::PostDataUpdate( updateType );

	if ( GetPredictable() && !bPredict )
	{
		MDLCACHE_CRITICAL_SECTION();
		ShutdownPredictable();
	}
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
const QAngle& CUnitBase::GetRenderAngles()
{
	if ( IsRagdoll() )
	{
		return vec3_angle;
	}
	else
	{
		if( !GetAnimState() )
			return BaseClass::GetRenderAngles();

		return GetAnimState()->GetRenderAngles();
	}
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
void CUnitBase::NotePredictionError( const Vector &vDelta )
{
	Vector vOldDelta;

	GetPredictionErrorSmoothingVector( vOldDelta );

	// sum all errors within smoothing time
	m_vecPredictionError = vDelta + vOldDelta;

	// remember when last error happened
	m_flPredictionErrorTime = gpGlobals->curtime;
 
	ResetLatched(); 
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
void CUnitBase::GetPredictionErrorSmoothingVector( Vector &vOffset )
{
	if ( engine->IsPlayingDemo() || !cl_wars_smooth.GetInt() || !cl_predict->GetBool() )
	{
		vOffset.Init();
		return;
	}

	float errorAmount = ( gpGlobals->curtime - m_flPredictionErrorTime ) / cl_wars_smoothtime.GetFloat();

	if ( errorAmount >= 1.0f )
	{
		vOffset.Init();
		return;
	}
	
	errorAmount = 1.0f - errorAmount;

	vOffset = m_vecPredictionError * errorAmount;
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
C_BasePlayer *CUnitBase::GetPredictionOwner()
{
	return GetCommander();
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
bool CUnitBase::ShouldPredict( void )
{
	if (C_BasePlayer::IsLocalPlayer(GetCommander()))
	{
		FOR_EACH_VALID_SPLITSCREEN_PLAYER( hh )
		{
			ACTIVE_SPLITSCREEN_PLAYER_GUARD( hh );

			C_HL2WarsPlayer* player = C_HL2WarsPlayer::GetLocalHL2WarsPlayer();
			if (player && player->GetControlledUnit() == this)
			{
				return true;
			}
		}
	}
	return false;
}

//-----------------------------------------------------------------------------
// Purpose: 
//-----------------------------------------------------------------------------
void CUnitBase::EstimateAbsVelocity( Vector& vel )
{
#if 1
	// FIXME: Unit velocity doesn't seems correct
	if( ShouldPredict() )
	{
		vel = GetAbsVelocity();
		return;
	}
	return BaseClass::EstimateAbsVelocity(vel);
#else
	vel = GetAbsVelocity();
#endif // 0
}
