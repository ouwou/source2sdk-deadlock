#pragma once
#include "animgraphlib/CMotionGraphGroup.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	class CMotionDataSet
	{
	public:
		CUtlVector<animgraphlib::CMotionGraphGroup> m_groups; // 0x0		
		int32_t m_nDimensionCount; // 0x18		
	};
};
