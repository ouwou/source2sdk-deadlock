#pragma once
#include "animlib/CNmEvent.hpp"
#include "animlib/NmTargetWarpAlgorithm_t.hpp"
#include "animlib/NmTargetWarpRule_t.hpp"
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
	class CNmTargetWarpEvent : public animlib::CNmEvent
	{
	public:
		animlib::NmTargetWarpRule_t m_rule; // 0x18		
		animlib::NmTargetWarpAlgorithm_t m_algorithm; // 0x19		
	};
};
