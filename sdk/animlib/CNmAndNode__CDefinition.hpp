#pragma once
#include "animlib/CNmBoolValueNode__CDefinition.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x20
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmAndNode__CDefinition : public animlib::CNmBoolValueNode__CDefinition
	{
	public:
		CUtlLeanVectorFixedGrowable<int16_t,4> m_conditionNodeIndices; // 0x10		
	};
};
