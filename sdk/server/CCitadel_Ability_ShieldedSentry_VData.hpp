#pragma once
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
	// Size: 0x1518
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_ShieldedSentry_VData : public server::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_InnateModifier; // 0x14f0		
		CEmbeddedSubclass<server::CBaseModifier> m_DebuffModifier; // 0x1500		
		// MPropertyStartGroup "Gameplay"
		float m_flDamageFalloffEndScale; // 0x1510		
	};
};
