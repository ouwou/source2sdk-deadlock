#pragma once
#include "client/AbilitySectionInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	// MPropertyAutoExpandSelf
	struct AbilityTooltipDetails_t
	{
	public:
		// MPropertyDescription "Add a new Section to the ability tooltip"
		CUtlVector<client::AbilitySectionInfo_t> m_vecAbilityInfoSections; // 0x0		
		// MPropertyDescription "Add additional header properties that aren't part of the default header properties"
		CUtlVector<CUtlString> m_vecAdditionalHeaderProperties; // 0x18		
	};
};
