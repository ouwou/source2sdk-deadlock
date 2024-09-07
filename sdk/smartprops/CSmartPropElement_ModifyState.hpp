#pragma once
#include "smartprops/CSmartPropElement.hpp"
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
	// MPropertyFriendlyName "Apply Modifiers"
	// MPropertyDescription "An element which is used to apply a set of modifiers to the state of its parent."
	// MPropertySuppressBaseClassField
	// MVDataOutlinerLabelExpr
	class CSmartPropElement_ModifyState : public smartprops::CSmartPropElement
	{
	public:
		// MPropertyFriendlyName "Label"
		// MPropertyDescription "Optional text that will appear in the outliner to help organize Smart Prop elements and communicate their purpose to other users."
		CUtlString m_sLabel; // 0x80		
	};
};
