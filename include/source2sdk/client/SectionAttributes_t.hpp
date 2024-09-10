#pragma once
#include "source2sdk/client/AbilityPropertyInfo_t.hpp"
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
    // Size: 0x58
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct SectionAttributes_t
    {
    public:
        // metadata: MPropertyDescription "The loc string that will appear above the attributes box. If no loc string is set, it's collapsed."
        CUtlString m_strLocString; // 0x0        
        // metadata: MPropertyDescription "What Ability Property do we put in the Important Box? If empty, the Important box is hidden."
        // metadata: MPropertyAutoExpandSelf
        // m_vecImportantAbilityProperties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::AbilityPropertyInfo_t> m_vecImportantAbilityProperties;
        char m_vecImportantAbilityProperties[0x18]; // 0x8        
        // metadata: MPropertyDescription "Hide the background on the attributes box? Checking this adds class RemoveAttributesBackground to the section"
        bool m_bRemoveAttributesBackgroundColor; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x21[0x7]; // 0x21
        // metadata: MPropertyDescription "Same as Ability Properties but these have a Elevated Class added to them. These also appear before the other Ability Properties."
        // metadata: MPropertyAutoExpandSelf
        // metadata: MPropertyFriendlyName "Elevated Basic Ability Properties"
        // m_vecElevatedAbilityProperties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecElevatedAbilityProperties;
        char m_vecElevatedAbilityProperties[0x18]; // 0x28        
        // metadata: MPropertyDescription "Additional Ability Properties that we put to the right of the Important Box (if we have one)"
        // metadata: MPropertyAutoExpandSelf
        // m_vecAbilityProperties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecAbilityProperties;
        char m_vecAbilityProperties[0x18]; // 0x40        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SectionAttributes_t, m_strLocString) == 0x0);
    static_assert(offsetof(SectionAttributes_t, m_vecImportantAbilityProperties) == 0x8);
    static_assert(offsetof(SectionAttributes_t, m_bRemoveAttributesBackgroundColor) == 0x20);
    static_assert(offsetof(SectionAttributes_t, m_vecElevatedAbilityProperties) == 0x28);
    static_assert(offsetof(SectionAttributes_t, m_vecAbilityProperties) == 0x40);
    
    static_assert(sizeof(SectionAttributes_t) == 0x58);
};
