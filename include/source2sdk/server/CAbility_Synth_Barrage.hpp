#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/client/ShotID_t.hpp"
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
    // Size: 0xd58
    // Has VTable
    #pragma pack(push, 1)
    class CAbility_Synth_Barrage : public server::CCitadelBaseAbility
    {
    public:
        client::ShotID_t m_tLastShotID; // 0xad8        
        [[maybe_unused]] std::uint8_t pad_0xadc[0x26c]; // 0xadc
        int32_t m_nProjectilesScheduled; // 0xd48        
        float m_fProjectileInterval; // 0xd4c        
        client::ParticleIndex_t m_ChannelParticle; // 0xd50        
        [[maybe_unused]] std::uint8_t pad_0xd54[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Synth_Barrage because it is not a standard-layout class
    
    static_assert(sizeof(CAbility_Synth_Barrage) == 0xd58);
};
