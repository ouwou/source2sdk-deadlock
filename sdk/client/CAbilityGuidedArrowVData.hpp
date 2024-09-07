#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include "client/CitadelCameraOperationsSequence_t.hpp"
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
	// Size: 0x19d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityGuidedArrowVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Camera"
		client::CitadelCameraOperationsSequence_t m_cameraCancelledTransitionBacktoArcher; // 0x14f0		
		client::CitadelCameraOperationsSequence_t m_cameraExplodedTransitionBackToArcher; // 0x1570		
		float m_flCameraHoldAtExplosion; // 0x15f0		
		float m_flFadeToBlackTime; // 0x15f4		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SpectatingProjectileParticle; // 0x15f8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplosionParticle; // 0x16d8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GuidedArrowChannelParticle; // 0x17b8		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_ProjectileModel; // 0x1898		
		float m_ArrowOffsetX; // 0x1978		
		float m_ArrowCameraDistance; // 0x197c		
		float m_ArrowCameraHeightOffset; // 0x1980		
		float m_ArrowInitialPitch; // 0x1984		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_GuidingModifier; // 0x1988		
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x1998		
		// MPropertyGroupName "Sounds"
		CSoundEventName m_strExplodeSound; // 0x19a8		
		// MPropertyStartGroup "Gameplay"
		float m_flTrackAmount; // 0x19b8		
		float m_flSpeedAccel; // 0x19bc		
		float m_flSpeedDeccel; // 0x19c0		
		float m_flBaseProjectileSpeed; // 0x19c4		
		float m_flMaxProjectileSpeed; // 0x19c8		
		float m_flArrowModelTurnSpringStrength; // 0x19cc		
	};
};
