#pragma once
#include "animlib/NmPercent_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x10
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct CNmSyncTrack__Event_t
	{
	public:
		CGlobalSymbol m_ID; // 0x0		
		animlib::NmPercent_t m_startTime; // 0x8		
		animlib::NmPercent_t m_duration; // 0xc		
	};
};
