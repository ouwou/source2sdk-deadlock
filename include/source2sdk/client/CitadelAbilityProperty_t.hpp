#pragma once
#include "source2sdk/client/CScaleFunctionBase.hpp"
#include "source2sdk/client/EModifierValue.hpp"
#include "source2sdk/client/EStatsType.hpp"
#include "source2sdk/client/ModifierValueDisplayUnits_t.hpp"
#include "source2sdk/client/PropertyValueApplyFilter_t.hpp"
#include "source2sdk/client/StatsUsageFlags_t.hpp"
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
    // Size: 0xf0
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelAbilityProperty_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        CUtlString m_strValue; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x18[0x8]; // 0x18
        // m_subclassScaleFunction has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CScaleFunctionBase> m_subclassScaleFunction;
        char m_subclassScaleFunction[0x10]; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x30[0xc]; // 0x30
        // metadata: MPropertyDescription "What type of modifier value does this property provide?  Used by modifiers to know what type to auto-register this property for and to tell the UI how this interacts with other stats and items."
        client::EModifierValue m_eProvidedPropertyType; // 0x3c        
        // metadata: MPropertyDescription "Conditions to filter what other abilities this property can affect."
        client::PropertyValueApplyFilter_t m_eApplyFilter; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4]; // 0x44
        // metadata: MPropertyDescription "This property will be disabled if this value matches m_strValue"
        CUtlString m_strDisableValue; // 0x48        
        // metadata: MPropertyDescription "When true, effectiveness (distance falloff) will be applied when looking up this value.  Only works in modifiers for now."
        bool m_bDamageAffectedByEffectiveness; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x51[0x3]; // 0x51
        // metadata: MPropertyStartGroup "UI"
        // metadata: MPropertyDescription "Set this so we know how to display the ability property (prefix, postfix, and # decimal places)"
        client::EStatsType m_eDisplayType; // 0x54        
        client::ModifierValueDisplayUnits_t m_eDisplayUnits; // 0x58        
        // metadata: MPropertyDescription "When true, we don't show this ability property anywhere in the UI."
        bool m_bIsHidden; // 0x5c        
        // metadata: MPropertyDescription "When true, we add a different class to show it's a negative attribute."
        bool m_bIsNegativeAttribute; // 0x5d        
        [[maybe_unused]] std::uint8_t pad_0x5e[0x2]; // 0x5e
        // metadata: MPropertyFriendlyName "CSS Class"
        // metadata: MPropertyLeafSuggestionProviderFn
        CUtlString m_strCSSClass; // 0x60        
        // metadata: MPropertyDescription "If set, will be used for the localization token lookup instead of the name"
        // metadata: MPropertySuppressExpr "m_bCanSetTokenOverride == false"
        CUtlString m_strLocTokenOverride; // 0x68        
        // metadata: MPropertySuppressField
        bool m_bCanSetTokenOverride; // 0x70        
        [[maybe_unused]] std::uint8_t pad_0x71[0x7]; // 0x71
        // metadata: MPropertyDescription "If set, will be used for the conditional localization token lookup instead of [ItemName]_conditional"
        CUtlString m_strConditionalLocTokenOverride; // 0x78        
        // metadata: MPropertyDescription "Do we round the value down? i.e. 2.8 will be 2"
        bool m_bRoundDown; // 0x80        
        [[maybe_unused]] std::uint8_t pad_0x81[0x3]; // 0x81
        client::StatsUsageFlags_t m_eStatsUsageFlags; // 0x84        
        [[maybe_unused]] std::uint8_t pad_0x88[0x68];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelAbilityProperty_t, m_strValue) == 0x10);
    static_assert(offsetof(CitadelAbilityProperty_t, m_subclassScaleFunction) == 0x20);
    static_assert(offsetof(CitadelAbilityProperty_t, m_eProvidedPropertyType) == 0x3c);
    static_assert(offsetof(CitadelAbilityProperty_t, m_eApplyFilter) == 0x40);
    static_assert(offsetof(CitadelAbilityProperty_t, m_strDisableValue) == 0x48);
    static_assert(offsetof(CitadelAbilityProperty_t, m_bDamageAffectedByEffectiveness) == 0x50);
    static_assert(offsetof(CitadelAbilityProperty_t, m_eDisplayType) == 0x54);
    static_assert(offsetof(CitadelAbilityProperty_t, m_eDisplayUnits) == 0x58);
    static_assert(offsetof(CitadelAbilityProperty_t, m_bIsHidden) == 0x5c);
    static_assert(offsetof(CitadelAbilityProperty_t, m_bIsNegativeAttribute) == 0x5d);
    static_assert(offsetof(CitadelAbilityProperty_t, m_strCSSClass) == 0x60);
    static_assert(offsetof(CitadelAbilityProperty_t, m_strLocTokenOverride) == 0x68);
    static_assert(offsetof(CitadelAbilityProperty_t, m_bCanSetTokenOverride) == 0x70);
    static_assert(offsetof(CitadelAbilityProperty_t, m_strConditionalLocTokenOverride) == 0x78);
    static_assert(offsetof(CitadelAbilityProperty_t, m_bRoundDown) == 0x80);
    static_assert(offsetof(CitadelAbilityProperty_t, m_eStatsUsageFlags) == 0x84);
    
    static_assert(sizeof(CitadelAbilityProperty_t) == 0xf0);
};
