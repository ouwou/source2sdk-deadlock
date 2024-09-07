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
	// Size: 0xd0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MPropertyFriendlyName "Restore State"
	// MPropertyDescription "Replace the current state with a previously saved state."
	// MVDataNodeTintColor
	// MVDataClassGroup
	class CSmartPropOperation_RestoreState : public smartprops::CSmartPropOperation
	{
	public:
		// MPropertyAttributeEditor "SmartPropItemNameEditor( SavedState )"
		// MPropertyDescription "Name of the previously saved state to restore"
		CSmartPropAttributeStateName m_StateName; // 0x50		
		// MPropertyDescription "If true, the parent element will be discarded there is no state with the specified name. If false, and there is no state with the specified name then no changes are made."
		CSmartPropAttributeBool m_bDiscardIfUknown; // 0x90		
	};
};
