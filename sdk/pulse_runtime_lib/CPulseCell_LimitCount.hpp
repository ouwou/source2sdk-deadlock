#pragma once
#include "pulse_runtime_lib/CPulseCell_BaseRequirement.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: pulse_runtime_lib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::pulse_runtime_lib
{
	// Alignment: 8
	// Size: 0x50
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MCellForDomain "BaseDomain"
	// MPulseCellMethodBindings
	// MPulseCellOutflowHookInfo "Limit Count "
	// MPropertyFriendlyName "Limit Count"
	// MPropertyDescription "Skip this node after the limit. Check Type does not apply, the limit will always be checked."
	// MPulseRequirementPass
	class CPulseCell_LimitCount : public pulse_runtime_lib::CPulseCell_BaseRequirement
	{
	public:
		// MPropertyFlattenIntoParentRow
		int32_t m_nLimitCount; // 0x48		
	};
};
