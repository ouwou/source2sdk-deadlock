#pragma once
#include "animlib/CNmFloatMathNode__Operator_t.hpp"
#include "animlib/CNmFloatValueNode__CDefinition.hpp"
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
	class CNmFloatMathNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
	{
	public:
		int16_t m_nInputValueNodeIdxA; // 0x10		
		int16_t m_nInputValueNodeIdxB; // 0x12		
		bool m_bReturnAbsoluteResult; // 0x14		
		animlib::CNmFloatMathNode__Operator_t m_operator; // 0x15		
	private:
		[[maybe_unused]] uint8_t __pad0016[0x2]; // 0x16
	public:
		float m_flValueB; // 0x18		
	};
};
