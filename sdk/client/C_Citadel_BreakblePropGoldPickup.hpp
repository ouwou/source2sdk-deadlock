#pragma once
#include "client/C_Citadel_BreakblePropPickup.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xb60
	// Has VTable
	// 
	// MNetworkVarNames "int m_iGoldReward"
	class C_Citadel_BreakblePropGoldPickup : public client::C_Citadel_BreakblePropPickup
	{
	public:
		// MNetworkEnable
		int32_t m_iGoldReward; // 0xb58		
	};
};
