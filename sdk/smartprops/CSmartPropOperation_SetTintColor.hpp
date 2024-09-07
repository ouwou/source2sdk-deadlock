#pragma once
#include "smartprops/CSmartPropAttributeApplyColorMode.hpp"
#include "smartprops/CSmartPropAttributeChoiceSelectionMode.hpp"
#include "smartprops/CSmartPropOperation.hpp"
#include "smartprops/ColorChoice_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x128
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Tint Color Choice"
	// MPropertyDescription "Set the color tint to one color out of a pre-selected set of colors."
	// MVDataClassGroup
	class CSmartPropOperation_SetTintColor : public smartprops::CSmartPropOperation
	{
	public:
		// MPropertyFriendlyName "Selection Mode"
		// MPropertyDescription "Specifies how the color is to be selected from the authored set of choices"
		smartprops::CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // 0x50		
		// MPropertyFriendlyName "Color Selection"
		// MPropertyDescription "Specifies the index of the color to pick"
		// MPropertySuppressExpr "( m_SelectionMode != SPECIFIC )"
		CSmartPropAttributeInt m_ColorSelection; // 0x90		
		// MPropertyFriendlyName "Application Mode"
		// MPropertyDescription "Specifies how the selected color should be applied to the current color."
		smartprops::CSmartPropAttributeApplyColorMode m_Mode; // 0xd0		
		// MPropertyDescription "List of possible colors which may be selected"
		CUtlVector<smartprops::ColorChoice_t> m_ColorChoices; // 0x110		
	};
};
