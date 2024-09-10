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
    // Size: 0xea0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bLeaping"
    // static metadata: MNetworkVarNames "GameTime_t m_flLeapStartTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_HornetLeap : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc60[0x2]; // 0xc60
        // metadata: MNetworkEnable
        bool m_bLeaping; // 0xc62        
        [[maybe_unused]] std::uint8_t pad_0xc63[0x1]; // 0xc63
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLeapStartTime; // 0xc64        
        client::ParticleIndex_t m_nFXIndex; // 0xc68        
        [[maybe_unused]] std::uint8_t pad_0xc6c[0x234];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HornetLeap because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_HornetLeap) == 0xea0);
};