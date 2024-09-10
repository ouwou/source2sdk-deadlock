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
    // Size: 0xc40
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flPostCastHoldEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_HealthSwap : public server::CCitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_nFXIndex; // 0xad8        
        float m_flHealthToCaster; // 0xadc        
        float m_flTargetHealthLost; // 0xae0        
        [[maybe_unused]] std::uint8_t pad_0xae4[0x11c]; // 0xae4
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flPostCastHoldEndTime; // 0xc00        
        [[maybe_unused]] std::uint8_t pad_0xc04[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_HealthSwap because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_HealthSwap) == 0xc40);
};
