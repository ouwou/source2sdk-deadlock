#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x28
	// 
	// MGetKV3ClassDefaults
	class CSmartPropChoiceOption
	{
	public:
		// MPropertyFriendlyName "Option Value Name"
		CUtlString m_Name; // 0x0		
		// MPropertyFriendlyName "Option Display Name"
		CUtlString m_DisplayName; // 0x8		
		// MPropertyAutoExpandSelf
		// MPropertyAttributeEditor "SmartPropAttributeEditor(VariableValue)"
		CUtlVector<CSmartPropAttributeVariableValue> m_VariableValues; // 0x10		
	};
};
