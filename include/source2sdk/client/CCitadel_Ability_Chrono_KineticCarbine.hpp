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
    // Size: 0xe60
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
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bWantsSlow; // 0xc80        
        [[maybe_unused]] std::uint8_t pad_0xc81[0x3]; // 0xc81
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flLatchedTimeScaleFracChangeTime; // 0xc84        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        float m_flLatchedTimeScaleFrac; // 0xc88        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flSpeedBoostEndTime; // 0xc8c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        entity2::GameTime_t m_flShotTimeScaleEndTime; // 0xc90        
        [[maybe_unused]] std::uint8_t pad_0xc94[0x4]; // 0xc94
        float m_flStoredPowerPct; // 0xc98        
        [[maybe_unused]] std::uint8_t pad_0xc9c[0x1c4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Chrono_KineticCarbine because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Chrono_KineticCarbine) == 0xe60);
};
