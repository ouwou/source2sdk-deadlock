#pragma once
#include "client/AbilityPropertyUsageFlag_t.hpp"
#include "client/CScaleFunctionBase.hpp"
#include "client/EModifierValue.hpp"
#include "client/EStatsType.hpp"
#include "client/ModifierValueDisplayUnits_t.hpp"
#include "client/PropertyValueApplyFilter_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe8
	// 
	// MGetKV3ClassDefaults
	struct CitadelAbilityProperty_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		CUtlString m_strValue; // 0x10		
		// MPropertyDescription "When true, effectiveness (distance falloff) will be applied when looking up this value.  Only works in modifiers for now."
		bool m_bDamageAffectedByEffectiveness; // 0x18		
	private:
		[[maybe_unused]] uint8_t __pad0019[0x3]; // 0x19
	public:
		// MPropertyDescription "Set this so we know how to display the ability property (prefix, postfix, and # decimal places)"
		client::EStatsType m_eDisplayType; // 0x1c		
		client::ModifierValueDisplayUnits_t m_eDisplayUnits; // 0x20		
		// MPropertyDescription "When true, we don't show this ability property anywhere in the UI."
		bool m_bIsHidden; // 0x24		
		// MPropertyDescription "When true, we add a different class to show it's a negative attribute."
		bool m_bIsNegativeAttribute; // 0x25		
	private:
		[[maybe_unused]] uint8_t __pad0026[0x2]; // 0x26
	public:
		// MPropertyDescription "This property will be disabled if this value matches m_strValue"
		CUtlString m_strDisableValue; // 0x28		
		// MPropertyFriendlyName "CSS Class"
		// MPropertyLeafSuggestionProviderFn
		CUtlString m_strCSSClass; // 0x30		
		// MPropertyDescription "If set, will be used for the localization token lookup instead of the name"
		// MPropertySuppressExpr "m_bCanSetTokenOverride == false"
		CUtlString m_strLocTokenOverride; // 0x38		
		// MPropertySuppressField
		bool m_bCanSetTokenOverride; // 0x40		
	private:
		[[maybe_unused]] uint8_t __pad0041[0x7]; // 0x41
	public:
		// MPropertyDescription "If set, will be used for the conditional localization token lookup instead of [ItemName]_conditional"
		CUtlString m_strConditionalLocTokenOverride; // 0x48		
	private:
		[[maybe_unused]] uint8_t __pad0050[0x4]; // 0x50
	public:
		// MPropertyDescription "Conditions to filter what other abilities this property can affect."
		client::PropertyValueApplyFilter_t m_eApplyFilter; // 0x54		
		// MPropertyDescription "Do we round the value down? i.e. 2.8 will be 2"
		bool m_bRoundDown; // 0x58		
	private:
		[[maybe_unused]] uint8_t __pad0059[0x3]; // 0x59
	public:
		client::EModifierValue m_eProvidedPropertyType; // 0x5c		
	private:
		[[maybe_unused]] uint8_t __pad0060[0x65]; // 0x60
	public:
		bool m_bIsAffectedByBonusCounter; // 0xc5		
	private:
		[[maybe_unused]] uint8_t __pad00c6[0x2]; // 0xc6
	public:
		CEmbeddedSubclass<client::CScaleFunctionBase> m_subclassScaleFunction; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00d8[0x8]; // 0xd8
	public:
		client::AbilityPropertyUsageFlag_t m_UsageFlags; // 0xe0		
	};
};
