#pragma once
#include "client/ECitadelAbilityHUDElementType_t.hpp"
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
	// MPropertyArrayElementNameKey "m_strContext"
	struct CitadelAbilityHUDElement_t
	{
	public:
		client::ECitadelAbilityHUDElementType_t m_eType; // 0x0		
		CUtlString m_strContext; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad0010[0x8]; // 0x10
	public:
		// MPropertyDescription "Space separated set of classes to add to the panel (ex: "medium superCool noMiddle""
		CUtlString m_strAdditionalClasses; // 0x18		
		// MPropertyCustomFGDType "panorama_layout"
		// MPropertySuppressExpr "m_eType != CITADEL_ABILITY_HUD_ELEMENT_TYPE_PROGRESS"
		CUtlString m_Layout; // 0x20		
		// MPropertySuppressExpr "m_eType != CITADEL_ABILITY_HUD_ELEMENT_TYPE_PROGRESS"
		bool m_bReverseProgress; // 0x28		
	};
};
