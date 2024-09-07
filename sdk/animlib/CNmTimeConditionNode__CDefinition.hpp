#pragma once
#include "animlib/CNmBoolValueNode__CDefinition.hpp"
#include "animlib/CNmTimeConditionNode__ComparisonType_t.hpp"
#include "animlib/CNmTimeConditionNode__Operator_t.hpp"
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
	class CNmTimeConditionNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
	{
	public:
		int16_t m_sourceStateNodeIdx; // 0x10		
		int16_t m_nInputValueNodeIdx; // 0x12		
		float m_flComparand; // 0x14		
		animlib::CNmTimeConditionNode__ComparisonType_t m_type; // 0x18		
		animlib::CNmTimeConditionNode__Operator_t m_operator; // 0x19		
	};
};
