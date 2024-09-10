#pragma once
#include "source2sdk/client/CCitadel_Ability_PrimaryWeapon_BeamWeapon.hpp"
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
    // Size: 0x1160
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flStartWindUpTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartFiringTime"
    // static metadata: MNetworkVarNames "bool m_bFiring"
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeapon_Bebop : public client::CCitadel_Ability_PrimaryWeapon_BeamWeapon
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd38[0x2a8]; // 0xd38
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartWindUpTime; // 0xfe0        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartFiringTime; // 0xfe4        
        // metadata: MNetworkEnable
        bool m_bFiring; // 0xfe8        
        [[maybe_unused]] std::uint8_t pad_0xfe9[0x177];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_Bebop because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon_Bebop) == 0x1160);
};
