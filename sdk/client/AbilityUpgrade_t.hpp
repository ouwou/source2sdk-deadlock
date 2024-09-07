#pragma once
#include "client/AbilityUpgrade_t__PropertyUpgrade_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	struct AbilityUpgrade_t
	{
	public:
		// MPropertyAutoExpandSelf
		CUtlVector<client::AbilityUpgrade_t__PropertyUpgrade_t> m_vecPropertyUpgrades; // 0x0		
	};
};
