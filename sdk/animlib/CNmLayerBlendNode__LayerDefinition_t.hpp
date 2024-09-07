#pragma once
#include "animlib/NmPoseBlendMode_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 2
	// Size: 0xc
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct CNmLayerBlendNode__LayerDefinition_t
	{
	public:
		int16_t m_nInputNodeIdx; // 0x0		
		int16_t m_nWeightValueNodeIdx; // 0x2		
		int16_t m_nBoneMaskValueNodeIdx; // 0x4		
		int16_t m_nRootMotionWeightValueNodeIdx; // 0x6		
		bool m_bIsSynchronized; // 0x8		
		bool m_bIgnoreEvents; // 0x9		
		bool m_bIsStateMachineLayer; // 0xa		
		animlib::NmPoseBlendMode_t m_blendMode; // 0xb		
	};
};
