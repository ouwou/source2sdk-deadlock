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
    // Size: 0x870
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Projectile_MagicBolt : public server::CCitadelProjectile
    {
    public:
        bool bIsCloneProjectile; // 0x868        
        [[maybe_unused]] std::uint8_t pad_0x869[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Projectile_MagicBolt because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Projectile_MagicBolt) == 0x870);
};
