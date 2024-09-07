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
	// Size: 0xc8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MVDataComponentValidGrandParents
	// MPropertyFriendlyName "End Cap Settings"
	// MPropertyDescription "Specifies that this is a special part that should be used at the start or end of the line."
	class CSmartPropSelectionCriteria_EndCap : public smartprops::CSmartPropSelectionCriteria
	{
	public:
		// MPropertyDescription "Is this an element which should be placed at the start of the line."
		CSmartPropAttributeBool m_bStart; // 0x48		
		// MPropertyDescription "Is this an element which should be placed at the end of the line."
		CSmartPropAttributeBool m_bEnd; // 0x88		
	};
};
