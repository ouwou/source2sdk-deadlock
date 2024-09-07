#pragma once
#include "smartprops/CSmartPropVariable.hpp"
#include "smartprops/SmartPropChoiceSelectionMode_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Selection Mode"
	// MPropertyDescription "Specifies the method by which a child element is selected from a list."
	// MVDataClassGroup
	class CSmartPropVariable_ChoiceSelectionMode : public smartprops::CSmartPropVariable
	{
	public:
		smartprops::SmartPropChoiceSelectionMode_t m_DefaultValue; // 0x28		
	};
};
