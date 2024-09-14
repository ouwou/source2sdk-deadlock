#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x2f8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Bounce_Pad_Stomp : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x230]; // 0xc0
        bool m_bStomped; // 0x2f0        
        [[maybe_unused]] std::uint8_t pad_0x2f1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Bounce_Pad_Stomp because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Bounce_Pad_Stomp) == 0x2f8);
};
