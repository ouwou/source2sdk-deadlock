#pragma once
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x600
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_BreakablePropExtraGoldPickupVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Powerup Values"
		int32_t m_iBaseExtraGoldBounty; // 0x5f8		
		// MPropertyGroupName "Powerup Values"
		int32_t m_iPerMinuteExtraGoldBounty; // 0x5fc		
	};
};
