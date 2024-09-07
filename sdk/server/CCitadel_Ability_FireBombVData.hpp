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
	// Size: 0x1610
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_FireBombVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x14f0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ExplodeSound; // 0x15d0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_ProgressBarModifier; // 0x15e0		
		CEmbeddedSubclass<server::CCitadelModifier> m_FireBombModifier; // 0x15f0		
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x1600		
	};
};
