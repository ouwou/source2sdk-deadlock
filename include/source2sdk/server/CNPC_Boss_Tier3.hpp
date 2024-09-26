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
    // Size: 0x17e8
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
        int32_t m_iLane; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1734[0x30]; // 0x1734
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        QAngle m_angTargeting1; // 0x1764        
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle"
        QAngle m_angTargeting2; // 0x1770        
        // metadata: MNetworkEnable
        int32_t m_nElectricBeamCasts; // 0x177c        
        [[maybe_unused]] std::uint8_t pad_0x1780[0x20]; // 0x1780
        entity2::CEntityIOOutput m_eventOnBossKilled; // 0x17a0        
        CUtlSymbolLarge m_backdoorProtectionTrigger; // 0x17c8        
        [[maybe_unused]] std::uint8_t pad_0x17d0[0x4]; // 0x17d0
        // metadata: MNetworkEnable
        client::ETier3State_t m_eAliveState; // 0x17d4        
        [[maybe_unused]] std::uint8_t pad_0x17d8[0x4]; // 0x17d8
        // metadata: MNetworkEnable
        client::ETier3Phase_t m_ePhase; // 0x17dc        
        [[maybe_unused]] std::uint8_t pad_0x17e0[0x8];
        
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
        // void m_vecStartingPosition; // 0x1740
        // int32_t m_nDyingEndCoverPointID; // 0x1750
        // int32_t m_nVulnerableCoverPointID; // 0x1754
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier3 because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier3) == 0x17e8);
};
