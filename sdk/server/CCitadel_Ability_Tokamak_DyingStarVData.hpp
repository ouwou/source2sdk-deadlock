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
	// Size: 0x16d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_Tokamak_DyingStarVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplosionParticle; // 0x14f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_FlameAuraParticle; // 0x15d0		
		// MPropertyLeafSuggestionProviderFn
		CGlobalSymbol m_strInFlightAnimGraphParam; // 0x16b0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x16b8		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_InFlightModifier; // 0x16c8		
	};
};
