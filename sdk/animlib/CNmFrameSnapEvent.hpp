#pragma once
#include "animlib/CNmEvent.hpp"
#include "animlib/NmFrameSnapEventMode_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x20
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmFrameSnapEvent : public animlib::CNmEvent
	{
	public:
		animlib::NmFrameSnapEventMode_t m_frameSnapMode; // 0x18		
	};
};
