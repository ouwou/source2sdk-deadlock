#pragma once
#include "animlib/NmStateEventTypeCondition_t.hpp"
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
	struct CNmStateEventConditionNode__Condition_t
	{
	public:
		CGlobalSymbol m_eventID; // 0x0		
		animlib::NmStateEventTypeCondition_t m_eventTypeCondition; // 0x8		
	};
};
