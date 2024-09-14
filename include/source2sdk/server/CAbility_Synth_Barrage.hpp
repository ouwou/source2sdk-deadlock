#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/ShotID_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd68
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flNextShootTime"
    #pragma pack(push, 1)
    class CAbility_Synth_Barrage : public server::CCitadelBaseAbility
    {
    public:
        client::ShotID_t m_tLastShotID; // 0xae8        
        [[maybe_unused]] std::uint8_t pad_0xaec[0x26c]; // 0xaec
        int32_t m_nProjectilesScheduled; // 0xd58        
        client::ParticleIndex_t m_ChannelParticle; // 0xd5c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flNextShootTime; // 0xd60        
        [[maybe_unused]] std::uint8_t pad_0xd64[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Synth_Barrage because it is not a standard-layout class
    static_assert(sizeof(CAbility_Synth_Barrage) == 0xd68);
};
