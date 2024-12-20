#pragma once
#include "source2sdk/client/CCitadel_Modifier_ScalingPowerUp.hpp"
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
    // Size: 0xc8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_PowerUp_Movement : public client::CCitadel_Modifier_ScalingPowerUp
    {
    public:
        bool m_bFilled; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_PowerUp_Movement because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_PowerUp_Movement) == 0xc8);
};
