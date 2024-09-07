#pragma once
#include "animlib/CNmVectorValueNode__CDefinition.hpp"
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
	class CNmTargetPointNode__CDefinition : public animlib::CNmVectorValueNode__CDefinition
	{
	public:
		int16_t m_nInputValueNodeIdx; // 0x10		
		bool m_bIsWorldSpaceTarget; // 0x12		
	};
};
