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
    // Size: 0xa70
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Projectile_SpiderProjectile : public client::C_CitadelProjectile
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x8e8[0x188];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadel_Projectile_SpiderProjectile) == 0xa70);
};
