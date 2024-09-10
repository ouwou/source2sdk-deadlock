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
    // Size: 0x1c0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_GhostBloodShard : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0xa8]; // 0xc8
        float m_flMinSlowAmount; // 0x170        
        float m_flMoveSpeedPenaltyPerStack; // 0x174        
        float m_flSlowDuration; // 0x178        
        [[maybe_unused]] std::uint8_t pad_0x17c[0x44];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_GhostBloodShard because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_GhostBloodShard) == 0x1c0);
};
