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
    // Size: 0x130
    // Has VTable
    #pragma pack(push, 1)
    class CModifier_Citadel_Bull_Leap_LandingBonuses : public client::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x70];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CModifier_Citadel_Bull_Leap_LandingBonuses) == 0x130);
};
