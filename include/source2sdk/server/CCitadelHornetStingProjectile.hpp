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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x850
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelHornetStingProjectile : public server::CCitadelProjectile
    {
    public:
        int32_t m_iMaxBounces; // 0x820        
        int32_t m_BounceCount; // 0x824        
        bool m_bHitHero; // 0x828        
        [[maybe_unused]] std::uint8_t pad_0x829[0x7]; // 0x829
        // m_vecValidBounceTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecValidBounceTargets;
        char m_vecValidBounceTargets[0x18]; // 0x830        
        float m_flBounceRange; // 0x848        
        [[maybe_unused]] std::uint8_t pad_0x84c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelHornetStingProjectile because it is not a standard-layout class
    static_assert(sizeof(CCitadelHornetStingProjectile) == 0x850);
};
