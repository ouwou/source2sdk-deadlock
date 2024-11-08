#pragma once
#include "source2sdk/client/C_CitadelTrackedProjectile.hpp"
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
    // Size: 0x8f0
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Projectile_HookBlade : public client::C_CitadelTrackedProjectile
    {
    public:
        bool bIsReturning; // 0x8e8        
        [[maybe_unused]] std::uint8_t pad_0x8e9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Projectile_HookBlade because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Projectile_HookBlade) == 0x8f0);
};
