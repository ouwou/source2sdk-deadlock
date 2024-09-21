#pragma once
#include "source2sdk/client/CAI_ScheduleBits.hpp"
#include "source2sdk/client/CRandStopwatch.hpp"
#include "source2sdk/client/CSimpleSimTimer.hpp"
#include "source2sdk/client/CTakeDamageResult.hpp"
#include "source2sdk/client/HitGroup_t.hpp"
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
    // Size: 0x10b0
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
        [[maybe_unused]] std::uint8_t pad_0xac8[0x10]; // 0xac8
        bool m_bCheckContacts; // 0xad8        
        bool m_bIsUsingSmallHull; // 0xad9        
        [[maybe_unused]] std::uint8_t pad_0xada[0x2]; // 0xada
        Vector m_vecLastPosition; // 0xadc        
        float m_flLastPositionTolerance; // 0xae8        
        // m_hSynchronizedPrimaryNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CAI_BaseNPC> m_hSynchronizedPrimaryNPC;
        char m_hSynchronizedPrimaryNPC[0x4]; // 0xaec        
        // m_vecSynchronizedSecondaryNPCs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CAI_BaseNPC>> m_vecSynchronizedSecondaryNPCs;
        char m_vecSynchronizedSecondaryNPCs[0x18]; // 0xaf0        
        // metadata: MNetworkEnable
        client::NPC_STATE m_NPCState; // 0xb08        
        client::NPC_STATE m_nPreModifierNPCState; // 0xb0c        
        client::NPC_STATE m_IdealNPCState; // 0xb10        
        entity2::GameTime_t m_flLastStateChangeTime; // 0xb14        
        [[maybe_unused]] std::uint8_t pad_0xb18[0x8]; // 0xb18
        client::CAI_ScheduleBits m_Conditions; // 0xb20        
        client::CAI_ScheduleBits m_NonGatherConditions; // 0xb44        
        client::CAI_ScheduleBits m_CustomInterruptConditions; // 0xb68        
        bool m_bForceConditionsGather; // 0xb8c        
        bool m_bConditionsGathered; // 0xb8d        
        bool m_bDoPostRestoreRefindPath; // 0xb8e        
        [[maybe_unused]] std::uint8_t pad_0xb8f[0x1]; // 0xb8f
        server::CAI_BehaviorHost* m_pBehaviorHost; // 0xb90        
        [[maybe_unused]] std::uint8_t pad_0xb98[0x8]; // 0xb98
        entity2::GameTime_t m_flBlinkTime; // 0xba0        
        [[maybe_unused]] std::uint8_t pad_0xba4[0x4]; // 0xba4
        server::CAI_EnemyServices* m_pEnemyServices; // 0xba8        
        client::CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xbb0        
        client::CSimpleSimTimer m_FailChooseEnemyTimer; // 0xbc4        
        entity2::GameTime_t m_flAcceptableTimeSeenEnemy; // 0xbcc        
        bool m_bSkippedChooseEnemy; // 0xbd0        
        bool m_bIgnoreUnseenEnemies; // 0xbd1        
        [[maybe_unused]] std::uint8_t pad_0xbd2[0x2]; // 0xbd2
        // m_hEnemyFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hEnemyFilter;
        char m_hEnemyFilter[0x4]; // 0xbd4        
        CUtlSymbolLarge m_iszEnemyFilterName; // 0xbd8        
        // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEnt;
        char m_hTargetEnt[0x4]; // 0xbe0        
        bool m_bClearTargetOnScheduleEnd; // 0xbe4        
        [[maybe_unused]] std::uint8_t pad_0xbe5[0x3]; // 0xbe5
        entity2::GameTime_t m_flSoundWaitTime; // 0xbe8        
        int32_t m_nSoundPriority; // 0xbec        
        bool m_bSuppressFootsteps; // 0xbf0        
        [[maybe_unused]] std::uint8_t pad_0xbf1[0x3]; // 0xbf1
        int32_t m_afCapability; // 0xbf4        
        // metadata: MNetworkDisable
        float m_flGroundSpeed; // 0xbf8        
        entity2::GameTime_t m_flMoveWaitFinished; // 0xbfc        
        // m_hOpeningDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOpeningDoor;
        char m_hOpeningDoor[0x4]; // 0xc00        
        [[maybe_unused]] std::uint8_t pad_0xc04[0x4]; // 0xc04
        server::CUnreachableTargetList m_UnreachableTargets; // 0xc08        
        // m_hPathObstructor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPathObstructor;
        char m_hPathObstructor[0x4]; // 0xc28        
        float m_flJumpMaxRise; // 0xc2c        
        float m_flJumpMaxDrop; // 0xc30        
        float m_flJumpMaxDist; // 0xc34        
        float m_flJumpMinDist; // 0xc38        
        [[maybe_unused]] std::uint8_t pad_0xc3c[0x4]; // 0xc3c
        server::CAI_AnimGraphServices* m_pAnimGraphServices; // 0xc40        
        bool m_bAnimGraphIsAnimatingDeath; // 0xc48        
        bool m_bDeferredNavigation; // 0xc49        
        [[maybe_unused]] std::uint8_t pad_0xc4a[0x6]; // 0xc4a
        server::CAI_Scheduler m_Scheduler; // 0xc50        
        server::CAI_Navigator* m_pNavigatorNavmesh; // 0xcf8        
        [[maybe_unused]] std::uint8_t pad_0xd00[0x18]; // 0xd00
        server::CAI_Motor* m_pMotor; // 0xd18        
        entity2::GameTime_t m_flTimeLastMovement; // 0xd20        
        entity2::GameTime_t m_flTimeLastFootstep; // 0xd24        
        client::CSimpleSimTimer m_CheckOnGroundTimer; // 0xd28        
        CUtlSymbolLarge m_strNavRestrictionVolume; // 0xd30        
        Vector m_vDefaultEyeOffset; // 0xd38        
        int32_t m_afMemory; // 0xd44        
        entity2::GameTime_t m_flLastAttackTime; // 0xd48        
        entity2::GameTime_t m_flLastTookDamageTime; // 0xd4c        
        entity2::GameTime_t m_flLastTookDamageFromPlayerTime; // 0xd50        
        Vector m_vecLastTookDamageAttackVector; // 0xd54        
        CUtlSymbolLarge m_iszSquadName; // 0xd60        
        // m_vecMySquadSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SquadSlotNPCEntry_t> m_vecMySquadSlots;
        char m_vecMySquadSlots[0x18]; // 0xd68        
        [[maybe_unused]] std::uint8_t pad_0xd80[0x8]; // 0xd80
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0xd88        
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0xd8c        
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0xd90        
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0xd94        
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0xd98        
        int32_t m_nLastHitDestructiblePartIndex; // 0xd9c        
        int32_t m_nPrevHealthDuringModifyDamage; // 0xda0        
        // metadata: MNetworkEnable
        bool m_bFadeCorpse; // 0xda4        
        // metadata: MNetworkEnable
        bool m_bImportantRagdoll; // 0xda5        
        [[maybe_unused]] std::uint8_t pad_0xda6[0x2]; // 0xda6
        client::CTakeDamageResult m_deathBlowResult; // 0xda8        
        bool m_bDidDeathCleanup; // 0xdc0        
        bool m_bReceivedEnemyDeadNotification; // 0xdc1        
        [[maybe_unused]] std::uint8_t pad_0xdc2[0x2]; // 0xdc2
        entity2::GameTime_t m_flWaitFinished; // 0xdc4        
        bool m_fNoDamageDecal; // 0xdc8        
        [[maybe_unused]] std::uint8_t pad_0xdc9[0x7]; // 0xdc9
        // m_pVecAttachments has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>>* m_pVecAttachments;
        char m_pVecAttachments[0x8]; // 0xdd0        
        entity2::CEntityIOOutput m_OnDamaged; // 0xdd8        
        entity2::CEntityIOOutput m_OnDeath; // 0xe00        
        entity2::CEntityIOOutput m_OnQuarterHealth; // 0xe28        
        entity2::CEntityIOOutput m_OnHalfHealth; // 0xe50        
        entity2::CEntityIOOutput m_OnThreeQuarterHealth; // 0xe78        
        // m_OnFoundEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnFoundEnemy;
        char m_OnFoundEnemy[0x28]; // 0xea0        
        entity2::CEntityIOOutput m_OnLostEnemy; // 0xec8        
        entity2::CEntityIOOutput m_OnLostPlayer; // 0xef0        
        entity2::CEntityIOOutput m_OnDamagedByPlayer; // 0xf18        
        entity2::CEntityIOOutput m_OnDamagedByPlayerSquad; // 0xf40        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0xf68        
        entity2::CEntityIOOutput m_OnUse; // 0xf90        
        entity2::CEntityIOOutput m_OnStartTouchMaterial; // 0xfb8        
        entity2::CEntityIOOutput m_OnEndTouchMaterial; // 0xfe0        
        entity2::CEntityIOOutput m_OnLostEnemyLOS; // 0x1008        
        entity2::CEntityIOOutput m_OnLostPlayerLOS; // 0x1030        
        uint64_t m_nAITraceMask; // 0x1058        
        float m_flThinkTime; // 0x1060        
        [[maybe_unused]] std::uint8_t pad_0x1064[0x44]; // 0x1064
        int32_t m_nDebugCurIndex; // 0x10a8        
        // start of bitfield block at 0x10ac
        uint16_t m_bInvokingBehaviorIsValidEnemy: 1;
        uint16_t m_bInvokingBehaviorBestEnemy: 1;
        uint16_t m_bInvokingBehaviorShouldIgnoreSound: 1;
        uint16_t m_bInvokingBehaviorIsInterruptable: 1;
        uint16_t m_bInvokingBehaviorOnTakeDamage_React_Alive: 1;
        uint16_t m_bInvokingBehaviorQueryHearSound: 1;
        uint16_t m_bInvokingBehaviorOnCalcBaseMove: 1;
        uint16_t m_bInvokingBehaviorShouldAlwaysGatherEnvironmentalConditions: 1;
        uint16_t m_bInvokingBehaviorAimGun: 1;
        // end of bitfield block // 9 bits
        [[maybe_unused]] std::uint8_t pad_0x10ae[0x2];
        
        // Static fields:
        static CUtlSymbolLarge &Get_sm_iszPlayerSquad() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_sm_nDebugBits() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[1]->m_pInstance);};
        static int32_t &Get_sm_nDebugPauseIndex() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[2]->m_pInstance);};
        
        // Datamap fields:
        // CAI_Senses m_pSenses; // 0xb18
        // void m_pSquad; // 0xd80
        // void m_vecTaskThinkTimes; // 0x1068
        // CAI_Pathfinder m_pPathfinderNavmesh; // 0xd00
        // void m_DestructiblePartsRuntimeDataByHitGroup; // 0x1080
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
    static_assert(sizeof(CAI_BaseNPC) == 0x10b0);
};
