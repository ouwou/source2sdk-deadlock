#pragma once
#include "animlib/CNmEvent.hpp"
#include "animlib/NmTransitionRule_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x28
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmTransitionEvent : public animlib::CNmEvent
	{
	public:
		animlib::NmTransitionRule_t m_rule; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad0019[0x7]; // 0x19
	public:
		CGlobalSymbol m_ID; // 0x20		
	};
};
