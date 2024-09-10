#pragma once
#include "server/CCitadel_BreakablePropPickup.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x9d8
	// Has VTable
	// 
	// MNetworkVarNames "int m_iGoldReward"
	class CCitadel_BreakablePropGoldPickup : public server::CCitadel_BreakablePropPickup
	{
	public:
		// MNetworkEnable
		int32_t m_iGoldReward; // 0x9d0		
	};
};
