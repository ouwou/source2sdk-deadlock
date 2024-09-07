#pragma once
#include "client/CBaseModifier.hpp"
#include "client/CitadelAbilityVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1518
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Ability_ShieldedSentry_VData : public client::CitadelAbilityVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_InnateModifier; // 0x14f0		
		CEmbeddedSubclass<client::CBaseModifier> m_DebuffModifier; // 0x1500		
		// MPropertyStartGroup "Gameplay"
		float m_flDamageFalloffEndScale; // 0x1510		
	};
};
