#pragma once
#include "source2sdk/client/CAI_BaseNPC_DestructiblePartRuntimeData.hpp"
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
    // Size: 0x1078
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
        [[maybe_unused]] std::uint8_t pad_0xac0[0x10]; // 0xac0
        bool m_bCheckContacts; // 0xad0        
        bool m_bIsUsingSmallHull; // 0xad1        
        [[maybe_unused]] std::uint8_t pad_0xad2[0x2]; // 0xad2
        Vector m_vecLastPosition; // 0xad4        
        float m_flLastPositionTolerance; // 0xae0        
        // m_hSynchronizedPrimaryNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CAI_BaseNPC> m_hSynchronizedPrimaryNPC;
        char m_hSynchronizedPrimaryNPC[0x4]; // 0xae4        
        // m_vecSynchronizedSecondaryNPCs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CAI_BaseNPC>> m_vecSynchronizedSecondaryNPCs;
        char m_vecSynchronizedSecondaryNPCs[0x18]; // 0xae8        
        // metadata: MNetworkEnable
        client::NPC_STATE m_NPCState; // 0xb00        
        client::NPC_STATE m_nPreModifierNPCState; // 0xb04        
        client::NPC_STATE m_IdealNPCState; // 0xb08        
        entity2::GameTime_t m_flLastStateChangeTime; // 0xb0c        
        [[maybe_unused]] std::uint8_t pad_0xb10[0x8]; // 0xb10
        client::CAI_ScheduleBits m_Conditions; // 0xb18        
        client::CAI_ScheduleBits m_NonGatherConditions; // 0xb3c        
        client::CAI_ScheduleBits m_CustomInterruptConditions; // 0xb60        
        bool m_bForceConditionsGather; // 0xb84        
        bool m_bConditionsGathered; // 0xb85        
        bool m_bDoPostRestoreRefindPath; // 0xb86        
        [[maybe_unused]] std::uint8_t pad_0xb87[0x1]; // 0xb87
        server::CAI_BehaviorHost* m_pBehaviorHost; // 0xb88        
        [[maybe_unused]] std::uint8_t pad_0xb90[0x8]; // 0xb90
        server::CAI_EnemyServices* m_pEnemyServices; // 0xb98        
        client::CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xba0        
        client::CSimpleSimTimer m_FailChooseEnemyTimer; // 0xbb4        
        entity2::GameTime_t m_flAcceptableTimeSeenEnemy; // 0xbbc        
        bool m_bSkippedChooseEnemy; // 0xbc0        
        bool m_bIgnoreUnseenEnemies; // 0xbc1        
        [[maybe_unused]] std::uint8_t pad_0xbc2[0x2]; // 0xbc2
        // m_hEnemyFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hEnemyFilter;
        char m_hEnemyFilter[0x4]; // 0xbc4        
        CUtlSymbolLarge m_iszEnemyFilterName; // 0xbc8        
        // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEnt;
        char m_hTargetEnt[0x4]; // 0xbd0        
        bool m_bClearTargetOnScheduleEnd; // 0xbd4        
        [[maybe_unused]] std::uint8_t pad_0xbd5[0x3]; // 0xbd5
        entity2::GameTime_t m_flSoundWaitTime; // 0xbd8        
        int32_t m_nSoundPriority; // 0xbdc        
        bool m_bSuppressFootsteps; // 0xbe0        
        [[maybe_unused]] std::uint8_t pad_0xbe1[0x3]; // 0xbe1
        int32_t m_afCapability; // 0xbe4        
        // metadata: MNetworkDisable
        float m_flGroundSpeed; // 0xbe8        
        entity2::GameTime_t m_flMoveWaitFinished; // 0xbec        
        // m_hOpeningDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOpeningDoor;
        char m_hOpeningDoor[0x4]; // 0xbf0        
        [[maybe_unused]] std::uint8_t pad_0xbf4[0x4]; // 0xbf4
        server::CUnreachableTargetList m_UnreachableTargets; // 0xbf8        
        // m_hPathObstructor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPathObstructor;
        char m_hPathObstructor[0x4]; // 0xc18        
        float m_flJumpMaxRise; // 0xc1c        
        float m_flJumpMaxDrop; // 0xc20        
        float m_flJumpMaxDist; // 0xc24        
        float m_flJumpMinDist; // 0xc28        
        [[maybe_unused]] std::uint8_t pad_0xc2c[0x4]; // 0xc2c
        server::CAI_AnimGraphServices* m_pAnimGraphServices; // 0xc30        
        bool m_bAnimGraphIsAnimatingDeath; // 0xc38        
        bool m_bDeferredNavigation; // 0xc39        
        [[maybe_unused]] std::uint8_t pad_0xc3a[0x6]; // 0xc3a
        server::CAI_Scheduler m_Scheduler; // 0xc40        
        server::CAI_Navigator* m_pNavigatorNavmesh; // 0xce8        
        [[maybe_unused]] std::uint8_t pad_0xcf0[0x18]; // 0xcf0
        server::CAI_Motor* m_pMotor; // 0xd08        
        entity2::GameTime_t m_flTimeLastMovement; // 0xd10        
        entity2::GameTime_t m_flTimeLastFootstep; // 0xd14        
        client::CSimpleSimTimer m_CheckOnGroundTimer; // 0xd18        
        CUtlSymbolLarge m_strNavRestrictionVolume; // 0xd20        
        Vector m_vDefaultEyeOffset; // 0xd28        
        int32_t m_afMemory; // 0xd34        
        entity2::GameTime_t m_flLastAttackTime; // 0xd38        
        entity2::GameTime_t m_flLastTookDamageTime; // 0xd3c        
        entity2::GameTime_t m_flLastTookDamageFromPlayerTime; // 0xd40        
        Vector m_vecLastTookDamageAttackVector; // 0xd44        
        [[maybe_unused]] std::uint8_t pad_0xd50[0x8]; // 0xd50
        CUtlSymbolLarge m_iszSquadName; // 0xd58        
        // m_vecMySquadSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SquadSlotNPCEntry_t> m_vecMySquadSlots;
        char m_vecMySquadSlots[0x18]; // 0xd60        
        int32_t m_nPrevHealthDuringModifyDamage; // 0xd78        
        // metadata: MNetworkEnable
        bool m_bFadeCorpse; // 0xd7c        
        // metadata: MNetworkEnable
        bool m_bImportantRagdoll; // 0xd7d        
        [[maybe_unused]] std::uint8_t pad_0xd7e[0x2]; // 0xd7e
        client::CTakeDamageResult m_deathBlowResult; // 0xd80        
        bool m_bDidDeathCleanup; // 0xd98        
        bool m_bReceivedEnemyDeadNotification; // 0xd99        
        [[maybe_unused]] std::uint8_t pad_0xd9a[0x2]; // 0xd9a
        entity2::GameTime_t m_flWaitFinished; // 0xd9c        
        bool m_fNoDamageDecal; // 0xda0        
        [[maybe_unused]] std::uint8_t pad_0xda1[0x7]; // 0xda1
        // m_pVecAttachments has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>>* m_pVecAttachments;
        char m_pVecAttachments[0x8]; // 0xda8        
        entity2::CEntityIOOutput m_OnDamaged; // 0xdb0        
        entity2::CEntityIOOutput m_OnDeath; // 0xdd8        
        entity2::CEntityIOOutput m_OnQuarterHealth; // 0xe00        
        entity2::CEntityIOOutput m_OnHalfHealth; // 0xe28        
        entity2::CEntityIOOutput m_OnThreeQuarterHealth; // 0xe50        
        // m_OnFoundEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnFoundEnemy;
        char m_OnFoundEnemy[0x28]; // 0xe78        
        entity2::CEntityIOOutput m_OnLostEnemy; // 0xea0        
        entity2::CEntityIOOutput m_OnLostPlayer; // 0xec8        
        entity2::CEntityIOOutput m_OnDamagedByPlayer; // 0xef0        
        entity2::CEntityIOOutput m_OnDamagedByPlayerSquad; // 0xf18        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0xf40        
        entity2::CEntityIOOutput m_OnUse; // 0xf68        
        entity2::CEntityIOOutput m_OnStartTouchMaterial; // 0xf90        
        entity2::CEntityIOOutput m_OnEndTouchMaterial; // 0xfb8        
        entity2::CEntityIOOutput m_OnLostEnemyLOS; // 0xfe0        
        entity2::CEntityIOOutput m_OnLostPlayerLOS; // 0x1008        
        uint64_t m_nAITraceMask; // 0x1030        
        float m_flThinkTime; // 0x1038        
        [[maybe_unused]] std::uint8_t pad_0x103c[0x1c]; // 0x103c
        // m_DestructiblePartsRuntimeDataByVDataIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CAI_BaseNPC_DestructiblePartRuntimeData> m_DestructiblePartsRuntimeDataByVDataIndex;
        char m_DestructiblePartsRuntimeDataByVDataIndex[0x18]; // 0x1058        
        int32_t m_nDebugCurIndex; // 0x1070        
        // start of bitfield block at 0x1074
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
        [[maybe_unused]] std::uint8_t pad_0x1076[0x2];
        
        // Static fields:
        static CUtlSymbolLarge &Get_sm_iszPlayerSquad() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_sm_nDebugBits() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[1]->m_pInstance);};
        static int32_t &Get_sm_nDebugPauseIndex() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[2]->m_pInstance);};
        
        // Datamap fields:
        // CAI_Senses m_pSenses; // 0xb10
        // void m_pSquad; // 0xd50
        // void m_vecTaskThinkTimes; // 0x1040
        // CAI_Pathfinder m_pPathfinderNavmesh; // 0xcf0
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
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAI_BaseNPC because it is not a standard-layout class
    
    static_assert(sizeof(CAI_BaseNPC) == 0x1078);
};
