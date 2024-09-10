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
    // Size: 0x18
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CCitadelTrackedAnimGraphModifierState_t
    {
    public:
        CGlobalSymbol m_strName; // 0x0        
        CUtlString m_strSetValue; // 0x8        
        CUtlString m_strRestoreValue; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCitadelTrackedAnimGraphModifierState_t, m_strName) == 0x0);
    static_assert(offsetof(CCitadelTrackedAnimGraphModifierState_t, m_strSetValue) == 0x8);
    static_assert(offsetof(CCitadelTrackedAnimGraphModifierState_t, m_strRestoreValue) == 0x10);
    
    static_assert(sizeof(CCitadelTrackedAnimGraphModifierState_t) == 0x18);
};
