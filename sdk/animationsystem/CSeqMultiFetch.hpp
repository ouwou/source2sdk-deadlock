#pragma once
#include "animationsystem/CSeqMultiFetchFlag.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animationsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animationsystem
{
	// Alignment: 8
	// Size: 0x70
	// 
	// MGetKV3ClassDefaults
	class CSeqMultiFetch
	{
	public:
		animationsystem::CSeqMultiFetchFlag m_flags; // 0x0		
		CUtlVector<int16_t> m_localReferenceArray; // 0x8		
		int32_t m_nGroupSize[2]; // 0x20		
		int32_t m_nLocalPose[2]; // 0x28		
		CUtlVector<float> m_poseKeyArray0; // 0x30		
		CUtlVector<float> m_poseKeyArray1; // 0x48		
		int32_t m_nLocalCyclePoseParameter; // 0x60		
		bool m_bCalculatePoseParameters; // 0x64		
		bool m_bFixedBlendWeight; // 0x65		
	private:
		[[maybe_unused]] uint8_t __pad0066[0x2]; // 0x66
	public:
		float m_flFixedBlendWeightVals[2]; // 0x68		
	};
};
