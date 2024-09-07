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
	// Size: 0x1600
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilitySleepDaggerVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x14f0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_SleepModifier; // 0x15d0		
		CEmbeddedSubclass<client::CCitadelModifier> m_DrowsyModifier; // 0x15e0		
		CEmbeddedSubclass<client::CCitadelModifier> m_SleepBombModifier; // 0x15f0		
	};
};
