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
	// MPropertyFriendlyName "Save Current Scale"
	// MPropertyDescription "Save the current scale factor to a specified variable."
	// MVDataClassGroup
	class CSmartPropOperation_SaveScale : public smartprops::CSmartPropOperation
	{
	public:
		// MPropertyAttributeEditor "SmartPropItemNameEditor( Variable:Float )"
		CUtlString m_VariableName; // 0x50		
	};
};
