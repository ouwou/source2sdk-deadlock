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
    // Size: 0xee0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "QAngle m_anglesCharging"
    // static metadata: MNetworkVarNames "GameTime_t m_flChargeStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bull_Charge : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc60[0x268]; // 0xc60
        // metadata: MNetworkEnable
        QAngle m_anglesCharging; // 0xec8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnChargingStateChanged"
        entity2::GameTime_t m_flChargeStartTime; // 0xed4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFastChargeEndTime; // 0xed8        
        [[maybe_unused]] std::uint8_t pad_0xedc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bull_Charge because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Bull_Charge) == 0xee0);
};
