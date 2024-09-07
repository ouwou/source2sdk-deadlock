#pragma once
#include "pulse_runtime_lib/CPulse_OutflowConnection.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x38
	// 
	// MGetKV3ClassDefaults
	struct CPulseCell_Timeline__TimelineEvent_t
	{
	public:
		float m_flTimeFromPrevious; // 0x0		
		bool m_bPauseForPreviousEvents; // 0x4		
		bool m_bCallModeSync; // 0x5		
	private:
		[[maybe_unused]] uint8_t __pad0006[0x2]; // 0x6
	public:
		pulse_runtime_lib::CPulse_OutflowConnection m_EventOutflow; // 0x8		
	};
};
