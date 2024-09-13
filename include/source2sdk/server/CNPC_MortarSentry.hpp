#pragma once
#include "source2sdk/server/CAI_CitadelNPC.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1658
    // Has VTable
    #pragma pack(push, 1)
    class CNPC_MortarSentry : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1600[0xc]; // 0x1600
        float m_flAttackCone; // 0x160c        
        float m_flLastAlertSound; // 0x1610        
        float m_flTrackingSpeed; // 0x1614        
        Vector m_vTargetPosition; // 0x1618        
        float m_flSearchRadius; // 0x1624        
        [[maybe_unused]] std::uint8_t pad_0x1628[0x30];
        
        // Static fields:
        static CUtlSymbolLarge &Get_SCHED_MORTAR_ATTACK() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->GetStaticFields()[0]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_MORTAR_SENTRY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->GetStaticFields()[1]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_MORTAR_ATTACK() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->GetStaticFields()[2]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_MORTAR_NO_TARGET_VOLLEY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_MortarSentry")->GetStaticFields()[3]->m_pInstance);};
        
        // Datamap fields:
        // float m_flLifeTime; // 0x1628
        // void m_nCurrentVolley; // 0x1638
        // void m_nGrenadesPerVolley; // 0x163c
        // void m_flNextAttackTime; // 0x1640
        // void m_flAttackRateInnerVolley; // 0x1644
        // void m_flAttackRate; // 0x1648
        // void m_vLastTargetPos; // 0x164c
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_MortarSentry because it is not a standard-layout class
    
    static_assert(sizeof(CNPC_MortarSentry) == 0x1658);
};
