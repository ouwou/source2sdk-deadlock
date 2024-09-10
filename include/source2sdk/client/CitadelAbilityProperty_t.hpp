#pragma once
#include "source2sdk/client/AbilityPropertyUsageFlag_t.hpp"
#include "source2sdk/client/CScaleFunctionBase.hpp"
#include "source2sdk/client/EModifierValue.hpp"
#include "source2sdk/client/EStatsType.hpp"
#include "source2sdk/client/ModifierValueDisplayUnits_t.hpp"
#include "source2sdk/client/PropertyValueApplyFilter_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xe8
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelAbilityProperty_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        CUtlString m_strValue; // 0x10        
        // metadata: MPropertyDescription "When true, effectiveness (distance falloff) will be applied when looking up this value.  Only works in modifiers for now."
        bool m_bDamageAffectedByEffectiveness; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x19[0x3]; // 0x19
        // metadata: MPropertyDescription "Set this so we know how to display the ability property (prefix, postfix, and # decimal places)"
        client::EStatsType m_eDisplayType; // 0x1c        
        client::ModifierValueDisplayUnits_t m_eDisplayUnits; // 0x20        
        // metadata: MPropertyDescription "When true, we don't show this ability property anywhere in the UI."
        bool m_bIsHidden; // 0x24        
        // metadata: MPropertyDescription "When true, we add a different class to show it's a negative attribute."
        bool m_bIsNegativeAttribute; // 0x25        
        [[maybe_unused]] std::uint8_t pad_0x26[0x2]; // 0x26
        // metadata: MPropertyDescription "This property will be disabled if this value matches m_strValue"
        CUtlString m_strDisableValue; // 0x28        
        // metadata: MPropertyFriendlyName "CSS Class"
        // metadata: MPropertyLeafSuggestionProviderFn
        CUtlString m_strCSSClass; // 0x30        
        // metadata: MPropertyDescription "If set, will be used for the localization token lookup instead of the name"
        // metadata: MPropertySuppressExpr "m_bCanSetTokenOverride == false"
        CUtlString m_strLocTokenOverride; // 0x38        
        // metadata: MPropertySuppressField
        bool m_bCanSetTokenOverride; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x41[0x7]; // 0x41
        // metadata: MPropertyDescription "If set, will be used for the conditional localization token lookup instead of [ItemName]_conditional"
        CUtlString m_strConditionalLocTokenOverride; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x50[0x4]; // 0x50
        // metadata: MPropertyDescription "Conditions to filter what other abilities this property can affect."
        client::PropertyValueApplyFilter_t m_eApplyFilter; // 0x54        
        // metadata: MPropertyDescription "Do we round the value down? i.e. 2.8 will be 2"
        bool m_bRoundDown; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x59[0x3]; // 0x59
        client::EModifierValue m_eProvidedPropertyType; // 0x5c        
        [[maybe_unused]] std::uint8_t pad_0x60[0x65]; // 0x60
        bool m_bIsAffectedByBonusCounter; // 0xc5        
        [[maybe_unused]] std::uint8_t pad_0xc6[0x2]; // 0xc6
        // m_subclassScaleFunction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CScaleFunctionBase> m_subclassScaleFunction;
        char m_subclassScaleFunction[0x10]; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xd8[0x8]; // 0xd8
        client::AbilityPropertyUsageFlag_t m_UsageFlags; // 0xe0        
        [[maybe_unused]] std::uint8_t pad_0xe4[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelAbilityProperty_t, m_strValue) == 0x10);
    static_assert(offsetof(CitadelAbilityProperty_t, m_bDamageAffectedByEffectiveness) == 0x18);
    static_assert(offsetof(CitadelAbilityProperty_t, m_eDisplayType) == 0x1c);
    static_assert(offsetof(CitadelAbilityProperty_t, m_eDisplayUnits) == 0x20);
    static_assert(offsetof(CitadelAbilityProperty_t, m_bIsHidden) == 0x24);
    static_assert(offsetof(CitadelAbilityProperty_t, m_bIsNegativeAttribute) == 0x25);
    static_assert(offsetof(CitadelAbilityProperty_t, m_strDisableValue) == 0x28);
    static_assert(offsetof(CitadelAbilityProperty_t, m_strCSSClass) == 0x30);
    static_assert(offsetof(CitadelAbilityProperty_t, m_strLocTokenOverride) == 0x38);
    static_assert(offsetof(CitadelAbilityProperty_t, m_bCanSetTokenOverride) == 0x40);
    static_assert(offsetof(CitadelAbilityProperty_t, m_strConditionalLocTokenOverride) == 0x48);
    static_assert(offsetof(CitadelAbilityProperty_t, m_eApplyFilter) == 0x54);
    static_assert(offsetof(CitadelAbilityProperty_t, m_bRoundDown) == 0x58);
    static_assert(offsetof(CitadelAbilityProperty_t, m_eProvidedPropertyType) == 0x5c);
    static_assert(offsetof(CitadelAbilityProperty_t, m_bIsAffectedByBonusCounter) == 0xc5);
    static_assert(offsetof(CitadelAbilityProperty_t, m_subclassScaleFunction) == 0xc8);
    static_assert(offsetof(CitadelAbilityProperty_t, m_UsageFlags) == 0xe0);
    
    static_assert(sizeof(CitadelAbilityProperty_t) == 0xe8);
};
