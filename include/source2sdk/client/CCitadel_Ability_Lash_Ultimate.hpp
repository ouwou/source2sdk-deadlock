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
    // Size: 0xf98
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
        [[maybe_unused]] std::uint8_t pad_0xe30[0x2]; // 0xe30
        // metadata: MNetworkEnable
        client::ELashGrappleState m_EGrappleState; // 0xe32        
        [[maybe_unused]] std::uint8_t pad_0xe33[0x1]; // 0xe33
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStateEnterTime; // 0xe34        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flNextStateTime; // 0xe38        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flBoostEndTime; // 0xe3c        
        [[maybe_unused]] std::uint8_t pad_0xe40[0x158];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Lash_Ultimate because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Lash_Ultimate) == 0xf98);
};
