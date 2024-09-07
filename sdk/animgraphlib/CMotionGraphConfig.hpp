#pragma once
#include "animgraphlib/MotionIndex.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 4
	// Size: 0x20
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CMotionGraphConfig
	{
	public:
		float m_paramValues[4]; // 0x0		
		float m_flDuration; // 0x10		
		animgraphlib::MotionIndex m_nMotionIndex; // 0x14		
		int32_t m_nSampleStart; // 0x18		
		int32_t m_nSampleCount; // 0x1c		
	};
};
