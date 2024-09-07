#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x50
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CMotionMetricEvaluator
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x18]; // 0x0
	public:
		CUtlVector<float> m_means; // 0x18		
		CUtlVector<float> m_standardDeviations; // 0x30		
		float m_flWeight; // 0x48		
		int32_t m_nDimensionStartIndex; // 0x4c		
	};
};
