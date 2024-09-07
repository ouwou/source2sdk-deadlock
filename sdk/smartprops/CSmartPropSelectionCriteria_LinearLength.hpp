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
	// Size: 0x148
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MVDataComponentValidGrandParents
	// MPropertyFriendlyName "Linear Length"
	// MPropertyDescription "Specifies the length of this element, used when fitting an element on to a line."
	class CSmartPropSelectionCriteria_LinearLength : public smartprops::CSmartPropSelectionCriteria
	{
	public:
		// MPropertyDescription "Specifies the length of the line that will be taken up if this element is selected."
		CSmartPropAttributeFloat m_flLength; // 0x48		
		// MPropertyDescription "Can this object be scaled. If enabled the minimum and maximum lengths must be set to specify the size range of allowable scale."
		CSmartPropAttributeBool m_bAllowScale; // 0x88		
		// MPropertyFriendlyName "Minimum length"
		// MPropertySuppressExpr "m_bAllowScale == false"
		// MPropertyDescription "Minimum allowable length for the object. Must be <= length. If length is 100 and minimum length is 20, then the object may be assigned a scale in the rage [ 0.2, 1.0 ]."
		CSmartPropAttributeFloat m_flMinLength; // 0xc8		
		// MPropertyFriendlyName "Maximum length"
		// MPropertySuppressExpr "m_bAllowScale == false"
		// MPropertyDescription "Maximum allowable length for the object. Must be >= length. If length is 100 and maximum length is 160, then the object may be assigned a scale in the rage [ 1.0, 1.6 ]."
		CSmartPropAttributeFloat m_flMaxLength; // 0x108		
	};
};
