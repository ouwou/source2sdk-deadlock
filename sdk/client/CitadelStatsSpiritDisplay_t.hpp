#pragma once
#include "client/EStatsType.hpp"
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
	struct CitadelStatsSpiritDisplay_t
	{
	public:
		// MPropertyDescription "What stats do we want to display for Spirit?"
		CUtlVector<client::EStatsType> m_vecDisplayStats; // 0x0		
	};
};
