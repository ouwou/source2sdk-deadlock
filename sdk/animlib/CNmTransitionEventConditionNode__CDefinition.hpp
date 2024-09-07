#pragma once
#include "animlib/CNmBitFlags.hpp"
#include "animlib/CNmBoolValueNode__CDefinition.hpp"
#include "animlib/NmTransitionRuleCondition_t.hpp"
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
	class CNmTransitionEventConditionNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
	{
	public:
		CGlobalSymbol m_requireRuleID; // 0x10		
		animlib::CNmBitFlags m_eventConditionRules; // 0x18		
		int16_t m_nSourceStateNodeIdx; // 0x1c		
		animlib::NmTransitionRuleCondition_t m_ruleCondition; // 0x1e		
	};
};
