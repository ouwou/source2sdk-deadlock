#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 2
	// Size: 0x8
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct CNmStateMachineNode__TransitionDefinition_t
	{
	public:
		int16_t m_nTargetStateIdx; // 0x0		
		int16_t m_nConditionNodeIdx; // 0x2		
		int16_t m_nTransitionNodeIdx; // 0x4		
		bool m_bCanBeForced; // 0x6		
	};
};
