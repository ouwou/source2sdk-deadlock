#pragma once
#include "animlib/CNmFloatAngleMathNode__Operation_t.hpp"
#include "animlib/CNmFloatValueNode__CDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x18
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmFloatAngleMathNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
	{
	public:
		int16_t m_nInputValueNodeIdx; // 0x10		
		animlib::CNmFloatAngleMathNode__Operation_t m_operation; // 0x12		
	};
};
