#pragma once
#include "source2sdk/client/ConditionId_t.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1630
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hOwner"
    #pragma pack(push, 1)
    class CNPC_HeroCloneTrooper : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1608[0x4]; // 0x1608
        // metadata: MNetworkEnable
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x160c        
        [[maybe_unused]] std::uint8_t pad_0x1610[0x20];
        
        // Static fields:
        static CUtlSymbolLarge &Get_SCHED_CLONE_TROOPER_RELOAD() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[0]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_CLONE_TROOPER_DODGE_ROLL() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[1]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_CLONE_RANGE_ATTACK() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[2]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_CLONE_SENTRY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[3]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_CLONE_MELEE_ATTACK() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[4]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_CLONE_CHARGE_FORWARD() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[5]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_CLONE_CHARGE_TO_SQUAD() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[6]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_CLONE_ADVANCE_ON_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[7]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_CLONE_JUMP_TOWARD_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[8]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_CLONE_FOLLOW_OWNER() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[9]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_CLONE_DODGE_ROLL() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[10]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_CLONE_RANGE_ATTACK() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[11]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_CLONE_JUMP_AT_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[12]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_CLONE_GET_PATH_TO_SQUAD() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[13]->m_pInstance);};
        static client::ConditionId_t &Get_COND_CLONE_FAR_FROM_OWNER() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[14]->m_pInstance);};
        static client::ConditionId_t &Get_COND_CLONE_NEW_ORDERS() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[15]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_HeroCloneTrooper because it is not a standard-layout class
    static_assert(sizeof(CNPC_HeroCloneTrooper) == 0x1630);
};
