#pragma once
#include "smartprops/CSmartPropAttributeChoiceSelectionMode.hpp"
#include "smartprops/CSmartPropElement_Group.hpp"
#include "smartprops/ConfigurationHandleShape_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x228
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Select Single Child"
	// MPropertyDescription "An element which selects a single choice from its set of child choices."
	class CSmartPropElement_PickOne : public smartprops::CSmartPropElement_Group
	{
	public:
		// MPropertyDescription "Specifies how the initial selection of a choice should be handled."
		smartprops::CSmartPropAttributeChoiceSelectionMode m_SelectionMode; // 0xa0		
		// MPropertyFriendlyName "Specific Child"
		// MPropertyDescription "Specifies the index of the child to pick."
		// MPropertySuppressExpr "( m_SelectionMode != SPECIFIC )"
		CSmartPropAttributeInt m_SpecificChildIndex; // 0xe0		
		// MPropertyDescription "Should a control to select the specific choice be shown when this prop is placed in Hammer."
		CSmartPropAttributeBool m_bConfigurable; // 0x120		
		// MPropertyGroupName "Handle Settings"
		// MPropertyReadonlyExpr
		// MPropertyDescription "Specifies an offset in the local space of the element to apply to the configuration handle."
		CSmartPropAttributeVector m_vHandleOffset; // 0x160		
		// MPropertyGroupName "Handle Settings"
		// MPropertyReadonlyExpr
		// MPropertyDescription "Color to use to display the configuration handle."
		CSmartPropAttributeColor m_HandleColor; // 0x1a0		
		// MPropertyGroupName "Handle Settings"
		// MPropertyReadonlyExpr
		// MPropertyDescription "Size of the configuration handle."
		CSmartPropAttributeInt m_HandleSize; // 0x1e0		
		// MPropertyGroupName "Handle Settings"
		// MPropertyReadonlyExpr
		// MPropertyDescription "Shape of the configuration handle to display."
		smartprops::ConfigurationHandleShape_t m_HandleShape; // 0x220		
	};
};
