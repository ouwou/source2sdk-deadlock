#pragma once
#include "source2sdk/client/ConditionId_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x16f8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_iLane"
    // static metadata: MNetworkVarNames "EHANDLE m_hTargetedEnemy"
    // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
    // static metadata: MNetworkVarNames "Vector m_vecElectricBeamLookTarget"
    // static metadata: MNetworkVarNames "int m_nElectricBeamCasts"
    #pragma pack(push, 1)
    class CNPC_Boss_Tier2 : public server::CAI_CitadelNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1608[0x8]; // 0x1608
        Vector m_vecStartingPosition; // 0x1610        
        // metadata: MNetworkEnable
        int32_t m_iLane; // 0x161c        
        [[maybe_unused]] std::uint8_t pad_0x1620[0x8]; // 0x1620
        // metadata: MNetworkEnable
        // m_hTargetedEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetedEnemy;
        char m_hTargetedEnemy[0x4]; // 0x1628        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFadeOutStart; // 0x162c        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFadeOutEnd; // 0x1630        
        [[maybe_unused]] std::uint8_t pad_0x1634[0x24]; // 0x1634
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vecElectricBeamLookTarget; // 0x1658        
        // metadata: MNetworkEnable
        int32_t m_nElectricBeamCasts; // 0x1664        
        [[maybe_unused]] std::uint8_t pad_0x1668[0x28]; // 0x1668
        entity2::CEntityIOOutput m_eventOnBossKilled; // 0x1690        
        [[maybe_unused]] std::uint8_t pad_0x16b8[0x40];
        
        // Static fields:
        static client::ConditionId_t &Get_COND_STAGGERED() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[0]->m_pInstance);};
        static client::ConditionId_t &Get_COND_T2BOSS_ELECTRIC_BEAM_ATTACK_AVAILABLE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[1]->m_pInstance);};
        static client::ConditionId_t &Get_COND_T2BOSS_ELECTRIC_BEAM_TARGET_LOST() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[2]->m_pInstance);};
        static client::ConditionId_t &Get_COND_T2BOSS_ROCKET_BARRAGE_ATTACK_AVAILABLE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[3]->m_pInstance);};
        static client::ConditionId_t &Get_COND_T2BOSS_STOMP_ATTACK_AVAILABLE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[4]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T2BOSS_STAND_STILL() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[5]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T2BOSS_IDLE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[6]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T2BOSS_WANDER() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[7]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T2BOSS_STUNNED() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[8]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T2BOSS_STAGGERED() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[9]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T2BOSS_MOVE_TO_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[10]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T2BOSS_ATTACK_WITH_GUN_STANDING() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[11]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T2BOSS_ATTACK_WITH_GUN_ROAMING() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[12]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T2BOSS_ATTACK_WITH_GUN_ADVANCING() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[13]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T2BOSS_ATTACK_WITH_ROCKET_BARRAGE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[14]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T2BOSS_ATTACK_WITH_ELECTRIC_BEAM() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[15]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_T2BOSS_ATTACK_WITH_STOMP() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[16]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_MOVE_TO_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[17]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_WANDER_BASE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[18]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_STUNNED() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[19]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_STAGGERED() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[20]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_GUN_SELECT() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[21]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_GUN_FIRE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[22]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_GUN_WALK_AND_FIRE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[23]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_ROCKET_BARRAGE_SELECT() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[24]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_ROCKET_BARRAGE_ACTIVATE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[25]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_ROCKET_BARRAGE_FIRING() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[26]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_ELECTRIC_BEAM_SELECT() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[27]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_ELECTRIC_BEAM_ACTIVATE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[28]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_ELECTRIC_BEAM_FIRING() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[29]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_ELECTRIC_BEAM_WALK_AND_FIRE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[30]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_T2BOSS_STOMP_ACTIVATE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Boss_Tier2")->GetStaticFields()[31]->m_pInstance);};
        
        // Datamap fields:
        // CUtlSymbolLarge m_strBossEntityName; // 0x16c0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_Boss_Tier2 because it is not a standard-layout class
    static_assert(sizeof(CNPC_Boss_Tier2) == 0x16f8);
};
