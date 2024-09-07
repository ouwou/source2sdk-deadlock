#pragma once
#include "animlib/CNmPoseNode__CDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x40
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmParameterizedBlendNode__CDefinition : public animlib::CNmPoseNode__CDefinition
	{
	public:
		CUtlVectorFixedGrowable<int16_t,5> m_sourceNodeIndices; // 0x10		
		int16_t m_nInputParameterValueNodeIdx; // 0x38		
		bool m_bAllowLooping; // 0x3a		
	};
};
