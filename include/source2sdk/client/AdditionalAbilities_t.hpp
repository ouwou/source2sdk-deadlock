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
    #pragma pack(push, 1)
    struct AdditionalAbilities_t
    {
    public:
        CUtlString m_strTitle; // 0x0        
        // m_vecAbilityNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CSubclassName<4>> m_vecAbilityNames;
        char m_vecAbilityNames[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(AdditionalAbilities_t, m_strTitle) == 0x0);
    static_assert(offsetof(AdditionalAbilities_t, m_vecAbilityNames) == 0x8);
    
    static_assert(sizeof(AdditionalAbilities_t) == 0x20);
};
