#pragma once
#include "source2sdk/client/ConditionId_t.hpp"
#include "source2sdk/client/ETier3Phase_t.hpp"
#include "source2sdk/client/ETier3State_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Size: 0x1870
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iLane"
    // static metadata: MNetworkVarNames "QAngle m_angTargeting1"
    // static metadata: MNetworkVarNames "QAngle m_angTargeting2"
    // static metadata: MNetworkVarNames "int m_nElectricBeamCasts"
    // static metadata: MNetworkVarNames "ETier3State_t m_eAliveState"
    // static metadata: MNetworkVarNames "ETier3Phase_t m_ePhase"
    #pragma pack(push, 1)
    class CNPC_Boss_Tier3 : public server::CAI_CitadelNPC
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iLane; // 0x17b8        
        [[maybe_unused]] std::uint8_t pad_0x17bc[0x30]; // 0x17bc
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        QAngle m_angTargeting1; // 0x17ec        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        QAngle m_angTargeting2; // 0x17f8        
        // metadata: MNetworkEnable
        int32_t m_nElectricBeamCasts; // 0x1804        
        [[maybe_unused]] std::uint8_t pad_0x1808[0x20]; // 0x1808
        entity2::CEntityIOOutput m_eventOnBossKilled; // 0x1828        
        CUtlSymbolLarge m_backdoorProtectionTrigger; // 0x1850        
        [[maybe_unused]] std::uint8_t pad_0x1858[0x4]; // 0x1858
        // metadata: MNetworkEnable
        client::ETier3State_t m_eAliveState; // 0x185c        
        [[maybe_unused]] std::uint8_t pad_0x1860[0x4]; // 0x1860
        // metadata: MNetworkEnable
        client::ETier3Phase_t m_ePhase; // 0x1864        
        [[maybe_unused]] std::uint8_t pad_0x1868[0x8];
        
        // Static fields:
        static client::ConditionId_t &Get_COND_T3BOSS_CAN_ELECTRIC_BEAM() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[0]->m_pInstance);};
        static client::ConditionId_t &Get_COND_T3BOSS_OVER_CORE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[1]->m_pInstance);};
        static client::ConditionId_t &Get_COND_T3BOSS_HEALTH_PHASE_1() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[2]->m_pInstance);};
        static client::ConditionId_t &Get_COND_T3BOSS_HEALTH_PHASE_2() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[3]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T3BOSS_STAND_STILL() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[4]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T3BOSS_IDLE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[5]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T3BOSS_ATTACK_WITH_ELECTRIC_BEAM() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[6]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T3BOSS_ATTACK_WITH_ELECTRIC_BEAM_QUICK() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[7]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T3BOSS_RETURN_TO_HOME_POSITION() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[8]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T3BOSS_FALL_BACK_TO_CORE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[9]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T3BOSS_MOVE_TO_RANDOM_POSITION() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[10]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T3BOSS_MOVE_TO_LARGEST_ENEMY_GROUP() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[11]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T3BOSS_FACE_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[12]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T3BOSS_ELECTRIC_BEAM_SELECT() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[13]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T3BOSS_ELECTRIC_BEAM_FIRING() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[14]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_DYING_POSITION() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[15]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T3BOSS_WAIT_AT_DYING_POSITION() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[16]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_VULNERABLE_POSITION() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[17]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T3BOSS_ARRIVE_AT_VULNERABLE_POSITION() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[18]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_HOME_POSITION() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[19]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_RANDOM_POSITION() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[20]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T3BOSS_MOVE_TO_LARGEST_ENEMY_GROUP() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier3")->GetStaticFields()[21]->m_pInstance);};
        
        // Datamap fields:
        // void m_vecStartingPosition; // 0x17c8
        // int32_t m_nDyingEndCoverPointID; // 0x17d8
        // int32_t m_nVulnerableCoverPointID; // 0x17dc
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier3 because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier3) == 0x1870);
};
