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
    // Size: 0xb28
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bActive"
    #pragma pack(push, 1)
    class CCitadel_Ability_RiotProtocol : public server::CCitadelBaseAbility
    {
    public:
        client::ParticleIndex_t m_ChargeUpParticle; // 0xae8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bActive; // 0xaec        
        [[maybe_unused]] std::uint8_t pad_0xaed[0x3b];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_RiotProtocol because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_RiotProtocol) == 0xb28);
};
