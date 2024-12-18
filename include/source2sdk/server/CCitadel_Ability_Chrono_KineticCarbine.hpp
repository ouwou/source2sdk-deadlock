#pragma once
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
    // Size: 0xd10
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bWantsSlow"
    // static metadata: MNetworkVarNames "GameTime_t m_flLatchedTimeScaleFracChangeTime"
    // static metadata: MNetworkVarNames "float m_flLatchedTimeScaleFrac"
    // static metadata: MNetworkVarNames "GameTime_t m_flSpeedBoostEndTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flShotTimeScaleEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Chrono_KineticCarbine : public server::CCitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bWantsSlow; // 0xaf8        
        [[maybe_unused]] std::uint8_t pad_0xaf9[0x3]; // 0xaf9
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flLatchedTimeScaleFracChangeTime; // 0xafc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flLatchedTimeScaleFrac; // 0xb00        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flSpeedBoostEndTime; // 0xb04        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flShotTimeScaleEndTime; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb0c[0x4]; // 0xb0c
        float m_flStoredPowerPct; // 0xb10        
        [[maybe_unused]] std::uint8_t pad_0xb14[0x1fc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Chrono_KineticCarbine because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Chrono_KineticCarbine) == 0xd10);
};
