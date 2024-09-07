#pragma once
#include "animlib/CNmFloatValueNode__CDefinition.hpp"
#include "animlib/CNmVectorInfoNode__Info_t.hpp"
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
	class CNmVectorInfoNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
	{
	public:
		int16_t m_nInputValueNodeIdx; // 0x10		
		animlib::CNmVectorInfoNode__Info_t m_desiredInfo; // 0x12		
	};
};
