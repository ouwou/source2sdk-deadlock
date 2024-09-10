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
    struct ModifierTrackedBodyGroup_t
    {
    public:
        CUtlString m_strBodygroupName; // 0x0        
        int32_t m_nRestoreValue; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x0c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(ModifierTrackedBodyGroup_t, m_strBodygroupName) == 0x0);
    static_assert(offsetof(ModifierTrackedBodyGroup_t, m_nRestoreValue) == 0x8);
    
    static_assert(sizeof(ModifierTrackedBodyGroup_t) == 0x10);
};
