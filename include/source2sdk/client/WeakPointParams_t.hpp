#pragma once
#include "source2sdk/client/EWeakPointBreakBehavior.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
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
    // Size: 0x28
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct WeakPointParams_t
    {
    public:
        CUtlString m_strName; // 0x0        
        client::HitGroup_t m_nHitGroup; // 0x8        
        int32_t m_nHealth; // 0xc        
        int32_t m_nMaxHealth; // 0x10        
        int32_t m_nOnBreakBonusDamage; // 0x14        
        client::EWeakPointBreakBehavior m_eBreakBehavior; // 0x18        
        [[maybe_unused]] std::uint8_t pad_0x1c[0x4]; // 0x1c
        CGlobalSymbol m_strOnBreakAnimGraphParam; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(WeakPointParams_t, m_strName) == 0x0);
    static_assert(offsetof(WeakPointParams_t, m_nHitGroup) == 0x8);
    static_assert(offsetof(WeakPointParams_t, m_nHealth) == 0xc);
    static_assert(offsetof(WeakPointParams_t, m_nMaxHealth) == 0x10);
    static_assert(offsetof(WeakPointParams_t, m_nOnBreakBonusDamage) == 0x14);
    static_assert(offsetof(WeakPointParams_t, m_eBreakBehavior) == 0x18);
    static_assert(offsetof(WeakPointParams_t, m_strOnBreakAnimGraphParam) == 0x20);
    
    static_assert(sizeof(WeakPointParams_t) == 0x28);
};
