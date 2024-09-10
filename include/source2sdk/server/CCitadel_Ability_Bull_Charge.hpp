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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xd78
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "QAngle m_anglesCharging"
    // static metadata: MNetworkVarNames "GameTime_t m_flChargeStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bull_Charge : public server::CCitadelBaseAbility
    {
    public:
        // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEntities;
        char m_vecHitEntities[0x18]; // 0xad8        
        bool m_bGainedWeaponPowerBuff; // 0xaf0        
        [[maybe_unused]] std::uint8_t pad_0xaf1[0x26f]; // 0xaf1
        // metadata: MNetworkEnable
        QAngle m_anglesCharging; // 0xd60        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnChargingStateChanged"
        entity2::GameTime_t m_flChargeStartTime; // 0xd6c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFastChargeEndTime; // 0xd70        
        [[maybe_unused]] std::uint8_t pad_0xd74[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bull_Charge because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_Bull_Charge) == 0xd78);
};
