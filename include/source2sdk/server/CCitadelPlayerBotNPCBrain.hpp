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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1750
    // Has VTable
    #pragma pack(push, 1)
    class CCitadelPlayerBotNPCBrain : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1608[0x148];
        // Static fields:
        static CUtlSymbolLarge &Get_SCHED_BOT_IDLE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[0]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_MOVE_WITHOUT_GOAL() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[1]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_WAIT_FOR_REEVALUATE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[2]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_ATTACK_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[3]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_USE_ABILITY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[4]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_DEFEND_OBJECTIVE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[5]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_RETREAT() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[6]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_PUSH_LANE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[7]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_ZIPLINING() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[8]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_USE_ZIPLINE_FROM_BASE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[9]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_USE_ZIPLINE_RETREAT() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[10]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_DEFEND_BASE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[11]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_MOVE_TO_LOCATION() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[12]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_RETRIEVE_IDOL() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[13]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_RETURN_IDOL() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[14]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_TAKEOVER_SUPPORT_ALLY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[15]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_TEST_SCHEDULE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[16]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_BOT_TEST_IDLE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[17]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_SELECT_HERO() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[18]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_GET_PATH_TO_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[19]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_GET_PATH_TO_TARGET() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[20]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_GET_PATH_TO_LOCATION() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[21]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_MOVE_WITHOUT_GOAL() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[22]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_WAIT_MOVEMENT_RETREAT() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[23]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_STOP_ZIPLING() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[24]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_WAIT_FOR_ZIPLINE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[25]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_EXECUTE_ZIPLINE_ABILITY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[26]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_WAIT_ZIPLINING_ATTACK() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[27]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_WAIT_ZIPLINING_RETREAT() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[28]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_ATTACK_TARGET() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[29]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_AIM_ABILITY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[30]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_USE_ABILITY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[31]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_PICKUP_IDOL() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[32]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_TEST_TASK() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[33]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BOT_TEST_END_SCHEDULE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[34]->m_pInstance);};
        static client::ConditionId_t &Get_COND_BOT_REEVALUATE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[35]->m_pInstance);};
        static client::ConditionId_t &Get_COND_HEALTH_CRITICAL() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[36]->m_pInstance);};
        static client::ConditionId_t &Get_COND_OUT_OF_AMMO() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[37]->m_pInstance);};
        static client::ConditionId_t &Get_COND_SILENCED() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[38]->m_pInstance);};
        static client::ConditionId_t &Get_COND_OBJECTIVE_LOST() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[39]->m_pInstance);};
        static client::ConditionId_t &Get_COND_USE_ABILITY() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[40]->m_pInstance);};
        static client::ConditionId_t &Get_COND_HOLDING_IDOL() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CCitadelPlayerBotNPCBrain")->GetStaticFields()[41]->m_pInstance);};
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCitadelPlayerBotNPCBrain) == 0x1750);
};
