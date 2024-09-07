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
	// Size: 0x18
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmFloatSwitchNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
	{
	public:
		int16_t m_nSwitchValueNodeIdx; // 0x10		
		int16_t m_nTrueValueNodeIdx; // 0x12		
		int16_t m_nFalseValueNodeIdx; // 0x14		
	};
};
