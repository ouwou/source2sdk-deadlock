#pragma once
#include "source2sdk/server/CCitadel_Ability_PrimaryWeapon.hpp"
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
    // Size: 0xd40
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "QAngle m_angAimAngles"
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeapon_Slork : public server::CCitadel_Ability_PrimaryWeapon
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb88[0x198]; // 0xb88
        CUtlString m_strSprayerName; // 0xd20        
        CUtlString m_strPoisonName; // 0xd28        
        // metadata: MNetworkEnable
        QAngle m_angAimAngles; // 0xd30        
        bool m_bTracingConeAttack; // 0xd3c        
        [[maybe_unused]] std::uint8_t pad_0xd3d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_Slork because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon_Slork) == 0xd40);
};
