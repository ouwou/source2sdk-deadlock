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
	// Size: 0x1610
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_FireBombVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x14f0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_ExplodeSound; // 0x15d0		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ProgressBarModifier; // 0x15e0		
		CEmbeddedSubclass<client::CCitadelModifier> m_FireBombModifier; // 0x15f0		
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x1600		
	};
};
