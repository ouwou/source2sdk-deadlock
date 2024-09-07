#pragma once
#include "modellib/RenderSkeletonBone_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x50
	// 
	// MGetKV3ClassDefaults
	class CRenderSkeleton
	{
	public:
		CUtlVector<modellib::RenderSkeletonBone_t> m_bones; // 0x0		
		CUtlVector<int32_t> m_boneParents; // 0x30		
		int32_t m_nBoneWeightCount; // 0x48		
	};
};
