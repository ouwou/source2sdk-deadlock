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
    // Size: 0x20
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyAutoExpandSelf
    #pragma pack(push, 1)
    struct SectionProperties_t
    {
    public:
        // metadata: MPropertyDescription "Do we want to show title text above this block of ability properties (per stack, to enemies, to allies, etc.)? If empty, we show none"
        CUtlString m_strPropertiesTitleLocString; // 0x0        
        // metadata: MPropertyDescription "Which ability properties do we want to show in this section?"
        // m_vecAbilityProperties has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::AbilityPropertyInfo_t> m_vecAbilityProperties;
        char m_vecAbilityProperties[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(SectionProperties_t, m_strPropertiesTitleLocString) == 0x0);
    static_assert(offsetof(SectionProperties_t, m_vecAbilityProperties) == 0x8);
    
    static_assert(sizeof(SectionProperties_t) == 0x20);
};
