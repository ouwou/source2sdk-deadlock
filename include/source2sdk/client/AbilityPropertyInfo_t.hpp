#pragma once
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
    // Size: 0x20
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyArrayElementNameKey "m_strImportantProperty"
    #pragma pack(push, 1)
    struct AbilityPropertyInfo_t
    {
    public:
        // metadata: MPropertyDescription "What Property Attribute or Status Effect do you want to show? Status effects populated from drop down, manually type in Important Attribute"
        // metadata: MPropertyLeafSuggestionProviderFn
        CUtlString m_strImportantProperty; // 0x0        
        // metadata: MPropertyDescription "Adds the requiresAbilityUpgrade class to the panel so we can style it correctly"
        bool m_bRequiresAbilityUpgrade; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0x7]; // 0x9
        // metadata: MPropertyDescription "If we're showing a status effect box, do we want to trigger it's visibility off a different Ability Property (i.e. You upgrade an ability and this shows). Currently only used on Ability Tooltips (not mod tooltips)."
        // metadata: MPropertySuppressExpr "m_strImportantProperty != StatusEffectEMP && m_strImportantProperty != StatusEffectStun && m_strImportantProperty != StatusEffectFreeze && m_strImportantProperty != StatusEffectBurn && m_strImportantProperty != StatusEffectBleed && m_strImportantProperty != StatusEffectSleep && m_strImportantProperty != StatusEffectTethered && m_strImportantProperty != StatusEffectImmobilize && m_strImportantProperty != StatusEffectDisarmed && m_strImportantProperty != StatusEffectInvisible && m_strImportantProperty != StatusEffectStacks && m_strImportantProperty != StatusEffectInfiniteClip && m_strImportantProperty != StatusEffectBulletDebuff && m_strImportantProperty != StatusEffectBuff"
        CUtlString m_strStatusEffectValue; // 0x10        
        // metadata: MPropertyDescription "If we have an ability property we are triggering off of, do we want to show the value?"
        // metadata: MPropertySuppressExpr "m_strStatusEffectValue == ''"
        bool m_bShowPropertyValue; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x19[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AbilityPropertyInfo_t, m_strImportantProperty) == 0x0);
    static_assert(offsetof(AbilityPropertyInfo_t, m_bRequiresAbilityUpgrade) == 0x8);
    static_assert(offsetof(AbilityPropertyInfo_t, m_strStatusEffectValue) == 0x10);
    static_assert(offsetof(AbilityPropertyInfo_t, m_bShowPropertyValue) == 0x18);
    
    static_assert(sizeof(AbilityPropertyInfo_t) == 0x20);
};
