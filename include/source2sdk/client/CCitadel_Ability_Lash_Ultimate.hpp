#pragma once
#include "source2sdk/client/CCitadelBaseLockonAbility.hpp"
#include "source2sdk/client/ELashGrappleState.hpp"
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
    // Size: 0xf08
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "ELashGrappleState m_EGrappleState"
    // static metadata: MNetworkVarNames "GameTime_t m_flStateEnterTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextStateTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flBoostEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Lash_Ultimate : public client::CCitadelBaseLockonAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xdd8[0x2]; // 0xdd8
        // metadata: MNetworkEnable
        client::ELashGrappleState m_EGrappleState; // 0xdda        
        [[maybe_unused]] std::uint8_t pad_0xddb[0x1]; // 0xddb
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStateEnterTime; // 0xddc        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flNextStateTime; // 0xde0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flBoostEndTime; // 0xde4        
        [[maybe_unused]] std::uint8_t pad_0xde8[0x120];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Lash_Ultimate because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Lash_Ultimate) == 0xf08);
};
