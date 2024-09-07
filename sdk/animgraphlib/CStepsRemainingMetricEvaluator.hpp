#pragma once
#include "animgraphlib/CMotionMetricEvaluator.hpp"
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
	class CStepsRemainingMetricEvaluator : public animgraphlib::CMotionMetricEvaluator
	{
	public:
		CUtlVector<int32_t> m_footIndices; // 0x50		
		float m_flMinStepsRemaining; // 0x68		
	};
};
