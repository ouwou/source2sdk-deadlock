#pragma once
#include "source2sdk/client/ELeapState_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAutoScaledTime.hpp"
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
    // Size: 0xcb8
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
    class CCitadel_Ability_Bull_Leap : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        float m_flBoostYaw; // 0xaf8        
        // metadata: MNetworkEnable
        Vector m_vecCrashPosition; // 0xafc        
        // metadata: MNetworkEnable
        Vector m_vecCrashDirection; // 0xb08        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnLeapStateChanged"
        client::ELeapState_t m_eLeapState; // 0xb14        
        [[maybe_unused]] std::uint8_t pad_0xb15[0x3]; // 0xb15
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flStateEnterTime; // 0xb18        
        [[maybe_unused]] std::uint8_t pad_0xb1c[0x4]; // 0xb1c
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flNextStateTime; // 0xb20        
        // metadata: MNetworkEnable
        server::CCitadelAutoScaledTime m_flBoostEndTime; // 0xb38        
        [[maybe_unused]] std::uint8_t pad_0xb50[0x158]; // 0xb50
        Vector m_vecLastVel; // 0xca8        
        [[maybe_unused]] std::uint8_t pad_0xcb4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bull_Leap because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bull_Leap) == 0xcb8);
};
