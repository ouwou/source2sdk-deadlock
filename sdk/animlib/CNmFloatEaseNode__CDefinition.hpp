#pragma once
#include "animlib/CNmFloatValueNode__CDefinition.hpp"
#include "animlib/NmEasingOperation_t.hpp"
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
	class CNmFloatEaseNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
	{
	public:
		float m_flEaseTime; // 0x10		
		float m_flStartValue; // 0x14		
		int16_t m_nInputValueNodeIdx; // 0x18		
		animlib::NmEasingOperation_t m_easingOp; // 0x1a		
		bool m_bUseStartValue; // 0x1b		
	};
};
