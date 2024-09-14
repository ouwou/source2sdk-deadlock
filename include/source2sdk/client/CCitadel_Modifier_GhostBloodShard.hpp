#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x110
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_GhostBloodShard : public client::CCitadelModifier
    {
    public:
        float m_flMinSlowAmount; // 0xc0        
        float m_flMoveSpeedPenaltyPerStack; // 0xc4        
        float m_flSlowDuration; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xcc[0x44];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_GhostBloodShard because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_GhostBloodShard) == 0x110);
};
