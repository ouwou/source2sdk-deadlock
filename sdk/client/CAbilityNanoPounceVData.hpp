#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x17f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityNanoPounceVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ChannelParticle; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeSlowParticle; // 0x15d0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LaunchParticle; // 0x16b0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x1790		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_SlowModifier; // 0x17a0		
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x17b0		
		// MPropertyStartGroup "Gameplay"
		float m_flPounceDistanceFromTarget; // 0x17c0		
		float m_flPounceTargetOffset; // 0x17c4		
		float m_flPounceToTargetMinStartTime; // 0x17c8		
		float m_flPounceToTargetMaxStartTime; // 0x17cc		
		float m_flPounceToEnemyMaxTime; // 0x17d0		
		float m_flPounceUpForce; // 0x17d4		
		float m_flPounceXYForce; // 0x17d8		
		float m_flPounceNearbyForceFactor; // 0x17dc		
		float m_flPounceMinSpeed; // 0x17e0		
		float m_flPounceToTargetDist; // 0x17e4		
		float m_flAllyMinTargetRange; // 0x17e8		
	};
};
