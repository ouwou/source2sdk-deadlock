#pragma once
#include "smartprops/CSmartPropParameter.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x28
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	// MVDataRoot
	// MVDataNodeType "1"
	// MVDataAnonymousNode
	// MVDataOutlinerNameExpr
	class CSmartPropVariable : public smartprops::CSmartPropParameter
	{
	public:
		CUtlString m_VariableName; // 0x10		
		// MPropertySortPriority "-1"
		// MPropertyDescription "If enabled, this value will be exposed as a parameter that can be set on the smart prop object in hammer."
		bool m_bExposeAsParameter; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad0019[0x7]; // 0x19
	public:
		// MPropertySortPriority "-1"
		// MPropertyReadonlyExpr
		// MPropertyFriendlyName "Parameter Display Name"
		// MPropertyDescription "Name of the parameter which will appear as a property in the Hammer object properties ui when selecting an object using this smart prop."
		CUtlString m_DisplayName; // 0x20		
	};
};
