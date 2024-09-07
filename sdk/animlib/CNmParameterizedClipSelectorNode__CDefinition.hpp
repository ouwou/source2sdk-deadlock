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
	// Size: 0x28
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmParameterizedClipSelectorNode__CDefinition : public animlib::CNmPoseNode__CDefinition
	{
	public:
		CUtlLeanVectorFixedGrowable<int16_t,5> m_optionNodeIndices; // 0x10		
		int16_t m_parameterNodeIdx; // 0x20		
	};
};
