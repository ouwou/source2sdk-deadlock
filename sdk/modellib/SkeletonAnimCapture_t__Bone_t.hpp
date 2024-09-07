#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 16
	// Size: 0x40
	// 
	// MGetKV3ClassDefaults
	struct SkeletonAnimCapture_t__Bone_t
	{
	public:
		CUtlString m_Name; // 0x0		
		CTransform m_BindPose; // 0x10		
		int32_t m_nParent; // 0x30		
	};
};
