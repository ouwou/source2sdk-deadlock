#pragma once
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadel_Modifier_ExplosiveShots__BulletEntityPair_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x188
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_ExplosiveShots : public server::CCitadelModifier
    {
    public:
        // m_vecHitEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CCitadel_Modifier_ExplosiveShots__BulletEntityPair_t> m_vecHitEnts;
        char m_vecHitEnts[0x18]; // 0xc0        
        bool m_bExplosionCanHitMultipleTimes; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xd9[0xaf];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ExplosiveShots because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ExplosiveShots) == 0x188);
};
