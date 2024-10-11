#pragma once
#include "source2sdk/client/DamageTypes_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Size: 0xa38
    // Has VTable
    #pragma pack(push, 1)
    class CTriggerHurt : public server::CBaseTrigger
    {
    public:
        float m_flOriginalDamage; // 0x998        
        float m_flDamage; // 0x99c        
        float m_flDamageCap; // 0x9a0        
        entity2::GameTime_t m_flLastDmgTime; // 0x9a4        
        float m_flForgivenessDelay; // 0x9a8        
        client::DamageTypes_t m_bitsDamageInflict; // 0x9ac        
        int32_t m_damageModel; // 0x9b0        
        bool m_bNoDmgForce; // 0x9b4        
        [[maybe_unused]] std::uint8_t pad_0x9b5[0x3]; // 0x9b5
        Vector m_vDamageForce; // 0x9b8        
        bool m_thinkAlways; // 0x9c4        
        [[maybe_unused]] std::uint8_t pad_0x9c5[0x3]; // 0x9c5
        float m_hurtThinkPeriod; // 0x9c8        
        [[maybe_unused]] std::uint8_t pad_0x9cc[0x4]; // 0x9cc
        entity2::CEntityIOOutput m_OnHurt; // 0x9d0        
        entity2::CEntityIOOutput m_OnHurtPlayer; // 0x9f8        
        // m_hurtEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hurtEntities;
        char m_hurtEntities[0x18]; // 0xa20        
        
        // Datamap fields:
        // void CTriggerHurtRadiationThink; // 0x0
        // void CTriggerHurtHurtThink; // 0x0
        // void CTriggerHurtNavThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerHurt because it is not a standard-layout class
    static_assert(sizeof(CTriggerHurt) == 0xa38);
};
