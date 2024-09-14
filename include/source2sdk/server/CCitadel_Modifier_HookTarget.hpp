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
    // Size: 0x228
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_HookTarget : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x4]; // 0xc0
        float m_flCurrentVerticalSpeed; // 0xc4        
        bool m_bSuccess; // 0xc8        
        bool m_bSameTeam; // 0xc9        
        bool m_bPlayedApproachingWhoosh; // 0xca        
        [[maybe_unused]] std::uint8_t pad_0xcb[0x1]; // 0xcb
        float m_flInitialTravelDistance; // 0xcc        
        [[maybe_unused]] std::uint8_t pad_0xd0[0x158];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_HookTarget because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_HookTarget) == 0x228);
};
