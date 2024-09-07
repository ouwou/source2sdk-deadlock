#pragma once
#include "server/CCitadel_BreakablePropPickupVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x320
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_BreakablePropHealthPickupVData : public server::CCitadel_BreakablePropPickupVData
	{
	public:
		// MPropertyFriendlyName "Max health heal percent"
		// MPropertyDescription "Between 0 and 1 (0 and 100%), what percent of max health should a pickup heal"
		float m_flHealMaxHealthPercent; // 0x318		
	};
};
