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
    struct FootstepSound_t
    {
    public:
        CSoundEventName m_sFootstepSound; // 0x0        
        int32_t m_nFootstepPriority; // 0x10        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(FootstepSound_t, m_sFootstepSound) == 0x0);
    static_assert(offsetof(FootstepSound_t, m_nFootstepPriority) == 0x10);
    
    static_assert(sizeof(FootstepSound_t) == 0x18);
};
