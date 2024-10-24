#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelBaseAbility.hpp"
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
    // Size: 0xc40
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_BulletFlurry : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf8[0x118]; // 0xaf8
        // m_vecShootTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecShootTargets;
        char m_vecShootTargets[0x18]; // 0xc10        
        int32_t m_nNumPlayersKilled; // 0xc28        
        int32_t m_nShootIndex; // 0xc2c        
        int32_t m_nShootIndexNPC; // 0xc30        
        int32_t m_nBurstShots; // 0xc34        
        entity2::GameTime_t m_flNextAttackTime; // 0xc38        
        [[maybe_unused]] std::uint8_t pad_0xc3c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_BulletFlurry because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_BulletFlurry) == 0xc40);
};
