#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
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
    // Size: 0xb98
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bAirRaiding"
    #pragma pack(push, 1)
    class CCitadel_Ability_PowerJump : public server::CCitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_nTargetingParticleIndex; // 0xae8        
        // metadata: MNetworkEnable
        bool m_bAirRaiding; // 0xaec        
        [[maybe_unused]] std::uint8_t pad_0xaed[0xab];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PowerJump because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PowerJump) == 0xb98);
};
