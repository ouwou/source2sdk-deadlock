#pragma once
#include "smartprops/CSmartPropElement.hpp"
#include <cstdint>
namespace source2sdk::smartprops
{
	struct CSmartPropElement;
};

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0xa0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Group"
	// MPropertyDescription "A group of elements that will all be evaulated."
	// MVDataOutlinerLabelExpr
	class CSmartPropElement_Group : public smartprops::CSmartPropElement
	{
	public:
		// MPropertyFriendlyName "Children"
		// MPropertyDescription "List of child elements which will appear if this element appears"
		// MVDataPromoteField
		CUtlVector<smartprops::CSmartPropElement*> m_Children; // 0x80		
		// MPropertyFriendlyName "Label"
		// MPropertyDescription "Optional text that will appear in the outliner to help organize Smart Prop elements and communicate their purpose to other users."
		CUtlString m_sLabel; // 0x98		
	};
};
