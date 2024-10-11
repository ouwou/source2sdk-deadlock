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
    // Size: 0xdd0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "QAngle m_anglesCharging"
    // static metadata: MNetworkVarNames "GameTime_t m_flChargeStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flFastChargeEndTime"
    // static metadata: MNetworkVarNames "bool m_bHitAPlayer"
    #pragma pack(push, 1)
    class CCitadel_Ability_Bull_Charge : public server::CCitadelBaseAbility
    {
    public:
        // m_vecHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecHitEntities;
        char m_vecHitEntities[0x18]; // 0xaf0        
        bool m_bGainedWeaponPowerBuff; // 0xb08        
        [[maybe_unused]] std::uint8_t pad_0xb09[0x2a7]; // 0xb09
        // metadata: MNetworkEnable
        QAngle m_anglesCharging; // 0xdb0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnChargingStateChanged"
        entity2::GameTime_t m_flChargeStartTime; // 0xdbc        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFastChargeEndTime; // 0xdc0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerExclusive"
        bool m_bHitAPlayer; // 0xdc4        
        [[maybe_unused]] std::uint8_t pad_0xdc5[0x3]; // 0xdc5
        bool m_bFirstTick; // 0xdc8        
        [[maybe_unused]] std::uint8_t pad_0xdc9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_Bull_Charge because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_Bull_Charge) == 0xdd0);
};
