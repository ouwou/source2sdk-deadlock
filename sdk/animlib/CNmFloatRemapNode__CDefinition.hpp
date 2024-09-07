#pragma once
#include "animlib/CNmFloatRemapNode__RemapRange_t.hpp"
#include "animlib/CNmFloatValueNode__CDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x28
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmFloatRemapNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
	{
	public:
		int16_t m_nInputValueNodeIdx; // 0x10		
	private:
		[[maybe_unused]] uint8_t __pad0012[0x2]; // 0x12
	public:
		animlib::CNmFloatRemapNode__RemapRange_t m_inputRange; // 0x14		
		animlib::CNmFloatRemapNode__RemapRange_t m_outputRange; // 0x1c		
	};
};
