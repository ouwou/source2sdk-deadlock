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
    // Size: 0xdc8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_HealthSwap : public client::C_CitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0xc60        
        float m_flHealthToCaster; // 0xc64        
        float m_flTargetHealthLost; // 0xc68        
        [[maybe_unused]] std::uint8_t pad_0xc6c[0x11c]; // 0xc6c
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPostCastHoldEndTime; // 0xd88        
        [[maybe_unused]] std::uint8_t pad_0xd8c[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HealthSwap because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_HealthSwap) == 0xdc8);
};
