#pragma once
#include "source2sdk/server/CCitadelProjectile.hpp"
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
    // Size: 0x8b8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Projectile_WreckingBall : public server::CCitadelProjectile
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x868[0x10]; // 0x868
        bool m_bBroken; // 0x878        
        [[maybe_unused]] std::uint8_t pad_0x879[0x3f];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Projectile_WreckingBall because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Projectile_WreckingBall) == 0x8b8);
};
