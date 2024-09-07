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
	class CCitadel_BreakablePropGoldPickupVData : public server::CCitadel_BreakablePropPickupVData
	{
	public:
		float m_flGoldAmount; // 0x318		
		float m_flGoldPerMinuteAmount; // 0x31c		
	};
};
