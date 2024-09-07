#pragma once
#include "modellib/SkeletonAnimCapture_t__FrameStamp_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 16
	// Size: 0xc0
	// 
	// MGetKV3ClassDefaults
	struct SkeletonAnimCapture_t__Frame_t
	{
	public:
		float m_flTime; // 0x0		
		modellib::SkeletonAnimCapture_t__FrameStamp_t m_Stamp; // 0x4		
		CTransform m_Transform; // 0x20		
		bool m_bTeleport; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad0041[0x7]; // 0x41
	public:
		CUtlVector<CTransform> m_CompositeBones; // 0x48		
		CUtlVector<CTransform> m_SimStateBones; // 0x60		
		CUtlVector<CTransform> m_FeModelAnims; // 0x78		
		CUtlVector<VectorAligned> m_FeModelPos; // 0x90		
		CUtlVector<float> m_FlexControllerWeights; // 0xa8		
	};
};
