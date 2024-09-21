#pragma once
#include "source2sdk/client/ConditionId_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelPlayerClipComponent.hpp"
#include "source2sdk/server/CNPC_Trooper.hpp"
#include "source2sdk/server/LaneSide_t.hpp"
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
    // Size: 0x1930
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
    // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
    #pragma pack(push, 1)
    class CNPC_TrooperBoss : public server::CNPC_Trooper
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1708[0x8]; // 0x1708
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelPlayerClipComponent"
        // metadata: MNetworkAlias "CCitadelPlayerClipComponent"
        // metadata: MNetworkTypeAlias "CCitadelPlayerClipComponent"
        server::CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1730[0x8]; // 0x1730
        server::LaneSide_t m_LaneSide; // 0x1738        
        [[maybe_unused]] std::uint8_t pad_0x1739[0x1df]; // 0x1739
        CUtlSymbolLarge m_backdoorProtectionTrigger; // 0x1918        
        [[maybe_unused]] std::uint8_t pad_0x1920[0x4]; // 0x1920
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFadeOutStart; // 0x1924        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flFadeOutEnd; // 0x1928        
        [[maybe_unused]] std::uint8_t pad_0x192c[0x4];
        
        // Static fields:
        static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_RANGE_ATTACK() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[0]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_RETURN_TO_SPAWN() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[1]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_SHIELD_STANCE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[2]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_COMBAT_STANCE() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[3]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_CHARGE_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[4]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_TROOPERBOSS_RAISE_SHIELD() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[5]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_TROOPERBOSS_LOWER_SHIELD() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[6]->m_pInstance);};
        static client::ConditionId_t &Get_COND_TROOPERBOSS_SHIELD_ACTIVE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[7]->m_pInstance);};
        static client::ConditionId_t &Get_COND_TROOPERBOSS_ENEMY_IN_CHARGE_RANGE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[8]->m_pInstance);};
        static client::ConditionId_t &Get_COND_TROOPERBOSS_ENEMY_OUT_OF_CHARGE_RANGE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[9]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNPC_TrooperBoss because it is not a standard-layout class
    static_assert(sizeof(CNPC_TrooperBoss) == 0x1930);
};
