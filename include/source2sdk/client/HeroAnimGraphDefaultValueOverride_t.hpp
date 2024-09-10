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
    // Size: 0x10
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct HeroAnimGraphDefaultValueOverride_t
    {
    public:
        CGlobalSymbol m_strParamName; // 0x0        
        CUtlString m_strParamValue; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(HeroAnimGraphDefaultValueOverride_t, m_strParamName) == 0x0);
    static_assert(offsetof(HeroAnimGraphDefaultValueOverride_t, m_strParamValue) == 0x8);
    
    static_assert(sizeof(HeroAnimGraphDefaultValueOverride_t) == 0x10);
};
