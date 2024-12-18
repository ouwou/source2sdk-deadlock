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
    // Size: 0xcc8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flFloat"
    // static metadata: MNetworkVarNames "int m_nLightningStrikesRemaining"
    #pragma pack(push, 1)
    class CCitadel_Ability_StormCloud : public server::CCitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_nTargetingParticleIndex; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xafc[0x1c4]; // 0xafc
        // metadata: MNetworkEnable
        float m_flFloat; // 0xcc0        
        // metadata: MNetworkEnable
        int32_t m_nLightningStrikesRemaining; // 0xcc4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_StormCloud because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_StormCloud) == 0xcc8);
};
