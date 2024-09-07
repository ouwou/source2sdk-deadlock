#pragma once
#include "animlib/CNmBoolValueNode__CDefinition.hpp"
#include "animlib/CNmFloatComparisonNode__Comparison_t.hpp"
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
	class CNmFloatComparisonNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
	{
	public:
		int16_t m_nInputValueNodeIdx; // 0x10		
		int16_t m_nComparandValueNodeIdx; // 0x12		
		animlib::CNmFloatComparisonNode__Comparison_t m_comparison; // 0x14		
	private:
		[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
	public:
		float m_flEpsilon; // 0x18		
		float m_flComparisonValue; // 0x1c		
	};
};
