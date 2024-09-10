#pragma once
#include "source2sdk/client/SectionProperties_t.hpp"
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
    // Size: 0x40
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct AbilitySectionInfo_t
    {
    public:
        // metadata: MPropertyDescription "The loc string that will appear above the attributes box. If no loc string is set, it's collapsed."
        CUtlString m_strLocString; // 0x0        
        // metadata: MPropertyDescription "What Ability Property do we put in this block?"
        // m_vecAbilityPropertiesBlock has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SectionProperties_t> m_vecAbilityPropertiesBlock;
        char m_vecAbilityPropertiesBlock[0x18]; // 0x8        
        // metadata: MPropertyDescription "Additional Ability Properties that are demoted compared to the Section Ability Properties"
        // m_vecBasicProperties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString> m_vecBasicProperties;
        char m_vecBasicProperties[0x18]; // 0x20        
        // metadata: MPropertyDescription "If it requires an ability upgrade, what ability property is required for to show? Empty if none"
        CUtlString m_strAbilityPropertyUpgradeRequired; // 0x38        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AbilitySectionInfo_t, m_strLocString) == 0x0);
    static_assert(offsetof(AbilitySectionInfo_t, m_vecAbilityPropertiesBlock) == 0x8);
    static_assert(offsetof(AbilitySectionInfo_t, m_vecBasicProperties) == 0x20);
    static_assert(offsetof(AbilitySectionInfo_t, m_strAbilityPropertyUpgradeRequired) == 0x38);
    
    static_assert(sizeof(AbilitySectionInfo_t) == 0x40);
};
