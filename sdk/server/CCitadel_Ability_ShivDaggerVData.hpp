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
	// Size: 0x17d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_ShivDaggerVData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_DamageDebuffModifier; // 0x14f0		
		CEmbeddedSubclass<server::CCitadelModifier> m_SlowDebuffModifier; // 0x1500		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerStuckParticle; // 0x1510		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerImpactParticle; // 0x15f0		
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DaggerExplodeParticle; // 0x16d0		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strDaggerHitSound; // 0x17b0		
		CSoundEventName m_strDaggerExplodeSound; // 0x17c0		
	};
};
