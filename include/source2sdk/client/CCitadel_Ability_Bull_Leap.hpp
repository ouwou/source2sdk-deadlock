#pragma once
#include "source2sdk/client/CCitadelAutoScaledTime.hpp"
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
#include "source2sdk/client/ELeapState_t.hpp"
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
    // Size: 0xe40
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "float m_flBoostYaw"
    // static metadata: MNetworkVarNames "Vector m_vecCrashPosition"
    // static metadata: MNetworkVarNames "Vector m_vecCrashDirection"
    // static metadata: MNetworkVarNames "ELeapState_t m_eLeapState"
    // static metadata: MNetworkVarNames "GameTime_t m_flStateEnterTime"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flNextStateTime"
    // static metadata: MNetworkVarNames "CCitadelAutoScaledTime m_flBoostEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bull_Leap : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        float m_flBoostYaw; // 0xc80        
        // metadata: MNetworkEnable
        Vector m_vecCrashPosition; // 0xc84        
        // metadata: MNetworkEnable
        Vector m_vecCrashDirection; // 0xc90        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnLeapStateChanged"
        client::ELeapState_t m_eLeapState; // 0xc9c        
        [[maybe_unused]] std::uint8_t pad_0xc9d[0x3]; // 0xc9d
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStateEnterTime; // 0xca0        
        [[maybe_unused]] std::uint8_t pad_0xca4[0x4]; // 0xca4
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flNextStateTime; // 0xca8        
        // metadata: MNetworkEnable
        client::CCitadelAutoScaledTime m_flBoostEndTime; // 0xcc0        
        [[maybe_unused]] std::uint8_t pad_0xcd8[0x158]; // 0xcd8
        Vector m_vecLastVel; // 0xe30        
        [[maybe_unused]] std::uint8_t pad_0xe3c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bull_Leap because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bull_Leap) == 0xe40);
};
