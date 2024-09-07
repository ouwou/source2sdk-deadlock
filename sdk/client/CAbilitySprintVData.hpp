#pragma once
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
	// Size: 0x15e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilitySprintVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SprintParticle; // 0x14f0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strSprintSound; // 0x15d0		
		// MPropertyStartGroup "+Sprint Properties"
		// MPropertyDescription "How longer after taking or dealing damage are we considered to be in combat?"
		float m_flInCombatDuration; // 0x15e0		
		float m_flSprintAccMS; // 0x15e4		
	};
};
