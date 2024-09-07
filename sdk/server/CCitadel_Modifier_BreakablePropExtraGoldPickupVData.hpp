#pragma once
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x600
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_BreakablePropExtraGoldPickupVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Powerup Values"
		int32_t m_iBaseExtraGoldBounty; // 0x5f8		
		// MPropertyGroupName "Powerup Values"
		int32_t m_iPerMinuteExtraGoldBounty; // 0x5fc		
	};
};
