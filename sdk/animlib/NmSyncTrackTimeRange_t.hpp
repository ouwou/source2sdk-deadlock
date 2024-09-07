#pragma once
#include "animlib/NmSyncTrackTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 4
	// Size: 0x10
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct NmSyncTrackTimeRange_t
	{
	public:
		animlib::NmSyncTrackTime_t m_startTime; // 0x0		
		animlib::NmSyncTrackTime_t m_endTime; // 0x8		
	};
};
