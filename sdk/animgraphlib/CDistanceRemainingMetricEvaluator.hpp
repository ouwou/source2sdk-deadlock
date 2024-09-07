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
	// Size: 0x68
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CDistanceRemainingMetricEvaluator : public animgraphlib::CMotionMetricEvaluator
	{
	public:
		float m_flMaxDistance; // 0x50		
		float m_flMinDistance; // 0x54		
		float m_flStartGoalFilterDistance; // 0x58		
		float m_flMaxGoalOvershootScale; // 0x5c		
		bool m_bFilterFixedMinDistance; // 0x60		
		bool m_bFilterGoalDistance; // 0x61		
		bool m_bFilterGoalOvershoot; // 0x62		
	};
};
