#pragma once
#include "animgraphlib/StepPhase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
	// Alignment: 8
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	class FootStepTrigger
	{
	public:
		CUtlVector<int32_t> m_tags; // 0x0		
		int32_t m_nFootIndex; // 0x18		
		animgraphlib::StepPhase m_triggerPhase; // 0x1c		
	};
};
