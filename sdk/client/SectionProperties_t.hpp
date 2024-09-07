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
	// Size: 0x20
	// 
	// MGetKV3ClassDefaults
	// MPropertyAutoExpandSelf
	struct SectionProperties_t
	{
	public:
		// MPropertyDescription "Do we want to show title text above this block of ability properties (per stack, to enemies, to allies, etc.)? If empty, we show none"
		CUtlString m_strPropertiesTitleLocString; // 0x0		
		// MPropertyDescription "Which ability properties do we want to show in this section?"
		CUtlVector<client::AbilityPropertyInfo_t> m_vecAbilityProperties; // 0x8		
	};
};
