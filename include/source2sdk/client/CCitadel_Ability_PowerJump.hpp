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
    // Size: 0xd68
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAirRaiding"
    #pragma pack(push, 1)
    class CCitadel_Ability_PowerJump : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc78[0x4]; // 0xc78
        client::ParticleIndex_t m_nTargetingParticleIndex; // 0xc7c        
        // metadata: MNetworkEnable
        bool m_bAirRaiding; // 0xc80        
        [[maybe_unused]] std::uint8_t pad_0xc81[0xe7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PowerJump because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PowerJump) == 0xd68);
};
