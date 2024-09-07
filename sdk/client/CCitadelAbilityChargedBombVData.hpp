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
	// Size: 0x15f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelAbilityChargedBombVData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_ChargeBombModifier; // 0x14f0		
		// MPropertyStartGroup "Visuals"
		CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle; // 0x1500		
		// MPropertyStartGroup "Sounds"
		CSoundEventName m_strExplodeSound; // 0x15e0		
		// MPropertyStartGroup "GamePlay"
		float m_flChargeForMaxDamage; // 0x15f0		
		float m_flMinDamagePercent; // 0x15f4		
	};
};
