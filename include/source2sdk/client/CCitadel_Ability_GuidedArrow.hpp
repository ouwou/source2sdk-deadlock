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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xdc0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hProjectile"
    // static metadata: MNetworkVarNames "float m_flArrowSpeed"
    // static metadata: MNetworkVarNames "GameTime_t m_flSnapAnglesBackTime"
    // static metadata: MNetworkVarNames "int m_nBonusTechPower"
    #pragma pack(push, 1)
    class CCitadel_Ability_GuidedArrow : public client::C_CitadelBaseAbility
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xc60[0x8]; // 0xc60
        // metadata: MNetworkEnable
        // m_hProjectile has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hProjectile;
        char m_hProjectile[0x4]; // 0xc68        
        // metadata: MNetworkEnable
        float m_flArrowSpeed; // 0xc6c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flSnapAnglesBackTime; // 0xc70        
        // metadata: MNetworkEnable
        int32_t m_nBonusTechPower; // 0xc74        
        entity2::GameTime_t m_flCastTime; // 0xc78        
        bool m_bNeedsExplosion; // 0xc7c        
        [[maybe_unused]] std::uint8_t pad_0xc7d[0x3]; // 0xc7d
        Vector m_vProjectileRemovedOrigin; // 0xc80        
        QAngle m_angCasterAnglesAtCastTime; // 0xc8c        
        float m_flTravelDistance; // 0xc98        
        bool m_bInKillFlow; // 0xc9c        
        [[maybe_unused]] std::uint8_t pad_0xc9d[0x3]; // 0xc9d
        float m_flProjectileTurnVel; // 0xca0        
        [[maybe_unused]] std::uint8_t pad_0xca4[0x11c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_GuidedArrow because it is not a standard-layout class
    
    static_assert(sizeof(CCitadel_Ability_GuidedArrow) == 0xdc0);
};
