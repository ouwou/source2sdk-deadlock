#pragma once
#include "smartprops/CSmartPropOperation.hpp"
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
	// MPropertyFriendlyName "Save Current Color"
	// MPropertyDescription "Save the current color tint value to a specified variable"
	// MVDataClassGroup
	class CSmartPropOperation_SaveColor : public smartprops::CSmartPropOperation
	{
	public:
		// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Color )"
		CUtlString m_VariableName; // 0x50		
	};
};
