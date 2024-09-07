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
	class CAbility_Synth_Blitz_VData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BlitzModifier; // 0x14f0		
		CEmbeddedSubclass<server::CCitadelModifier> m_TechAmpModifier; // 0x1500		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SlowParticle; // 0x1510		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strProcSound; // 0x15f0		
	};
};
