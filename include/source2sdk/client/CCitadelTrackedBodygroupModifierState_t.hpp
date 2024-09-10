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
    struct CCitadelTrackedBodygroupModifierState_t
    {
    public:
        CUtlString m_strName; // 0x0        
        int32_t m_nSetValue; // 0x8        
        int32_t m_nRestoreValue; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CCitadelTrackedBodygroupModifierState_t, m_strName) == 0x0);
    static_assert(offsetof(CCitadelTrackedBodygroupModifierState_t, m_nSetValue) == 0x8);
    static_assert(offsetof(CCitadelTrackedBodygroupModifierState_t, m_nRestoreValue) == 0xc);
    
    static_assert(sizeof(CCitadelTrackedBodygroupModifierState_t) == 0x10);
};
