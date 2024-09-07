#pragma once
#include "animlib/CNmParameterizedBlendNode__BlendRange_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x48
	// 
	// MGetKV3ClassDefaults
	struct CNmParameterizedBlendNode__Parameterization_t
	{
	public:
		CUtlLeanVectorFixedGrowable<animlib::CNmParameterizedBlendNode__BlendRange_t,5> m_blendRanges; // 0x0		
		Range_t m_parameterRange; // 0x40		
	};
};
