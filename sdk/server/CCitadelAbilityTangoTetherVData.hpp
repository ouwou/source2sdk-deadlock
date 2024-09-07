#pragma once
#include "client/CRemapFloat.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CBaseModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1b18
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelAbilityTangoTetherVData : public server::CitadelAbilityVData
	{
	public:
		float m_flJumpFallSpeedMax; // 0x14f0		
		float m_flJumpAirDrag; // 0x14f4		
		float m_flJumpAirSpeedMax; // 0x14f8		
		float m_flJumpSpeed; // 0x14fc		
		float m_flJumpPitch; // 0x1500		
		float m_flDashSpeed; // 0x1504		
		float m_flDashCloseEnoughToTarget; // 0x1508		
		float m_flDashLockOntoTargetDist; // 0x150c		
		float m_flVelocityTurnSpringStrength; // 0x1510		
		client::CRemapFloat m_flAngleToSpeedScale; // 0x1514		
		float m_flBackswingDuration; // 0x1524		
		float m_flAnimToStrikePointTime; // 0x1528		
		float m_flGrappleShotFloatTime; // 0x152c		
		float m_flGrappleShotDelayToFlyOnHit; // 0x1530		
		float m_flGrappleSpeed; // 0x1534		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_TetherModifier; // 0x1538		
		CEmbeddedSubclass<server::CBaseModifier> m_GrappleTargetModifier; // 0x1548		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LeapParticle; // 0x1558		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x1638		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlashParticle; // 0x1718		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BulletGrappleTracerParticle; // 0x17f8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_EnemyGrappleParticle; // 0x18d8		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strDamageTarget; // 0x19b8		
		CSoundEventName m_strStartDash; // 0x19c8		
		CSoundEventName m_strStartAttack; // 0x19d8		
		CSoundEventName m_strGrappleHitTarget; // 0x19e8		
		CSoundEventName m_strGrappleHitWorld; // 0x19f8		
		CSoundEventName m_strGrappleHitNothing; // 0x1a08		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x1a18		
		client::CitadelCameraOperationsSequence_t m_cameraSequenceAttacking; // 0x1a98		
	};
};
