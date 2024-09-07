#pragma once
#include "client/CBaseModifier.hpp"
#include "client/ProjectileBehaviorFlag_t.hpp"
#include "client/ProjectileShape_t.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x370
	// 
	// MGetKV3ClassDefaults
	struct ProjectileInfo_t
	{
	public:
		client::ProjectileBehaviorFlag_t m_nBehaviors; // 0x0		
		// MPropertyStartGroup "Physics"
		float m_flGravityScale; // 0x4		
		float m_flFriction; // 0x8		
		float m_flElasticity; // 0xc		
		float m_flSpeed; // 0x10		
		float m_flUpSpeed; // 0x14		
		float m_flMaxLinearRange; // 0x18		
		float m_flVerticalAimBias; // 0x1c		
		client::ProjectileShape_t m_eProjectileShape; // 0x20		
		// MPropertySuppressExpr "m_eProjectileShape != Sphere"
		float m_flTriggerRadius; // 0x24		
		// MPropertySuppressExpr "m_eProjectileShape != Sphere"
		float m_flPhysicsRadius; // 0x28		
		// MPropertySuppressExpr "m_eProjectileShape != Capsule"
		Vector m_vecCapsulePhysicsCenter1; // 0x2c		
		// MPropertySuppressExpr "m_eProjectileShape != Capsule"
		Vector m_vecCapsulePhysicsCenter2; // 0x38		
		// MPropertySuppressExpr "m_eProjectileShape != Capsule"
		float m_flCapsulePhysicsRadius; // 0x44		
		// MPropertySuppressExpr "m_eProjectileShape != Capsule"
		Vector m_vecCapsuleTriggerCenter1; // 0x48		
		// MPropertySuppressExpr "m_eProjectileShape != Capsule"
		Vector m_vecCapsuleTriggerCenter2; // 0x54		
		// MPropertySuppressExpr "m_eProjectileShape != Capsule"
		float m_flCapsuleTriggerRadius; // 0x60		
	private:
		[[maybe_unused]] uint8_t __pad0064[0x4]; // 0x64
	public:
		// MPropertyStartGroup "Visuals"
		// MPropertyFriendlyName "Trail Particle"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_particle; // 0x68		
		bool m_bHideWarningParticle; // 0x148		
	private:
		[[maybe_unused]] uint8_t __pad0149[0x7]; // 0x149
	public:
		// MPropertyFriendlyName "Warning Particle"
		// MPropertySuppressExpr "m_bHideWarningParticle == true"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_warningParticle; // 0x150		
		// MPropertyFriendlyName "Projectile Model"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_customModel; // 0x230		
		float m_flProjectileModelScale; // 0x310		
	private:
		[[maybe_unused]] uint8_t __pad0314[0x4]; // 0x314
	public:
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_HitSound; // 0x318		
		CSoundEventName m_DetonateSound; // 0x328		
		CSoundEventName m_LoopingSound; // 0x338		
		// MPropertyStartGroup "Tracking"
		float m_flTrackingDampingCoefficient; // 0x348		
		float m_flTrackingDuration; // 0x34c		
		float m_flTrackingStartTime; // 0x350		
		float m_flTrackingEndTime; // 0x354		
		float m_flTrackingStopDuration; // 0x358		
	private:
		[[maybe_unused]] uint8_t __pad035c[0x4]; // 0x35c
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_AutoProjectileModifier; // 0x360		
	};
};
