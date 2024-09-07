#pragma once
#include "animationsystem/RagdollPoseControl.hpp"
#include "animgraphlib/CUnaryUpdateNode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x70
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CRagdollUpdateNode : public animgraphlib::CUnaryUpdateNode
	{
	public:
		int32_t m_nWeightListIndex; // 0x68		
		animationsystem::RagdollPoseControl m_poseControlMethod; // 0x6c		
	};
};
