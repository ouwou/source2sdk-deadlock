#pragma once
#include "resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "server/CBaseModifier.hpp"
#include "server/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x15f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CAbilityPsychicPulseVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_DebuffModifier; // 0x14f0		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PulseParticle; // 0x1500		
		// MPropertyStartGroup "+Psychic Pulse Properties"
		float m_flCastEffectLifetime; // 0x15e0		
		float m_flConeAngle; // 0x15e4		
		float m_flConeHalfWidth; // 0x15e8		
	};
};
