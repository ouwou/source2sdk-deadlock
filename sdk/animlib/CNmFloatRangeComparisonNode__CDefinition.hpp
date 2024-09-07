#pragma once
#include "animlib/CNmBoolValueNode__CDefinition.hpp"
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
	class CNmFloatRangeComparisonNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
	{
	public:
		Range_t m_range; // 0x10		
		int16_t m_nInputValueNodeIdx; // 0x18		
		bool m_bIsInclusiveCheck; // 0x1a		
	};
};
