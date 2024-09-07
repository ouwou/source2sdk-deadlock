#pragma once
#include "client/AbilityPropertyInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x58
	// 
	// MGetKV3ClassDefaults
	// MPropertyAutoExpandSelf
	struct SectionAttributes_t
	{
	public:
		// MPropertyDescription "The loc string that will appear above the attributes box. If no loc string is set, it's collapsed."
		CUtlString m_strLocString; // 0x0		
		// MPropertyDescription "What Ability Property do we put in the Important Box? If empty, the Important box is hidden."
		// MPropertyAutoExpandSelf
		CUtlVector<client::AbilityPropertyInfo_t> m_vecImportantAbilityProperties; // 0x8		
		// MPropertyDescription "Hide the background on the attributes box? Checking this adds class RemoveAttributesBackground to the section"
		bool m_bRemoveAttributesBackgroundColor; // 0x20		
	private:
		[[maybe_unused]] uint8_t __pad0021[0x7]; // 0x21
	public:
		// MPropertyDescription "Same as Ability Properties but these have a Elevated Class added to them. These also appear before the other Ability Properties."
		// MPropertyAutoExpandSelf
		// MPropertyFriendlyName "Elevated Basic Ability Properties"
		CUtlVector<CUtlString> m_vecElevatedAbilityProperties; // 0x28		
		// MPropertyDescription "Additional Ability Properties that we put to the right of the Important Box (if we have one)"
		// MPropertyAutoExpandSelf
		CUtlVector<CUtlString> m_vecAbilityProperties; // 0x40		
	};
};
