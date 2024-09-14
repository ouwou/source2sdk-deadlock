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
    // Size: 0xd60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bInGround"
    // static metadata: MNetworkVarNames "GameTime_t m_SpinEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Burrow : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc70[0xe0]; // 0xc70
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bInGround; // 0xd50        
        [[maybe_unused]] std::uint8_t pad_0xd51[0x3]; // 0xd51
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_SpinEndTime; // 0xd54        
        client::ParticleIndex_t m_nBurrowEffect; // 0xd58        
        [[maybe_unused]] std::uint8_t pad_0xd5c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Burrow because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Burrow) == 0xd60);
};
