#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadel_Ability_PrimaryWeapon_BeamWeapon.hpp"
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
    // Size: 0xfc0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flStartWindUpTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartFiringTime"
    // static metadata: MNetworkVarNames "bool m_bFiring"
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeapon_Bebop : public server::CCitadel_Ability_PrimaryWeapon_BeamWeapon
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb98[0x2a8]; // 0xb98
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartWindUpTime; // 0xe40        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStartFiringTime; // 0xe44        
        // metadata: MNetworkEnable
        bool m_bFiring; // 0xe48        
        [[maybe_unused]] std::uint8_t pad_0xe49[0x177];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_Bebop because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon_Bebop) == 0xfc0);
};
