#pragma once
#include "source2sdk/server/CCitadel_Ability_PrimaryWeapon.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc10
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeapon_Cadence : public server::CCitadel_Ability_PrimaryWeapon
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xba0[0x70];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon_Cadence) == 0xc10);
};
