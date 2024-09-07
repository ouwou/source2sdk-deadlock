#pragma once
#include "smartprops/CSmartPropChoiceOption.hpp"
#include "smartprops/CSmartPropParameter.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x38
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Choice"
	// MVDataAnonymousNode
	// MVDataOutlinerNameExpr
	class CSmartPropChoice : public smartprops::CSmartPropParameter
	{
	public:
		// MPropertyFriendlyName "Choice Name"
		CUtlString m_Name; // 0x10		
		// MPropertyAttributeChoiceName "smartprop_choice_options"
		CUtlString m_DefaultOption; // 0x18		
		// MPropertyAutoExpandSelf
		CUtlVector<smartprops::CSmartPropChoiceOption> m_Options; // 0x20		
	};
};
