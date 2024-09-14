#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x210
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_BulletFlurry : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc0[0x118]; // 0xc0
        float m_flRadius; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1dc[0x4]; // 0x1dc
        // m_vecShootTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecShootTargets;
        char m_vecShootTargets[0x18]; // 0x1e0        
        int32_t m_nNumPlayersKilled; // 0x1f8        
        int32_t m_nShootIndex; // 0x1fc        
        int32_t m_nShootIndexNPC; // 0x200        
        int32_t m_nBurstShots; // 0x204        
        entity2::GameTime_t m_flNextAttackTime; // 0x208        
        [[maybe_unused]] std::uint8_t pad_0x20c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BulletFlurry because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_BulletFlurry) == 0x210);
};
