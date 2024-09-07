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
	// Size: 0x30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmTargetWarpNode__CDefinition : public animlib::CNmPoseNode__CDefinition
	{
	public:
		int16_t m_nClipReferenceNodeIdx; // 0x10		
		int16_t m_nTargetValueNodeIdx; // 0x12		
		animlib::CNmRootMotionData__SamplingMode_t m_samplingMode; // 0x14		
		bool m_bAllowTargetUpdate; // 0x15		
	private:
		[[maybe_unused]] uint8_t __pad0016[0x2]; // 0x16
	public:
		float m_flSamplingPositionErrorThresholdSq; // 0x18		
		float m_flMaxTangentLength; // 0x1c		
		float m_flLerpFallbackDistanceThreshold; // 0x20		
		float m_flTargetUpdateDistanceThreshold; // 0x24		
		float m_flTargetUpdateAngleThresholdRadians; // 0x28		
	};
};
