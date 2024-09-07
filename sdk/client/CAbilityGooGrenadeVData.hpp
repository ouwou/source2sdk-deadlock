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
	// Size: 0x16f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityGooGrenadeVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_GooGrenadeImpactModifier; // 0x14f0		
		CEmbeddedSubclass<client::CCitadelModifier> m_GooGrenadePuddleAuraModifier; // 0x1500		
		// MPropertyStartGroup "Particles"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GooGrenadeSkipParticle; // 0x1510		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_GooGrenadeExplodeParticle; // 0x15f0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_GrenadeHitImpactSound; // 0x16d0		
		CSoundEventName m_GrenadeMissImpactSound; // 0x16e0		
		// MPropertyStartGroup "BounceSettings"
		float m_flMinRestitution; // 0x16f0		
		float m_flMaxRestitution; // 0x16f4		
	};
};
