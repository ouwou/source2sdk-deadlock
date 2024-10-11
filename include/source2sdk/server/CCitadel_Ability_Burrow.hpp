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
    // Size: 0xbe0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bInGround"
    // static metadata: MNetworkVarNames "GameTime_t m_SpinEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Burrow : public server::CCitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xaf0[0xe0]; // 0xaf0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bInGround; // 0xbd0        
        [[maybe_unused]] std::uint8_t pad_0xbd1[0x3]; // 0xbd1
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_SpinEndTime; // 0xbd4        
        client::ParticleIndex_t m_nBurrowEffect; // 0xbd8        
        [[maybe_unused]] std::uint8_t pad_0xbdc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Burrow because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Burrow) == 0xbe0);
};
