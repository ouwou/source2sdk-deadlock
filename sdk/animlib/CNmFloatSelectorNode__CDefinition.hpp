#pragma once
#include "animlib/CNmFloatValueNode__CDefinition.hpp"
#include "animlib/NmEasingOperation_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x78
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmFloatSelectorNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
	{
	public:
		CUtlVectorFixedGrowable<int16_t,5> m_conditionNodeIndices; // 0x10		
		CUtlVectorFixedGrowable<float,5> m_values; // 0x38		
		float m_flDefaultValue; // 0x68		
		float m_flEaseTime; // 0x6c		
		animlib::NmEasingOperation_t m_easingOp; // 0x70		
	};
};
