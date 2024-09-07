#pragma once
#include "animlib/CNmPoseNode__CDefinition.hpp"
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
	class CNmAnimationPoseNode__CDefinition : public animlib::CNmPoseNode__CDefinition
	{
	public:
		int16_t m_nPoseTimeValueNodeIdx; // 0x10		
		int16_t m_nDataSlotIdx; // 0x12		
		Range_t m_inputTimeRemapRange; // 0x14		
		float m_flUserSpecifiedTime; // 0x1c		
		bool m_bUseFramesAsInput; // 0x20		
	};
};
