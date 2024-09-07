#pragma once
#include "animlib/CNmEvent.hpp"
#include "animlib/NmFootPhase_t.hpp"
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
	class CNmFootEvent : public animlib::CNmEvent
	{
	public:
		animlib::NmFootPhase_t m_phase; // 0x18		
	};
};
