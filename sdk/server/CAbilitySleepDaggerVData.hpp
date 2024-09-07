#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CCitadelModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1600
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilitySleepDaggerVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle; // 0x14f0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_SleepModifier; // 0x15d0		
		CEmbeddedSubclass<server::CCitadelModifier> m_DrowsyModifier; // 0x15e0		
		CEmbeddedSubclass<server::CCitadelModifier> m_SleepBombModifier; // 0x15f0		
	};
};
