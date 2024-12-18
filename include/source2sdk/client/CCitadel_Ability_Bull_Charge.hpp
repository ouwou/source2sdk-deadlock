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
    // Size: 0xf60
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "QAngle m_anglesCharging"
    // static metadata: MNetworkVarNames "GameTime_t m_flChargeStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
    // static metadata: MNetworkVarNames "bool m_bHitAPlayer"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bull_Charge : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc98[0x2a0]; // 0xc98
        // metadata: MNetworkEnable
        QAngle m_anglesCharging; // 0xf38        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnChargingStateChanged"
        entity2::GameTime_t m_flChargeStartTime; // 0xf44        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFastChargeEndTime; // 0xf48        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        bool m_bHitAPlayer; // 0xf4c        
        [[maybe_unused]] std::uint8_t pad_0xf4d[0x3]; // 0xf4d
        bool m_bFirstTick; // 0xf50        
        [[maybe_unused]] std::uint8_t pad_0xf51[0x3]; // 0xf51
        Vector m_vGoalDir; // 0xf54        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bull_Charge because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bull_Charge) == 0xf60);
};
