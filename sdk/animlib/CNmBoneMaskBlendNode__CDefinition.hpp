#pragma once
#include "animlib/CNmBoneMaskValueNode__CDefinition.hpp"
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
	class CNmBoneMaskBlendNode__CDefinition : public animlib::CNmBoneMaskValueNode__CDefinition
	{
	public:
		int16_t m_nSourceMaskNodeIdx; // 0x10		
		int16_t m_nTargetMaskNodeIdx; // 0x12		
		int16_t m_nBlendWeightValueNodeIdx; // 0x14		
	};
};
