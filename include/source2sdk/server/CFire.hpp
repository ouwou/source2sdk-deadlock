#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    class CBaseFire;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x7f8
    // Has VTable
    #pragma pack(push, 1)
    class CFire : public server::CBaseModelEntity
    {
    public:
        // m_hEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFire> m_hEffect;
        char m_hEffect[0x4]; // 0x768        
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x76c        
        int32_t m_nFireType; // 0x770        
        float m_flFuel; // 0x774        
        entity2::GameTime_t m_flDamageTime; // 0x778        
        entity2::GameTime_t m_lastDamage; // 0x77c        
        float m_flFireSize; // 0x780        
        entity2::GameTime_t m_flLastNavUpdateTime; // 0x784        
        float m_flHeatLevel; // 0x788        
        float m_flHeatAbsorb; // 0x78c        
        float m_flDamageScale; // 0x790        
        float m_flMaxHeat; // 0x794        
        float m_flLastHeatLevel; // 0x798        
        float m_flAttackTime; // 0x79c        
        bool m_bEnabled; // 0x7a0        
        bool m_bStartDisabled; // 0x7a1        
        bool m_bDidActivate; // 0x7a2        
        [[maybe_unused]] std::uint8_t pad_0x7a3[0x5]; // 0x7a3
        entity2::CEntityIOOutput m_OnIgnited; // 0x7a8        
        entity2::CEntityIOOutput m_OnExtinguished; // 0x7d0        
        
        // Datamap fields:
        // void CFireBurnThink; // 0x0
        // void CFireGoOutThink; // 0x0
        // void InputStartFire; // 0x0
        // float InputExtinguish; // 0x0
        // float InputExtinguishTemporary; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFire because it is not a standard-layout class
    static_assert(sizeof(CFire) == 0x7f8);
};
