#pragma once
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
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
    // Size: 0xe00
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flFlurryEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_BulletFlurry : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flFlurryEndTime; // 0xca0        
        [[maybe_unused]] std::uint8_t pad_0xcb8[0x118]; // 0xcb8
        // m_vecShootTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_vecShootTargets;
        char m_vecShootTargets[0x18]; // 0xdd0        
        int32_t m_nNumPlayersKilled; // 0xde8        
        int32_t m_nShootIndex; // 0xdec        
        int32_t m_nShootIndexNPC; // 0xdf0        
        int32_t m_nBurstShots; // 0xdf4        
        entity2::GameTime_t m_flNextAttackTime; // 0xdf8        
        client::SatVolumeIndex_t m_nSatVolumeIndex; // 0xdfc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_BulletFlurry because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_BulletFlurry) == 0xe00);
};
