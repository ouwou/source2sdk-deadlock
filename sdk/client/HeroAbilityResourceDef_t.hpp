#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	struct HeroAbilityResourceDef_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MPropertyDescription "Which snippet to use in the hud to display this resource?"
		CUtlString m_strHUDSnippetName; // 0x8		
		// MPropertyDescription "Localization token to use when failing to cast when out of this resource?"
		CUtlString m_strCantCastOutOfResourceToken; // 0x10		
	};
};
