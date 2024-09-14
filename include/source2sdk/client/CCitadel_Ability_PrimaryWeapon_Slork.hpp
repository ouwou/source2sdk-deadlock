#pragma once
#include "source2sdk/client/CCitadel_Ability_PrimaryWeapon.hpp"
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
    // Size: 0xf18
    // Has VTable
    #pragma pack(push, 1)
    class CCitadel_Ability_PrimaryWeapon_Slork : public client::CCitadel_Ability_PrimaryWeapon
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd48[0x198]; // 0xd48
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        // metadata: MNetworkChangeCallback "OnSlorkAimAnglesChanged"
        QAngle m_angAimAngles; // 0xee0        
        [[maybe_unused]] std::uint8_t pad_0xeec[0x24]; // 0xeec
        bool m_bNeedAimAngleReset; // 0xf10        
        [[maybe_unused]] std::uint8_t pad_0xf11[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_Slork because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_PrimaryWeapon_Slork) == 0xf18);
};
