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
    // Size: 0x220
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy : public client::CCitadelModifier
    {
    public:
        Vector m_vHoldOffset; // 0xc0        
        float m_flLastTouchTime; // 0xcc        
        [[maybe_unused]] std::uint8_t pad_0xd0[0x150];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy) == 0x220);
};
