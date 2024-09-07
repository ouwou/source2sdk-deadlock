#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 4
	// Size: 0x28
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct ItemSlotInfo_t
	{
	public:
		int32_t m_arMaxPurchasesForTier[5]; // 0x0		
		float m_arPriceAdjustPercentForTier[5]; // 0x14		
	};
};
