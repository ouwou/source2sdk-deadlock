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
	// Size: 0x50
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MVDataComponentValidGrandParents
	// MPropertyFriendlyName "Is Valid"
	// MPropertyDescription "Specifies if this element is currently valid choice."
	class CSmartPropSelectionCriteria_IsValid : public smartprops::CSmartPropSelectionCriteria
	{
	public:
		// MPropertyFriendlyName "Valid When"
		// MPropertyDescription "Expression to evaluate to determine if this choice is currently valid."
		// MPropertyAttributeEditor "SmartPropAttributeEditor(expression)"
		CUtlString m_Expression; // 0x48		
	};
};
