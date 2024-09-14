#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xee8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flNextShootTime"
    #pragma pack(push, 1)
    class CAbility_Synth_Barrage : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc70[0x268]; // 0xc70
        int32_t m_nProjectilesScheduled; // 0xed8        
        client::ParticleIndex_t m_ChannelParticle; // 0xedc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flNextShootTime; // 0xee0        
        [[maybe_unused]] std::uint8_t pad_0xee4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Synth_Barrage because it is not a standard-layout class
    static_assert(sizeof(CAbility_Synth_Barrage) == 0xee8);
};
