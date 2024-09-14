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
    // Size: 0xbd0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bInFlight"
    #pragma pack(push, 1)
    class CCitadel_Ability_Tokamak_DyingStar : public server::CCitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_nRollFXIndex; // 0xae8        
        // metadata: MNetworkEnable
        bool m_bInFlight; // 0xaec        
        [[maybe_unused]] std::uint8_t pad_0xaed[0xe3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Tokamak_DyingStar because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Tokamak_DyingStar) == 0xbd0);
};
