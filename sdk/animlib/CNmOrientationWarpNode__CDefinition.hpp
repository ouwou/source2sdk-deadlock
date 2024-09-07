#pragma once
#include "animlib/CNmPoseNode__CDefinition.hpp"
#include "animlib/CNmRootMotionData__SamplingMode_t.hpp"
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
	class CNmOrientationWarpNode__CDefinition : public animlib::CNmPoseNode__CDefinition
	{
	public:
		int16_t m_nClipReferenceNodeIdx; // 0x10		
		int16_t m_nTargetValueNodeIdx; // 0x12		
		bool m_bIsOffsetNode; // 0x14		
		bool m_bIsOffsetRelativeToCharacter; // 0x15		
		animlib::CNmRootMotionData__SamplingMode_t m_samplingMode; // 0x16		
	};
};
