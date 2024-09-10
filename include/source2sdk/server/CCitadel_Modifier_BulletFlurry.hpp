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
    // Size: 0x218
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Modifier_BulletFlurry : public server::CCitadelModifier
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc8[0x118]; // 0xc8
        float m_flRadius; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1e4[0x4]; // 0x1e4
        // m_vecShootTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecShootTargets;
        char m_vecShootTargets[0x18]; // 0x1e8        
        int32_t m_nNumPlayersKilled; // 0x200        
        int32_t m_nShootIndex; // 0x204        
        int32_t m_nShootIndexNPC; // 0x208        
        int32_t m_nBurstShots; // 0x20c        
        entity2::GameTime_t m_flNextAttackTime; // 0x210        
        [[maybe_unused]] std::uint8_t pad_0x214[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_BulletFlurry because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Modifier_BulletFlurry) == 0x218);
};
