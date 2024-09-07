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
	// Size: 0x90
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Set Variable"
	// MPropertyDescription "Set the value of a variable."
	// MVDataClassGroup
	// MVDataOutlinerNameExpr
	class CSmartPropOperation_SetVariable : public smartprops::CSmartPropOperation
	{
	public:
		CSmartPropAttributeVariableValue m_VariableValue; // 0x50		
	};
};
