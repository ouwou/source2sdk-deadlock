#pragma once
#include "smartprops/CSmartPropSelectionCriteria.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x88
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MVDataComponentValidGrandParents
	// MPropertyFriendlyName "Choice Weight"
	// MPropertyDescription "Specifies a weighting value which affects that likelyhood of selecting this element which picking a choice."
	class CSmartPropSelectionCriteria_ChoiceWeight : public smartprops::CSmartPropSelectionCriteria
	{
	public:
		// MPropertyDescription "Relative weight of this choice, higher weighted choices are more likely to be selected."
		CSmartPropAttributeFloat m_flWeight; // 0x48		
	};
};
