#pragma once
#include "animgraphlib/CMotionMetricEvaluator.hpp"
#include "animgraphlib/VelocityMetricMode.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x60
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CFutureVelocityMetricEvaluator : public animgraphlib::CMotionMetricEvaluator
	{
	public:
		float m_flDistance; // 0x50		
		float m_flStoppingDistance; // 0x54		
		float m_flTargetSpeed; // 0x58		
		animgraphlib::VelocityMetricMode m_eMode; // 0x5c		
	};
};
