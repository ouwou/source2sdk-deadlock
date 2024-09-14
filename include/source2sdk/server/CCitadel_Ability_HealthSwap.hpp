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
    // Size: 0xc50
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_HealthSwap : public server::CCitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0xae8        
        float m_flHealthToCaster; // 0xaec        
        float m_flTargetHealthLost; // 0xaf0        
        [[maybe_unused]] std::uint8_t pad_0xaf4[0x11c]; // 0xaf4
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPostCastHoldEndTime; // 0xc10        
        [[maybe_unused]] std::uint8_t pad_0xc14[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HealthSwap because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_HealthSwap) == 0xc50);
};
