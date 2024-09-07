#pragma once
#include "animlib/CNmBitFlags.hpp"
#include "animlib/CNmFloatValueNode__CDefinition.hpp"
#include "animlib/NmFootPhaseCondition_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
	// Alignment: 8
	// Size: 0x18
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CNmFootstepEventPercentageThroughNode__CDefinition : public animlib::CNmFloatValueNode__CDefinition
	{
	public:
		int16_t m_nSourceStateNodeIdx; // 0x10		
		animlib::NmFootPhaseCondition_t m_phaseCondition; // 0x12		
	private:
		[[maybe_unused]] uint8_t __pad0013[0x1]; // 0x13
	public:
		animlib::CNmBitFlags m_eventConditionRules; // 0x14		
	};
};
