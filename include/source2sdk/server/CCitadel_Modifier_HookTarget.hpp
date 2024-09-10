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
    // Size: 0x230
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_HookTarget : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x4]; // 0xc8
        float m_flCurrentVerticalSpeed; // 0xcc        
        bool m_bSuccess; // 0xd0        
        bool m_bSameTeam; // 0xd1        
        bool m_bPlayedApproachingWhoosh; // 0xd2        
        [[maybe_unused]] std::uint8_t pad_0xd3[0x1]; // 0xd3
        float m_flInitialTravelDistance; // 0xd4        
        [[maybe_unused]] std::uint8_t pad_0xd8[0x158];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_HookTarget because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_HookTarget) == 0x230);
};
