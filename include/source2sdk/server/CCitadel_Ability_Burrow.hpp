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
    // Size: 0xbc8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bInGround"
    // static metadata: MNetworkVarNames "GameTime_t m_SpinEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Burrow : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xad8[0xe0]; // 0xad8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bInGround; // 0xbb8        
        [[maybe_unused]] std::uint8_t pad_0xbb9[0x3]; // 0xbb9
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_SpinEndTime; // 0xbbc        
        client::ParticleIndex_t m_nBurrowEffect; // 0xbc0        
        [[maybe_unused]] std::uint8_t pad_0xbc4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Burrow because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Burrow) == 0xbc8);
};
