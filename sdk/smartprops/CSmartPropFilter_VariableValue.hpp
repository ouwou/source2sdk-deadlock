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
	// Size: 0x70
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Filter: Variable Value"
	// MPropertyDescription "Compares the current value of a variable to the specified value. If the comparison is false the element evaluation is stopped."
	// MVDataClassGroup
	class CSmartPropFilter_VariableValue : public smartprops::CSmartPropFilter
	{
	public:
		CSmartPropVariableComparison m_VariableComparison; // 0x50		
	};
};
