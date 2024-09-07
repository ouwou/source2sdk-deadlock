#pragma once
#include <cstdint>
namespace source2sdk::smartprops
{
	struct CSmartPropModifier;
};
namespace source2sdk::smartprops
{
	struct CSmartPropSelectionCriteria;
};

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
	// Alignment: 8
	// Size: 0x80
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MVDataBase
	// MVDataNodeType "1"
	// MVDataAnonymousNode
	// MPropertyFriendlyName "Smart Prop Element"
	class CSmartPropElement
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MPropertySuppressField
		// MVDataUniqueMonotonicInt "_editor/next_element_id"
		int32_t m_nElementID; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		// MVDataEnableKey
		// MPropertyDescription "Is this element enabled? If not enabled, this element will not be evaluted and will have no effect on the result."
		// MPropertySortPriority "10"
		CSmartPropAttributeBool m_bEnabled; // 0x10		
		// MPropertyFriendlyName "Selection Criteria"
		// MVDataPromoteField
		CUtlVector<smartprops::CSmartPropSelectionCriteria*> m_SelectionCriteria; // 0x50		
		// MPropertyFriendlyName "Modifiers"
		// MVDataPromoteField
		CUtlVector<smartprops::CSmartPropModifier*> m_Modifiers; // 0x68		
	};
};
