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
	// Size: 0x78
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CPathMetricEvaluator : public animgraphlib::CMotionMetricEvaluator
	{
	public:
		CUtlVector<float> m_pathTimeSamples; // 0x50		
		float m_flDistance; // 0x68		
		bool m_bExtrapolateMovement; // 0x6c		
	private:
		[[maybe_unused]] uint8_t __pad006d[0x3]; // 0x6d
	public:
		float m_flMinExtrapolationSpeed; // 0x70		
	};
};
