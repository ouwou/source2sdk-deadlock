#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xdb8
    // Has VTable
    #pragma pack(push, 1)
    class CAbility_Operative_UmbrellaManeuver_Attack : public client::C_CitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_ChannelParticle; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xc9c[0x11c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Operative_UmbrellaManeuver_Attack because it is not a standard-layout class
    static_assert(sizeof(CAbility_Operative_UmbrellaManeuver_Attack) == 0xdb8);
};
