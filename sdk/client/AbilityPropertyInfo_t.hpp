#pragma once
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
	// MPropertyArrayElementNameKey "m_strImportantProperty"
	struct AbilityPropertyInfo_t
	{
	public:
		// MPropertyDescription "What Property Attribute or Status Effect do you want to show? Status effects populated from drop down, manually type in Important Attribute"
		// MPropertyLeafSuggestionProviderFn
		CUtlString m_strImportantProperty; // 0x0		
		// MPropertyDescription "Adds the requiresAbilityUpgrade class to the panel so we can style it correctly"
		bool m_bRequiresAbilityUpgrade; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad0009[0x7]; // 0x9
	public:
		// MPropertyDescription "If we're showing a status effect box, do we want to trigger it's visibility off a different Ability Property (i.e. You upgrade an ability and this shows). Currently only used on Ability Tooltips (not mod tooltips)."
		// MPropertySuppressExpr "m_strImportantProperty != StatusEffectEMP && m_strImportantProperty != StatusEffectStun && m_strImportantProperty != StatusEffectFreeze && m_strImportantProperty != StatusEffectBurn && m_strImportantProperty != StatusEffectBleed && m_strImportantProperty != StatusEffectSleep && m_strImportantProperty != StatusEffectTethered && m_strImportantProperty != StatusEffectImmobilize && m_strImportantProperty != StatusEffectDisarmed && m_strImportantProperty != StatusEffectInvisible && m_strImportantProperty != StatusEffectStacks && m_strImportantProperty != StatusEffectInfiniteClip && m_strImportantProperty != StatusEffectBulletDebuff && m_strImportantProperty != StatusEffectBuff"
		CUtlString m_strStatusEffectValue; // 0x10		
		// MPropertyDescription "If we have an ability property we are triggering off of, do we want to show the value?"
		// MPropertySuppressExpr "m_strStatusEffectValue == ''"
		bool m_bShowPropertyValue; // 0x18		
	};
};
