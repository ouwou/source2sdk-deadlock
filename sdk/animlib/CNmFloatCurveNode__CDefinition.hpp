#pragma once
#include "animlib/CNmFloatValueNode__CDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x58
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmFloatCurveNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
	{
	public:
		int16_t m_nInputValueNodeIdx; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0012[0x6]; // 0x12
	public:
		CPiecewiseCurve m_curve; // 0x18		
	};
};
