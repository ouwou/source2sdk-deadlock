#pragma once
#include "client/EventSimulate_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x40
	// Has Trivial Destructor
	struct EventAdvanceTick_t : public client::EventSimulate_t
	{
	public:
		int32_t m_nCurrentTick; // 0x30		
		int32_t m_nCurrentTickThisFrame; // 0x34		
		int32_t m_nTotalTicksThisFrame; // 0x38		
		int32_t m_nTotalTicks; // 0x3c		
	};
};
