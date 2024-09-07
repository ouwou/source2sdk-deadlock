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
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	struct CitadelStatsVitalityDisplay_t
	{
	public:
		// MPropertyDescription "What stats do we want to show in the top section?"
		CUtlVector<client::EStatsType> m_vecDisplayStats; // 0x0		
		// MPropertyDescription "What stats do we want to show in the other stats section?"
		CUtlVector<client::EStatsType> m_vecOtherDisplayStats; // 0x18		
	};
};
