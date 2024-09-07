#pragma once
#include "animlib/CNmStateMachineNode__TransitionDefinition_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x38
	// 
	// MGetKV3ClassDefaults
	struct CNmStateMachineNode__StateDefinition_t
	{
	public:
		int16_t m_nStateNodeIdx; // 0x0		
		int16_t m_nEntryConditionNodeIdx; // 0x2		
	private:
		[[maybe_unused]] uint8_t __pad0004[0x4]; // 0x4
	public:
		CUtlLeanVectorFixedGrowable<animlib::CNmStateMachineNode__TransitionDefinition_t,5> m_transitionDefinitions; // 0x8		
	};
};
