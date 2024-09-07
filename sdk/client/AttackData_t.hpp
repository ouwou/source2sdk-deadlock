#pragma once
#include "client/CitadelCameraOperationsSequence_t.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x520
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	struct AttackData_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MPropertyDescription "When this attack is used, pause weapon reloads for this long"
		float m_flReloadPauseDuration; // 0x8		
		// MPropertyDescription "Enemies are slowed for this duration when hit by this attack"
		float m_flEnemySlowOnHitDuration; // 0xc		
		// MPropertyDescription "Enemies are slowed to this speed when hit by this attack"
		float m_flEnemySlowOnHitSpeed; // 0x10		
		// MPropertyDescription "Is this a Heavy melee attack? Otherwise it's considered light."
		bool bIsHeavyAttack; // 0x14		
		// MPropertyDescription "When true, this attack can be parried"
		bool m_bCanBeParried; // 0x15		
	private:
		[[maybe_unused]] uint8_t __pad0016[0x2]; // 0x16
	public:
		// MPropertyDescription "How long the button needs to be held to trigger this attack"
		float m_flHoldTimeRequired; // 0x18		
		// MPropertyDescription "How long after triggering until we can perform another melee attack"
		float m_flCooldownOnMiss; // 0x1c		
		float m_flCooldownOnHit; // 0x20		
		// MPropertyDescription "Half width of the cone at the player"
		float m_flTraceConeHalfWidth; // 0x24		
		// MPropertyDescription "Trigger a big screen shake when this attack hits"
		bool m_bApplyScreenShake; // 0x28		
	private:
		[[maybe_unused]] uint8_t __pad0029[0x7]; // 0x29
	public:
		// MPropertyDescription "The curve defining move speed bonus/penalty.  This is how we apply the post-movement controller movement slow."
		CPiecewiseCurve m_SpeedBonusCurve; // 0x30		
		// MPropertyDescription "The curve defining movement controller target speed.  This is what defines the speed boost"
		CPiecewiseCurve m_MovementSpeedCurve; // 0x70		
		// MPropertyDescription "How much acceleration to apply to use when following the movement speed curve"
		float m_flMovementAcc; // 0xb0		
		// MPropertyDescription "How long to be in the attacking state once the attack triggers"
		float m_flAttackStateTime; // 0xb4		
		// MPropertyDescription "Animgraph trigger parameter for this attack"
		CGlobalSymbol m_Trigger; // 0xb8		
		// MPropertyStartGroup "Sounds"
		// MPropertyDescription "Sound to play when this attack activates"
		CSoundEventName m_strActivateSound; // 0xc0		
		// MPropertyDescription "Sound to play if this attack hits"
		CSoundEventName m_strHitSound; // 0xd0		
		CSoundEventName m_strHitHeroSound; // 0xe0		
		CSoundEventName m_strHitDebrisSound; // 0xf0		
		// MPropertyDescription "Sound to play if this attack misses"
		CSoundEventName m_strMissSound; // 0x100		
		// MPropertyDescription "Sound to play when starting the movement dash of this attack"
		CSoundEventName m_strDashStart; // 0x110		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeActivateParticle; // 0x120		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeSwingParticle; // 0x200		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeAttackParticle; // 0x2e0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MeleeImpactParticle; // 0x3c0		
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraSequenceAttackStart; // 0x4a0		
	};
};
