#pragma once
#include "source2sdk/client/ConditionId_t.hpp"
#include "source2sdk/server/CAI_BaseNPC.hpp"
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/CCitadelRegenComponent.hpp"
#include "source2sdk/server/WeakPoint_t.hpp"
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
    class CCitadelBaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1730
    // Has VTable
    // Is Abstract
    // 
    // static metadata: MNetworkIncludeByName "m_iMaxHealth"
    // static metadata: MNetworkIncludeByName "m_iHealth"
    // static metadata: MNetworkIncludeByName "m_iTeam"
    // static metadata: MNetworkIncludeByName "m_vecViewOffset"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_flEncodedController"
    // static metadata: MNetworkExcludeByName "m_flPoseParameter"
    // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
    // static metadata: MNetworkVarNames "CCitadelRegenComponent::Storage_t m_CCitadelRegenComponent"
    // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
    // static metadata: MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
    // static metadata: MNetworkVarNames "bool m_bMinion"
    // static metadata: MNetworkVarNames "EHANDLE m_hLookTarget"
    // static metadata: MNetworkVarNames "bool m_bBeamActive"
    // static metadata: MNetworkVarNames "Vector m_vEyeBeamTarget"
    #pragma pack(push, 1)
    class CAI_CitadelNPC : public server::CAI_BaseNPC
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x11d8[0x18]; // 0x11d8
        Vector m_vLastGroundEntityCheckPos; // 0x11f0        
        [[maybe_unused]] std::uint8_t pad_0x11fc[0x4]; // 0x11fc
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
        // metadata: MNetworkAlias "CCitadelAbilityComponent"
        // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
        server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0x1200        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelRegenComponent"
        // metadata: MNetworkAlias "CCitadelRegenComponent"
        // metadata: MNetworkTypeAlias "CCitadelRegenComponent"
        server::CCitadelRegenComponent m_CCitadelRegenComponent; // 0x1408        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
        // metadata: MNetworkAlias "CCitadelMinimapComponent"
        // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
        server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x1588        
        [[maybe_unused]] std::uint8_t pad_0x15a0[0x4]; // 0x15a0
        int32_t m_iBaseGoldReward; // 0x15a4        
        int32_t m_iSkillShotReward; // 0x15a8        
        [[maybe_unused]] std::uint8_t pad_0x15ac[0x30]; // 0x15ac
        // m_hAbilityOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hAbilityOwner;
        char m_hAbilityOwner[0x4]; // 0x15dc        
        [[maybe_unused]] std::uint8_t pad_0x15e0[0x48]; // 0x15e0
        // metadata: MNetworkEnable
        // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::WeakPoint_t> m_vecWeakPoints;
        char m_vecWeakPoints[0x50]; // 0x1628        
        // metadata: MNetworkEnable
        bool m_bMinion; // 0x1678        
        [[maybe_unused]] std::uint8_t pad_0x1679[0x3]; // 0x1679
        // metadata: MNetworkEnable
        // m_hLookTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLookTarget;
        char m_hLookTarget[0x4]; // 0x167c        
        [[maybe_unused]] std::uint8_t pad_0x1680[0x10]; // 0x1680
        int32_t m_iCoverGroupID; // 0x1690        
        [[maybe_unused]] std::uint8_t pad_0x1694[0x5c]; // 0x1694
        Vector m_vecSpawnOrigin; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x18]; // 0x16fc
        // metadata: MNetworkEnable
        bool m_bBeamActive; // 0x1714        
        [[maybe_unused]] std::uint8_t pad_0x1715[0x3]; // 0x1715
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "coord"
        Vector m_vEyeBeamTarget; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1724[0xc];
        
        // Static fields:
        static client::ConditionId_t &Get_COND_RECEIVED_AGGRO() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[0]->m_pInstance);};
        static client::ConditionId_t &Get_COND_STUNNED() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[1]->m_pInstance);};
        static client::ConditionId_t &Get_COND_FORCED_AGGRO() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[2]->m_pInstance);};
        static client::ConditionId_t &Get_COND_FORCED_CALM() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[3]->m_pInstance);};
        static client::ConditionId_t &Get_COND_IMMOBILIZED() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[4]->m_pInstance);};
        static client::ConditionId_t &Get_COND_DISARMED() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[5]->m_pInstance);};
        static client::ConditionId_t &Get_COND_CAN_MELEE_ATTACK() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[6]->m_pInstance);};
        static client::ConditionId_t &Get_COND_CAN_MELEE_ATTACK_CLOSE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[7]->m_pInstance);};
        static client::ConditionId_t &Get_COND_CAN_RANGE_ATTACK() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[8]->m_pInstance);};
        static client::ConditionId_t &Get_COND_RANGE_ATTACK_LOS_BLOCKED() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[9]->m_pInstance);};
        static client::ConditionId_t &Get_COND_RANGE_ATTACK_TOO_CLOSE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[10]->m_pInstance);};
        static client::ConditionId_t &Get_COND_RANGE_ATTACK_TOO_FAR() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[11]->m_pInstance);};
        static client::ConditionId_t &Get_COND_TAKEN_DAMAGE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[12]->m_pInstance);};
        static client::ConditionId_t &Get_COND_TAKEN_FLINCH_DAMAGE() {return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[13]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_WAIT_RANDOM() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[14]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_NO_OP() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[15]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_WAIT_STUNNED() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[16]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_PUSH_AWAY_FROM_BLOCKING_NPC() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[17]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_RUN_TEST_PATH() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[18]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_RUN_TEST_PATH_TO_COVER_POINT() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[19]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_MOVE_TO_MELEE_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[20]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_MOVE_TO_SHOOT_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[21]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_MOVE_TO_OWNER_AGRO() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[22]->m_pInstance);};
        static CUtlSymbolLarge &Get_SCHED_MOVE_TO_OWNER() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[23]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_TURN_TOWARD_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[24]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_GET_PATH_TO_SPAWN() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[25]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_PUSH_AWAY_FROM_BLOCKING_NPC() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[26]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_GET_PATH_ADVANCE_ON_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[27]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_GET_PATH_TO_MELEE_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[28]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_GET_TEST_PATH() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[29]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_GET_TEST_PATH_TO_COVER_POINT() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[30]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_FIND_PATH_TO_COVER() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[31]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_GET_PATH_FORWARD() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[32]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_GET_PATH_TO_NAV_MESH() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[33]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_RELOAD() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[34]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_CROUCH() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[35]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_STAND() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[36]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_WAIT_FACE_ENEMY() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[37]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BUILD_PATH_TO_OWNER() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[38]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_MELEE_ATTACK() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[39]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_BEAM_ATTACK() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[40]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_SLEEP() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[41]->m_pInstance);};
        static CUtlSymbolLarge &Get_TASK_WAIT_FOR_GROUND_MOVEMENT() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_CitadelNPC")->GetStaticFields()[42]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_CitadelNPC because it is not a standard-layout class
    static_assert(sizeof(CAI_CitadelNPC) == 0x1730);
};
