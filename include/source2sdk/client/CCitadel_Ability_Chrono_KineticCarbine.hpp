#pragma once
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
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
    // Size: 0xeb0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bWantsSlow"
    // static metadata: MNetworkVarNames "GameTime_t m_flLatchedTimeScaleFracChangeTime"
    // static metadata: MNetworkVarNames "float m_flLatchedTimeScaleFrac"
    // static metadata: MNetworkVarNames "GameTime_t m_flSpeedBoostEndTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flShotTimeScaleEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Chrono_KineticCarbine : public client::C_CitadelBaseAbility
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bWantsSlow; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xc99[0x3]; // 0xc99
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flLatchedTimeScaleFracChangeTime; // 0xc9c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        float m_flLatchedTimeScaleFrac; // 0xca0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flSpeedBoostEndTime; // 0xca4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        entity2::GameTime_t m_flShotTimeScaleEndTime; // 0xca8        
        [[maybe_unused]] std::uint8_t pad_0xcac[0x4]; // 0xcac
        float m_flStoredPowerPct; // 0xcb0        
        [[maybe_unused]] std::uint8_t pad_0xcb4[0x1fc];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Chrono_KineticCarbine because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Chrono_KineticCarbine) == 0xeb0);
};
