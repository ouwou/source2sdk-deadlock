#pragma once
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x10
	// 
	// MGetKV3ClassDefaults
	struct FullSellPriceAbilityUpgrades_t
	{
	public:
		CUtlString m_strAbilityUpgrade; // 0x0		
		entity2::GameTime_t m_unGameTimePurchased; // 0x8		
	};
};
