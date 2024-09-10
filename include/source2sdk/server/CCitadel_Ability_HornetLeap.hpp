#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xd20
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bLeaping"
    // static metadata: MNetworkVarNames "GameTime_t m_flLeapStartTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_HornetLeap : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xad8[0x2]; // 0xad8
        // metadata: MNetworkEnable
        bool m_bLeaping; // 0xada        
        [[maybe_unused]] std::uint8_t pad_0xadb[0x1]; // 0xadb
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLeapStartTime; // 0xadc        
        client::ParticleIndex_t m_nFXIndex; // 0xae0        
        [[maybe_unused]] std::uint8_t pad_0xae4[0x234]; // 0xae4
        client::ParticleIndex_t m_TrailFX; // 0xd18        
        [[maybe_unused]] std::uint8_t pad_0xd1c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HornetLeap because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_HornetLeap) == 0xd20);
};
