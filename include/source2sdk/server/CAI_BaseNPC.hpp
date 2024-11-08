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
    // Size: 0x1280
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
        [[maybe_unused]] std::uint8_t pad_0xb60[0x10]; // 0xb60
        bool m_bCheckContacts; // 0xb70        
        bool m_bIsUsingSmallHull; // 0xb71        
        bool m_bForceDynamicHull; // 0xb72        
        [[maybe_unused]] std::uint8_t pad_0xb73[0x1]; // 0xb73
        Vector m_vecLastPosition; // 0xb74        
        float m_flLastPositionTolerance; // 0xb80        
        // m_hSynchronizedPrimaryNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CAI_BaseNPC> m_hSynchronizedPrimaryNPC;
        char m_hSynchronizedPrimaryNPC[0x4]; // 0xb84        
        // m_vecSynchronizedSecondaryNPCs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CAI_BaseNPC>> m_vecSynchronizedSecondaryNPCs;
        char m_vecSynchronizedSecondaryNPCs[0x18]; // 0xb88        
        // metadata: MNetworkEnable
        client::NPC_STATE m_NPCState; // 0xba0        
        client::NPC_STATE m_nPreModifierNPCState; // 0xba4        
        client::NPC_STATE m_IdealNPCState; // 0xba8        
        entity2::GameTime_t m_flLastStateChangeTime; // 0xbac        
        [[maybe_unused]] std::uint8_t pad_0xbb0[0x8]; // 0xbb0
        client::CAI_ScheduleBits m_Conditions; // 0xbb8        
        client::CAI_ScheduleBits m_NonGatherConditions; // 0xbdc        
        client::CAI_ScheduleBits m_CustomInterruptConditions; // 0xc00        
        bool m_bForceConditionsGather; // 0xc24        
        bool m_bConditionsGathered; // 0xc25        
        bool m_bDoPostRestoreRefindPath; // 0xc26        
        [[maybe_unused]] std::uint8_t pad_0xc27[0x1]; // 0xc27
        server::CAI_BehaviorHost* m_pBehaviorHost; // 0xc28        
        [[maybe_unused]] std::uint8_t pad_0xc30[0x8]; // 0xc30
        entity2::GameTime_t m_flBlinkTime; // 0xc38        
        [[maybe_unused]] std::uint8_t pad_0xc3c[0x4]; // 0xc3c
        server::CAI_EnemyServices* m_pEnemyServices; // 0xc40        
        client::CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xc48        
        client::CSimpleSimTimer m_FailChooseEnemyTimer; // 0xc5c        
        entity2::GameTime_t m_flAcceptableTimeSeenEnemy; // 0xc64        
        bool m_bSkippedChooseEnemy; // 0xc68        
        bool m_bIgnoreUnseenEnemies; // 0xc69        
        [[maybe_unused]] std::uint8_t pad_0xc6a[0x2]; // 0xc6a
        // m_hEnemyFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hEnemyFilter;
        char m_hEnemyFilter[0x4]; // 0xc6c        
        CUtlSymbolLarge m_iszEnemyFilterName; // 0xc70        
        // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEnt;
        char m_hTargetEnt[0x4]; // 0xc78        
        bool m_bClearTargetOnScheduleEnd; // 0xc7c        
        [[maybe_unused]] std::uint8_t pad_0xc7d[0x3]; // 0xc7d
        entity2::GameTime_t m_flSoundWaitTime; // 0xc80        
        int32_t m_nSoundPriority; // 0xc84        
        bool m_bSuppressFootsteps; // 0xc88        
        [[maybe_unused]] std::uint8_t pad_0xc89[0x3]; // 0xc89
        int32_t m_afCapability; // 0xc8c        
        [[maybe_unused]] std::uint8_t pad_0xc90[0x170]; // 0xc90
        float m_flGroundSpeed; // 0xe00        
        entity2::GameTime_t m_flMoveWaitFinished; // 0xe04        
        // m_hOpeningDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOpeningDoor;
        char m_hOpeningDoor[0x4]; // 0xe08        
        [[maybe_unused]] std::uint8_t pad_0xe0c[0x4]; // 0xe0c
        server::CUnreachableTargetList m_UnreachableTargets; // 0xe10        
        // m_hPathObstructor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPathObstructor;
        char m_hPathObstructor[0x4]; // 0xe30        
        float m_flJumpMaxRise; // 0xe34        
        float m_flJumpMaxDrop; // 0xe38        
        float m_flJumpMaxDist; // 0xe3c        
        float m_flJumpMinDist; // 0xe40        
        [[maybe_unused]] std::uint8_t pad_0xe44[0x4]; // 0xe44
        server::CAI_AnimGraphServices* m_pAnimGraphServices; // 0xe48        
        bool m_bAnimGraphIsAnimatingDeath; // 0xe50        
        bool m_bDeferredNavigation; // 0xe51        
        [[maybe_unused]] std::uint8_t pad_0xe52[0x6]; // 0xe52
        server::CAI_Scheduler m_Scheduler; // 0xe58        
        server::CAI_Navigator* m_pNavigatorNavmesh; // 0xf00        
        [[maybe_unused]] std::uint8_t pad_0xf08[0x18]; // 0xf08
        server::CAI_Motor* m_pMotor; // 0xf20        
        entity2::GameTime_t m_flTimeLastMovement; // 0xf28        
        entity2::GameTime_t m_flTimeLastFootstep; // 0xf2c        
        client::CSimpleSimTimer m_CheckOnGroundTimer; // 0xf30        
        CUtlSymbolLarge m_strNavRestrictionVolume; // 0xf38        
        Vector m_vDefaultEyeOffset; // 0xf40        
        int32_t m_afMemory; // 0xf4c        
        entity2::GameTime_t m_flLastAttackTime; // 0xf50        
        entity2::GameTime_t m_flLastTookDamageTime; // 0xf54        
        entity2::GameTime_t m_flLastTookDamageFromPlayerTime; // 0xf58        
        Vector m_vecLastTookDamageAttackVector; // 0xf5c        
        CUtlSymbolLarge m_iszSquadName; // 0xf68        
        // m_vecMySquadSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SquadSlotNPCEntry_t> m_vecMySquadSlots;
        char m_vecMySquadSlots[0x18]; // 0xf70        
        [[maybe_unused]] std::uint8_t pad_0xf88[0x8]; // 0xf88
        int32_t m_nPrevHealthDuringModifyDamage; // 0xf90        
        // metadata: MNetworkEnable
        bool m_bFadeCorpse; // 0xf94        
        // metadata: MNetworkEnable
        bool m_bImportantRagdoll; // 0xf95        
        [[maybe_unused]] std::uint8_t pad_0xf96[0x2]; // 0xf96
        client::CTakeDamageResult m_deathBlowResult; // 0xf98        
        bool m_bDidDeathCleanup; // 0xfb8        
        bool m_bReceivedEnemyDeadNotification; // 0xfb9        
        [[maybe_unused]] std::uint8_t pad_0xfba[0x2]; // 0xfba
        entity2::GameTime_t m_flWaitFinished; // 0xfbc        
        bool m_fNoDamageDecal; // 0xfc0        
        [[maybe_unused]] std::uint8_t pad_0xfc1[0x7]; // 0xfc1
        // m_pVecAttachments has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>>* m_pVecAttachments;
        char m_pVecAttachments[0x8]; // 0xfc8        
        entity2::CEntityIOOutput m_OnDamaged; // 0xfd0        
        entity2::CEntityIOOutput m_OnDeath; // 0xff8        
        entity2::CEntityIOOutput m_OnQuarterHealth; // 0x1020        
        entity2::CEntityIOOutput m_OnHalfHealth; // 0x1048        
        entity2::CEntityIOOutput m_OnThreeQuarterHealth; // 0x1070        
        // m_OnFoundEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnFoundEnemy;
        char m_OnFoundEnemy[0x28]; // 0x1098        
        entity2::CEntityIOOutput m_OnLostEnemy; // 0x10c0        
        entity2::CEntityIOOutput m_OnLostPlayer; // 0x10e8        
        entity2::CEntityIOOutput m_OnDamagedByPlayer; // 0x1110        
        entity2::CEntityIOOutput m_OnDamagedByPlayerSquad; // 0x1138        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0x1160        
        entity2::CEntityIOOutput m_OnUse; // 0x1188        
        entity2::CEntityIOOutput m_OnStartTouchMaterial; // 0x11b0        
        entity2::CEntityIOOutput m_OnEndTouchMaterial; // 0x11d8        
        entity2::CEntityIOOutput m_OnLostEnemyLOS; // 0x1200        
        entity2::CEntityIOOutput m_OnLostPlayerLOS; // 0x1228        
        uint64_t m_nAITraceMask; // 0x1250        
        float m_flThinkTime; // 0x1258        
        [[maybe_unused]] std::uint8_t pad_0x125c[0x1c]; // 0x125c
        int32_t m_nDebugCurIndex; // 0x1278        
        [[maybe_unused]] std::uint8_t pad_0x127c[0x4];
        
        // Static fields:
        static CUtlSymbolLarge &Get_sm_iszPlayerSquad() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_sm_nDebugBits() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[1]->m_pInstance);};
        static int32_t &Get_sm_nDebugPauseIndex() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[2]->m_pInstance);};
        
        // Datamap fields:
        // CAI_Senses m_pSenses; // 0xbb0
        // void m_pSquad; // 0xf88
        // void CAI_BaseNPCForceSelectedGoLoopThink; // 0x0
        // void m_vecTaskThinkTimes; // 0x1260
        // CAI_Pathfinder m_pPathfinderNavmesh; // 0xf08
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
    static_assert(sizeof(CAI_BaseNPC) == 0x1280);
};
