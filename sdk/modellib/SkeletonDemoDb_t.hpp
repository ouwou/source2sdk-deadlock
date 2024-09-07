#pragma once
#include "modellib/SkeletonAnimCapture_t__Camera_t.hpp"
#include <cstdint>
namespace source2sdk::modellib
{
	struct SkeletonAnimCapture_t;
};

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x38
	// 
	// MGetKV3ClassDefaults
	struct SkeletonDemoDb_t
	{
	public:
		CUtlVector<modellib::SkeletonAnimCapture_t*> m_AnimCaptures; // 0x0		
		CUtlVector<modellib::SkeletonAnimCapture_t__Camera_t> m_CameraTrack; // 0x18		
		float m_flRecordingTime; // 0x30		
	};
};
