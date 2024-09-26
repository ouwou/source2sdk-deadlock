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
    // Size: 0x11d8
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
        [[maybe_unused]] std::uint8_t pad_0xad0[0x10]; // 0xad0
        bool m_bCheckContacts; // 0xae0        
        bool m_bIsUsingSmallHull; // 0xae1        
        [[maybe_unused]] std::uint8_t pad_0xae2[0x2]; // 0xae2
        Vector m_vecLastPosition; // 0xae4        
        float m_flLastPositionTolerance; // 0xaf0        
        // m_hSynchronizedPrimaryNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CAI_BaseNPC> m_hSynchronizedPrimaryNPC;
        char m_hSynchronizedPrimaryNPC[0x4]; // 0xaf4        
        // m_vecSynchronizedSecondaryNPCs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CAI_BaseNPC>> m_vecSynchronizedSecondaryNPCs;
        char m_vecSynchronizedSecondaryNPCs[0x18]; // 0xaf8        
        // metadata: MNetworkEnable
        client::NPC_STATE m_NPCState; // 0xb10        
        client::NPC_STATE m_nPreModifierNPCState; // 0xb14        
        client::NPC_STATE m_IdealNPCState; // 0xb18        
        entity2::GameTime_t m_flLastStateChangeTime; // 0xb1c        
        [[maybe_unused]] std::uint8_t pad_0xb20[0x8]; // 0xb20
        client::CAI_ScheduleBits m_Conditions; // 0xb28        
        client::CAI_ScheduleBits m_NonGatherConditions; // 0xb4c        
        client::CAI_ScheduleBits m_CustomInterruptConditions; // 0xb70        
        bool m_bForceConditionsGather; // 0xb94        
        bool m_bConditionsGathered; // 0xb95        
        bool m_bDoPostRestoreRefindPath; // 0xb96        
        [[maybe_unused]] std::uint8_t pad_0xb97[0x1]; // 0xb97
        server::CAI_BehaviorHost* m_pBehaviorHost; // 0xb98        
        [[maybe_unused]] std::uint8_t pad_0xba0[0x8]; // 0xba0
        entity2::GameTime_t m_flBlinkTime; // 0xba8        
        [[maybe_unused]] std::uint8_t pad_0xbac[0x4]; // 0xbac
        server::CAI_EnemyServices* m_pEnemyServices; // 0xbb0        
        client::CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xbb8        
        client::CSimpleSimTimer m_FailChooseEnemyTimer; // 0xbcc        
        entity2::GameTime_t m_flAcceptableTimeSeenEnemy; // 0xbd4        
        bool m_bSkippedChooseEnemy; // 0xbd8        
        bool m_bIgnoreUnseenEnemies; // 0xbd9        
        [[maybe_unused]] std::uint8_t pad_0xbda[0x2]; // 0xbda
        // m_hEnemyFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hEnemyFilter;
        char m_hEnemyFilter[0x4]; // 0xbdc        
        CUtlSymbolLarge m_iszEnemyFilterName; // 0xbe0        
        // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEnt;
        char m_hTargetEnt[0x4]; // 0xbe8        
        bool m_bClearTargetOnScheduleEnd; // 0xbec        
        [[maybe_unused]] std::uint8_t pad_0xbed[0x3]; // 0xbed
        entity2::GameTime_t m_flSoundWaitTime; // 0xbf0        
        int32_t m_nSoundPriority; // 0xbf4        
        bool m_bSuppressFootsteps; // 0xbf8        
        [[maybe_unused]] std::uint8_t pad_0xbf9[0x3]; // 0xbf9
        int32_t m_afCapability; // 0xbfc        
        [[maybe_unused]] std::uint8_t pad_0xc00[0x110]; // 0xc00
        // metadata: MNetworkDisable
        float m_flGroundSpeed; // 0xd10        
        entity2::GameTime_t m_flMoveWaitFinished; // 0xd14        
        // m_hOpeningDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOpeningDoor;
        char m_hOpeningDoor[0x4]; // 0xd18        
        [[maybe_unused]] std::uint8_t pad_0xd1c[0x4]; // 0xd1c
        server::CUnreachableTargetList m_UnreachableTargets; // 0xd20        
        // m_hPathObstructor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPathObstructor;
        char m_hPathObstructor[0x4]; // 0xd40        
        float m_flJumpMaxRise; // 0xd44        
        float m_flJumpMaxDrop; // 0xd48        
        float m_flJumpMaxDist; // 0xd4c        
        float m_flJumpMinDist; // 0xd50        
        [[maybe_unused]] std::uint8_t pad_0xd54[0x4]; // 0xd54
        server::CAI_AnimGraphServices* m_pAnimGraphServices; // 0xd58        
        bool m_bAnimGraphIsAnimatingDeath; // 0xd60        
        bool m_bDeferredNavigation; // 0xd61        
        [[maybe_unused]] std::uint8_t pad_0xd62[0x6]; // 0xd62
        server::CAI_Scheduler m_Scheduler; // 0xd68        
        server::CAI_Navigator* m_pNavigatorNavmesh; // 0xe10        
        [[maybe_unused]] std::uint8_t pad_0xe18[0x18]; // 0xe18
        server::CAI_Motor* m_pMotor; // 0xe30        
        entity2::GameTime_t m_flTimeLastMovement; // 0xe38        
        entity2::GameTime_t m_flTimeLastFootstep; // 0xe3c        
        client::CSimpleSimTimer m_CheckOnGroundTimer; // 0xe40        
        CUtlSymbolLarge m_strNavRestrictionVolume; // 0xe48        
        Vector m_vDefaultEyeOffset; // 0xe50        
        int32_t m_afMemory; // 0xe5c        
        entity2::GameTime_t m_flLastAttackTime; // 0xe60        
        entity2::GameTime_t m_flLastTookDamageTime; // 0xe64        
        entity2::GameTime_t m_flLastTookDamageFromPlayerTime; // 0xe68        
        Vector m_vecLastTookDamageAttackVector; // 0xe6c        
        CUtlSymbolLarge m_iszSquadName; // 0xe78        
        // m_vecMySquadSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SquadSlotNPCEntry_t> m_vecMySquadSlots;
        char m_vecMySquadSlots[0x18]; // 0xe80        
        [[maybe_unused]] std::uint8_t pad_0xe98[0x8]; // 0xe98
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed0; // 0xea0        
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed1; // 0xea4        
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed2; // 0xea8        
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed3; // 0xeac        
        client::HitGroup_t m_nDestructiblePartInitialStateDestructed4; // 0xeb0        
        int32_t m_nLastHitDestructiblePartIndex; // 0xeb4        
        int32_t m_nPrevHealthDuringModifyDamage; // 0xeb8        
        // metadata: MNetworkEnable
        bool m_bFadeCorpse; // 0xebc        
        // metadata: MNetworkEnable
        bool m_bImportantRagdoll; // 0xebd        
        [[maybe_unused]] std::uint8_t pad_0xebe[0x2]; // 0xebe
        client::CTakeDamageResult m_deathBlowResult; // 0xec0        
        bool m_bDidDeathCleanup; // 0xee0        
        bool m_bReceivedEnemyDeadNotification; // 0xee1        
        [[maybe_unused]] std::uint8_t pad_0xee2[0x2]; // 0xee2
        entity2::GameTime_t m_flWaitFinished; // 0xee4        
        bool m_fNoDamageDecal; // 0xee8        
        [[maybe_unused]] std::uint8_t pad_0xee9[0x7]; // 0xee9
        // m_pVecAttachments has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>>* m_pVecAttachments;
        char m_pVecAttachments[0x8]; // 0xef0        
        entity2::CEntityIOOutput m_OnDamaged; // 0xef8        
        entity2::CEntityIOOutput m_OnDeath; // 0xf20        
        entity2::CEntityIOOutput m_OnQuarterHealth; // 0xf48        
        entity2::CEntityIOOutput m_OnHalfHealth; // 0xf70        
        entity2::CEntityIOOutput m_OnThreeQuarterHealth; // 0xf98        
        // m_OnFoundEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnFoundEnemy;
        char m_OnFoundEnemy[0x28]; // 0xfc0        
        entity2::CEntityIOOutput m_OnLostEnemy; // 0xfe8        
        entity2::CEntityIOOutput m_OnLostPlayer; // 0x1010        
        entity2::CEntityIOOutput m_OnDamagedByPlayer; // 0x1038        
        entity2::CEntityIOOutput m_OnDamagedByPlayerSquad; // 0x1060        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0x1088        
        entity2::CEntityIOOutput m_OnUse; // 0x10b0        
        entity2::CEntityIOOutput m_OnStartTouchMaterial; // 0x10d8        
        entity2::CEntityIOOutput m_OnEndTouchMaterial; // 0x1100        
        entity2::CEntityIOOutput m_OnLostEnemyLOS; // 0x1128        
        entity2::CEntityIOOutput m_OnLostPlayerLOS; // 0x1150        
        uint64_t m_nAITraceMask; // 0x1178        
        float m_flThinkTime; // 0x1180        
        [[maybe_unused]] std::uint8_t pad_0x1184[0x44]; // 0x1184
        int32_t m_nDebugCurIndex; // 0x11c8        
        // start of bitfield block at 0x11cc
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
        [[maybe_unused]] std::uint8_t pad_0x11ce[0x2]; // 0x11ce
        int32_t m_nLastDestructiblePartDestroyedAnimgraphSetTick; // 0x11d0        
        [[maybe_unused]] std::uint8_t pad_0x11d4[0x4];
        
        // Static fields:
        static CUtlSymbolLarge &Get_sm_iszPlayerSquad() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_sm_nDebugBits() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[1]->m_pInstance);};
        static int32_t &Get_sm_nDebugPauseIndex() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[2]->m_pInstance);};
        
        // Datamap fields:
        // CAI_Senses m_pSenses; // 0xb20
        // void m_pSquad; // 0xe98
        // void m_vecTaskThinkTimes; // 0x1188
        // CAI_Pathfinder m_pPathfinderNavmesh; // 0xe18
        // void m_DestructiblePartsRuntimeDataByHitGroup; // 0x11a0
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
    static_assert(sizeof(CAI_BaseNPC) == 0x11d8);
};
