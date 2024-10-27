#pragma once
#include "source2sdk/client/CAI_ScheduleBits.hpp"
#include "source2sdk/client/CRandStopwatch.hpp"
#include "source2sdk/client/CSimpleSimTimer.hpp"
#include "source2sdk/client/CTakeDamageResult.hpp"
#include "source2sdk/client/NPC_STATE.hpp"
#include "source2sdk/client/SquadSlotNPCEntry_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAI_Scheduler.hpp"
#include "source2sdk/server/CBaseCombatCharacter.hpp"
#include "source2sdk/server/CUnreachableTargetList.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CAI_AnimGraphServices;
};

namespace source2sdk::server
{
    class CAI_BehaviorHost;
};

namespace source2sdk::server
{
    class CAI_EnemyServices;
};

namespace source2sdk::server
{
    class CAI_Motor;
};

namespace source2sdk::server
{
    class CAI_Navigator;
};

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CBaseFilter;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1260
    // Has VTable
    // 
    // static metadata: MNetworkIncludeByName "m_lifeState"
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "NPC_STATE m_NPCState"
    // static metadata: MNetworkVarNames "bool m_bFadeCorpse"
    // static metadata: MNetworkVarNames "bool m_bImportantRagdoll"
    #pragma pack(push, 1)
    class CAI_BaseNPC : public server::CBaseCombatCharacter
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xb40[0x10]; // 0xb40
        bool m_bCheckContacts; // 0xb50        
        bool m_bIsUsingSmallHull; // 0xb51        
        bool m_bForceDynamicHull; // 0xb52        
        [[maybe_unused]] std::uint8_t pad_0xb53[0x1]; // 0xb53
        Vector m_vecLastPosition; // 0xb54        
        float m_flLastPositionTolerance; // 0xb60        
        // m_hSynchronizedPrimaryNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CAI_BaseNPC> m_hSynchronizedPrimaryNPC;
        char m_hSynchronizedPrimaryNPC[0x4]; // 0xb64        
        // m_vecSynchronizedSecondaryNPCs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CAI_BaseNPC>> m_vecSynchronizedSecondaryNPCs;
        char m_vecSynchronizedSecondaryNPCs[0x18]; // 0xb68        
        // metadata: MNetworkEnable
        client::NPC_STATE m_NPCState; // 0xb80        
        client::NPC_STATE m_nPreModifierNPCState; // 0xb84        
        client::NPC_STATE m_IdealNPCState; // 0xb88        
        entity2::GameTime_t m_flLastStateChangeTime; // 0xb8c        
        [[maybe_unused]] std::uint8_t pad_0xb90[0x8]; // 0xb90
        client::CAI_ScheduleBits m_Conditions; // 0xb98        
        client::CAI_ScheduleBits m_NonGatherConditions; // 0xbbc        
        client::CAI_ScheduleBits m_CustomInterruptConditions; // 0xbe0        
        bool m_bForceConditionsGather; // 0xc04        
        bool m_bConditionsGathered; // 0xc05        
        bool m_bDoPostRestoreRefindPath; // 0xc06        
        [[maybe_unused]] std::uint8_t pad_0xc07[0x1]; // 0xc07
        server::CAI_BehaviorHost* m_pBehaviorHost; // 0xc08        
        [[maybe_unused]] std::uint8_t pad_0xc10[0x8]; // 0xc10
        entity2::GameTime_t m_flBlinkTime; // 0xc18        
        [[maybe_unused]] std::uint8_t pad_0xc1c[0x4]; // 0xc1c
        server::CAI_EnemyServices* m_pEnemyServices; // 0xc20        
        client::CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xc28        
        client::CSimpleSimTimer m_FailChooseEnemyTimer; // 0xc3c        
        entity2::GameTime_t m_flAcceptableTimeSeenEnemy; // 0xc44        
        bool m_bSkippedChooseEnemy; // 0xc48        
        bool m_bIgnoreUnseenEnemies; // 0xc49        
        [[maybe_unused]] std::uint8_t pad_0xc4a[0x2]; // 0xc4a
        // m_hEnemyFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hEnemyFilter;
        char m_hEnemyFilter[0x4]; // 0xc4c        
        CUtlSymbolLarge m_iszEnemyFilterName; // 0xc50        
        // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEnt;
        char m_hTargetEnt[0x4]; // 0xc58        
        bool m_bClearTargetOnScheduleEnd; // 0xc5c        
        [[maybe_unused]] std::uint8_t pad_0xc5d[0x3]; // 0xc5d
        entity2::GameTime_t m_flSoundWaitTime; // 0xc60        
        int32_t m_nSoundPriority; // 0xc64        
        bool m_bSuppressFootsteps; // 0xc68        
        [[maybe_unused]] std::uint8_t pad_0xc69[0x3]; // 0xc69
        int32_t m_afCapability; // 0xc6c        
        [[maybe_unused]] std::uint8_t pad_0xc70[0x170]; // 0xc70
        // metadata: MNetworkDisable
        float m_flGroundSpeed; // 0xde0        
        entity2::GameTime_t m_flMoveWaitFinished; // 0xde4        
        // m_hOpeningDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOpeningDoor;
        char m_hOpeningDoor[0x4]; // 0xde8        
        [[maybe_unused]] std::uint8_t pad_0xdec[0x4]; // 0xdec
        server::CUnreachableTargetList m_UnreachableTargets; // 0xdf0        
        // m_hPathObstructor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPathObstructor;
        char m_hPathObstructor[0x4]; // 0xe10        
        float m_flJumpMaxRise; // 0xe14        
        float m_flJumpMaxDrop; // 0xe18        
        float m_flJumpMaxDist; // 0xe1c        
        float m_flJumpMinDist; // 0xe20        
        [[maybe_unused]] std::uint8_t pad_0xe24[0x4]; // 0xe24
        server::CAI_AnimGraphServices* m_pAnimGraphServices; // 0xe28        
        bool m_bAnimGraphIsAnimatingDeath; // 0xe30        
        bool m_bDeferredNavigation; // 0xe31        
        [[maybe_unused]] std::uint8_t pad_0xe32[0x6]; // 0xe32
        server::CAI_Scheduler m_Scheduler; // 0xe38        
        server::CAI_Navigator* m_pNavigatorNavmesh; // 0xee0        
        [[maybe_unused]] std::uint8_t pad_0xee8[0x18]; // 0xee8
        server::CAI_Motor* m_pMotor; // 0xf00        
        entity2::GameTime_t m_flTimeLastMovement; // 0xf08        
        entity2::GameTime_t m_flTimeLastFootstep; // 0xf0c        
        client::CSimpleSimTimer m_CheckOnGroundTimer; // 0xf10        
        CUtlSymbolLarge m_strNavRestrictionVolume; // 0xf18        
        Vector m_vDefaultEyeOffset; // 0xf20        
        int32_t m_afMemory; // 0xf2c        
        entity2::GameTime_t m_flLastAttackTime; // 0xf30        
        entity2::GameTime_t m_flLastTookDamageTime; // 0xf34        
        entity2::GameTime_t m_flLastTookDamageFromPlayerTime; // 0xf38        
        Vector m_vecLastTookDamageAttackVector; // 0xf3c        
        CUtlSymbolLarge m_iszSquadName; // 0xf48        
        // m_vecMySquadSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SquadSlotNPCEntry_t> m_vecMySquadSlots;
        char m_vecMySquadSlots[0x18]; // 0xf50        
        [[maybe_unused]] std::uint8_t pad_0xf68[0x8]; // 0xf68
        int32_t m_nPrevHealthDuringModifyDamage; // 0xf70        
        // metadata: MNetworkEnable
        bool m_bFadeCorpse; // 0xf74        
        // metadata: MNetworkEnable
        bool m_bImportantRagdoll; // 0xf75        
        [[maybe_unused]] std::uint8_t pad_0xf76[0x2]; // 0xf76
        client::CTakeDamageResult m_deathBlowResult; // 0xf78        
        bool m_bDidDeathCleanup; // 0xf98        
        bool m_bReceivedEnemyDeadNotification; // 0xf99        
        [[maybe_unused]] std::uint8_t pad_0xf9a[0x2]; // 0xf9a
        entity2::GameTime_t m_flWaitFinished; // 0xf9c        
        bool m_fNoDamageDecal; // 0xfa0        
        [[maybe_unused]] std::uint8_t pad_0xfa1[0x7]; // 0xfa1
        // m_pVecAttachments has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>>* m_pVecAttachments;
        char m_pVecAttachments[0x8]; // 0xfa8        
        entity2::CEntityIOOutput m_OnDamaged; // 0xfb0        
        entity2::CEntityIOOutput m_OnDeath; // 0xfd8        
        entity2::CEntityIOOutput m_OnQuarterHealth; // 0x1000        
        entity2::CEntityIOOutput m_OnHalfHealth; // 0x1028        
        entity2::CEntityIOOutput m_OnThreeQuarterHealth; // 0x1050        
        // m_OnFoundEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnFoundEnemy;
        char m_OnFoundEnemy[0x28]; // 0x1078        
        entity2::CEntityIOOutput m_OnLostEnemy; // 0x10a0        
        entity2::CEntityIOOutput m_OnLostPlayer; // 0x10c8        
        entity2::CEntityIOOutput m_OnDamagedByPlayer; // 0x10f0        
        entity2::CEntityIOOutput m_OnDamagedByPlayerSquad; // 0x1118        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0x1140        
        entity2::CEntityIOOutput m_OnUse; // 0x1168        
        entity2::CEntityIOOutput m_OnStartTouchMaterial; // 0x1190        
        entity2::CEntityIOOutput m_OnEndTouchMaterial; // 0x11b8        
        entity2::CEntityIOOutput m_OnLostEnemyLOS; // 0x11e0        
        entity2::CEntityIOOutput m_OnLostPlayerLOS; // 0x1208        
        uint64_t m_nAITraceMask; // 0x1230        
        float m_flThinkTime; // 0x1238        
        [[maybe_unused]] std::uint8_t pad_0x123c[0x1c]; // 0x123c
        int32_t m_nDebugCurIndex; // 0x1258        
        [[maybe_unused]] std::uint8_t pad_0x125c[0x4];
        
        // Static fields:
        static CUtlSymbolLarge &Get_sm_iszPlayerSquad() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_sm_nDebugBits() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[1]->m_pInstance);};
        static int32_t &Get_sm_nDebugPauseIndex() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[2]->m_pInstance);};
        
        // Datamap fields:
        // CAI_Senses m_pSenses; // 0xb90
        // void m_pSquad; // 0xf68
        // void CAI_BaseNPCForceSelectedGoLoopThink; // 0x0
        // void m_vecTaskThinkTimes; // 0x1240
        // CAI_Pathfinder m_pPathfinderNavmesh; // 0xee8
        // CUtlSymbolLarge InputSetEnemyFilter; // 0x0
        // int32_t InputOverrideHealth; // 0x0
        // int32_t InputSetHealth; // 0x0
        // CUtlSymbolLarge InputSetSquad; // 0x0
        // CUtlSymbolLarge InputForgetEntity; // 0x0
        // void InputBreak; // 0x0
        // void InputGagEnable; // 0x0
        // void InputGagDisable; // 0x0
        // void InputInsideTransition; // 0x0
        // void InputOutsideTransition; // 0x0
        // CUtlSymbolLarge InputUpdateEnemyMemory; // 0x0
        // CUtlSymbolLarge InputSetNavRestrictionVolume; // 0x0
        // void CAI_BaseNPCCallNPCThink; // 0x0
        // void CAI_BaseNPCCallNPCPerTickThink; // 0x0
        // void CAI_BaseNPCBlinkThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_BaseNPC because it is not a standard-layout class
    static_assert(sizeof(CAI_BaseNPC) == 0x1260);
};
