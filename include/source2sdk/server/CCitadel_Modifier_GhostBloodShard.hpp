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
    // Size: 0x1b8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_GhostBloodShard : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0xa8]; // 0xc0
        float m_flMinSlowAmount; // 0x168        
        float m_flMoveSpeedPenaltyPerStack; // 0x16c        
        float m_flSlowDuration; // 0x170        
        [[maybe_unused]] std::uint8_t pad_0x174[0x44];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_GhostBloodShard because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_GhostBloodShard) == 0x1b8);
};
