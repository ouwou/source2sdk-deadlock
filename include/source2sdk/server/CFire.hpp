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
    // Size: 0x858
    // Has VTable
    #pragma pack(push, 1)
    class CFire : public server::CBaseModelEntity
    {
    public:
        // m_hEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFire> m_hEffect;
        char m_hEffect[0x4]; // 0x7c8        
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x7cc        
        int32_t m_nFireType; // 0x7d0        
        float m_flFuel; // 0x7d4        
        entity2::GameTime_t m_flDamageTime; // 0x7d8        
        entity2::GameTime_t m_lastDamage; // 0x7dc        
        float m_flFireSize; // 0x7e0        
        entity2::GameTime_t m_flLastNavUpdateTime; // 0x7e4        
        float m_flHeatLevel; // 0x7e8        
        float m_flHeatAbsorb; // 0x7ec        
        float m_flDamageScale; // 0x7f0        
        float m_flMaxHeat; // 0x7f4        
        float m_flLastHeatLevel; // 0x7f8        
        float m_flAttackTime; // 0x7fc        
        bool m_bEnabled; // 0x800        
        bool m_bStartDisabled; // 0x801        
        bool m_bDidActivate; // 0x802        
        [[maybe_unused]] std::uint8_t pad_0x803[0x5]; // 0x803
        entity2::CEntityIOOutput m_OnIgnited; // 0x808        
        entity2::CEntityIOOutput m_OnExtinguished; // 0x830        
        
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
    static_assert(sizeof(CFire) == 0x858);
};
