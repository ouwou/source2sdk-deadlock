#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/SatVolumeIndex_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xdd8
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_BulletFlurry : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc90[0x118]; // 0xc90
        // m_vecShootTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecShootTargets;
        char m_vecShootTargets[0x18]; // 0xda8        
        int32_t m_nNumPlayersKilled; // 0xdc0        
        int32_t m_nShootIndex; // 0xdc4        
        int32_t m_nShootIndexNPC; // 0xdc8        
        int32_t m_nBurstShots; // 0xdcc        
        entity2::GameTime_t m_flNextAttackTime; // 0xdd0        
        client::SatVolumeIndex_t m_nSatVolumeIndex; // 0xdd4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_BulletFlurry because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_BulletFlurry) == 0xdd8);
};
