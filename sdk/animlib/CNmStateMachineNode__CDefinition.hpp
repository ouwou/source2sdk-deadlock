#pragma once
#include "animlib/CNmPoseNode__CDefinition.hpp"
#include "animlib/CNmStateMachineNode__StateDefinition_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x138
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmStateMachineNode__CDefinition : public animlib::CNmPoseNode__CDefinition
	{
	public:
		CUtlLeanVectorFixedGrowable<animlib::CNmStateMachineNode__StateDefinition_t,5> m_stateDefinitions; // 0x10		
		int16_t m_nDefaultStateIndex; // 0x130		
	};
};
