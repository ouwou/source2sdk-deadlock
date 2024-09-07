#pragma once
#include "animgraphlib/FootFixedData_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	struct FootPinningPoseOpFixedData_t
	{
	public:
		CUtlVector<animgraphlib::FootFixedData_t> m_footInfo; // 0x0		
		float m_flBlendTime; // 0x18		
		float m_flLockBreakDistance; // 0x1c		
		float m_flMaxLegTwist; // 0x20		
		int32_t m_nHipBoneIndex; // 0x24		
		bool m_bApplyLegTwistLimits; // 0x28		
		bool m_bApplyFootRotationLimits; // 0x29		
	};
};
