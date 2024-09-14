#pragma once
#include "source2sdk/server/CCitadel_Modifier_Stunned.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Knockback : public server::CCitadel_Modifier_Stunned
    {
    public:
        float m_flForce; // 0xc8        
        bool m_bKnockedBack; // 0xcc        
        [[maybe_unused]] std::uint8_t pad_0xcd[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Knockback because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Knockback) == 0xd0);
};
