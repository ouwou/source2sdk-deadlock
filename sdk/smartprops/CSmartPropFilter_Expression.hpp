#pragma once
#include "smartprops/CSmartPropFilter.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x58
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Filter: Expression"
	// MPropertyDescription "Evaluates the specified expression, if the result of the expression is false evaluation of the element is stopped."
	// MVDataClassGroup
	class CSmartPropFilter_Expression : public smartprops::CSmartPropFilter
	{
	public:
		// MPropertyAttributeEditor "SmartPropAttributeEditor(expression)"
		CUtlString m_Expression; // 0x50		
	};
};
