#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xa08
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Projectile_WebWall : public server::CCitadelProjectile
    {
    public:
        bool bHasDetonatedOnTarget; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x871[0x3]; // 0x871
        client::ParticleIndex_t m_nWebWallFxIndex; // 0x874        
        [[maybe_unused]] std::uint8_t pad_0x878[0x10]; // 0x878
        Vector m_vecCastPosition; // 0x888        
        Vector m_vecCastPositionNormal; // 0x894        
        Vector m_vecEndPosition; // 0x8a0        
        Vector m_vecEndPositionNormal; // 0x8ac        
        [[maybe_unused]] std::uint8_t pad_0x8b8[0x150];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Projectile_WebWall because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Projectile_WebWall) == 0xa08);
};
