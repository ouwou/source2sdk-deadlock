#pragma once
#include "modellib/SkeletonBoneBounds_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x60
	// 
	// MGetKV3ClassDefaults
	struct RenderSkeletonBone_t
	{
	public:
		CUtlString m_boneName; // 0x0		
		CUtlString m_parentName; // 0x8		
		matrix3x4_t m_invBindPose; // 0x10		
		modellib::SkeletonBoneBounds_t m_bbox; // 0x40		
		float m_flSphereRadius; // 0x58		
	};
};
