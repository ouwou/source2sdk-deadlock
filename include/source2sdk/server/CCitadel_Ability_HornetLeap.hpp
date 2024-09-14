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
    // Size: 0xd30
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bLeaping"
    // static metadata: MNetworkVarNames "GameTime_t m_flLeapStartTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_HornetLeap : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xae8[0x2]; // 0xae8
        // metadata: MNetworkEnable
        bool m_bLeaping; // 0xaea        
        [[maybe_unused]] std::uint8_t pad_0xaeb[0x1]; // 0xaeb
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flLeapStartTime; // 0xaec        
        client::ParticleIndex_t m_nFXIndex; // 0xaf0        
        [[maybe_unused]] std::uint8_t pad_0xaf4[0x234]; // 0xaf4
        client::ParticleIndex_t m_TrailFX; // 0xd28        
        [[maybe_unused]] std::uint8_t pad_0xd2c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HornetLeap because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_HornetLeap) == 0xd30);
};
