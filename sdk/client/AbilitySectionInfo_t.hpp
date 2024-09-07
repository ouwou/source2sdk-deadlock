#pragma once
#include "client/SectionProperties_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x40
	// 
	// MGetKV3ClassDefaults
	// MPropertyAutoExpandSelf
	struct AbilitySectionInfo_t
	{
	public:
		// MPropertyDescription "The loc string that will appear above the attributes box. If no loc string is set, it's collapsed."
		CUtlString m_strLocString; // 0x0		
		// MPropertyDescription "What Ability Property do we put in this block?"
		CUtlVector<client::SectionProperties_t> m_vecAbilityPropertiesBlock; // 0x8		
		// MPropertyDescription "Additional Ability Properties that are demoted compared to the Section Ability Properties"
		CUtlVector<CUtlString> m_vecBasicProperties; // 0x20		
		// MPropertyDescription "If it requires an ability upgrade, what ability property is required for to show? Empty if none"
		CUtlString m_strAbilityPropertyUpgradeRequired; // 0x38		
	};
};
