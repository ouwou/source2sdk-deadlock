#pragma once
#include "source2sdk/server/CCitadelTrackedProjectile.hpp"
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
    // Size: 0x8a8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Projectile_HookBlade : public server::CCitadelTrackedProjectile
    {
    public:
        bool bIsReturning; // 0x8a0        
        [[maybe_unused]] std::uint8_t pad_0x8a1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Projectile_HookBlade because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Projectile_HookBlade) == 0x8a8);
};
