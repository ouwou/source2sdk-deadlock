#pragma once
#include "animlib/NmPercent_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 4
	// Size: 0x8
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct NmSyncTrackTime_t
	{
	public:
		int32_t m_nEventIdx; // 0x0		
		animlib::NmPercent_t m_percentageThrough; // 0x4		
	};
};
