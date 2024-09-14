#pragma once
#include "source2sdk/client/C_CitadelProjectile.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x8c8
    // Has VTable
    #pragma pack(push, 1)
    class C_Citadel_Projectile_Guided_Arrow : public client::C_CitadelProjectile
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x8b8[0x10];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(C_Citadel_Projectile_Guided_Arrow) == 0x8c8);
};
