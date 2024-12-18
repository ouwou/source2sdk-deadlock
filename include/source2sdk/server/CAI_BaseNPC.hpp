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
    // Size: 0x1278
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
        [[maybe_unused]] std::uint8_t pad_0xb50[0x10]; // 0xb50
        bool m_bCheckContacts; // 0xb60        
        bool m_bIsUsingSmallHull; // 0xb61        
        bool m_bForceDynamicHull; // 0xb62        
        [[maybe_unused]] std::uint8_t pad_0xb63[0x1]; // 0xb63
        Vector m_vecLastPosition; // 0xb64        
        float m_flLastPositionTolerance; // 0xb70        
        // m_hSynchronizedPrimaryNPC has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CAI_BaseNPC> m_hSynchronizedPrimaryNPC;
        char m_hSynchronizedPrimaryNPC[0x4]; // 0xb74        
        // m_vecSynchronizedSecondaryNPCs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CAI_BaseNPC>> m_vecSynchronizedSecondaryNPCs;
        char m_vecSynchronizedSecondaryNPCs[0x18]; // 0xb78        
        // metadata: MNetworkEnable
        client::NPC_STATE m_NPCState; // 0xb90        
        client::NPC_STATE m_nPreModifierNPCState; // 0xb94        
        client::NPC_STATE m_IdealNPCState; // 0xb98        
        entity2::GameTime_t m_flLastStateChangeTime; // 0xb9c        
        [[maybe_unused]] std::uint8_t pad_0xba0[0x8]; // 0xba0
        client::CAI_ScheduleBits m_Conditions; // 0xba8        
        client::CAI_ScheduleBits m_NonGatherConditions; // 0xbcc        
        client::CAI_ScheduleBits m_CustomInterruptConditions; // 0xbf0        
        bool m_bForceConditionsGather; // 0xc14        
        bool m_bConditionsGathered; // 0xc15        
        bool m_bDoPostRestoreRefindPath; // 0xc16        
        [[maybe_unused]] std::uint8_t pad_0xc17[0x1]; // 0xc17
        server::CAI_BehaviorHost* m_pBehaviorHost; // 0xc18        
        [[maybe_unused]] std::uint8_t pad_0xc20[0x8]; // 0xc20
        entity2::GameTime_t m_flBlinkTime; // 0xc28        
        [[maybe_unused]] std::uint8_t pad_0xc2c[0x4]; // 0xc2c
        server::CAI_EnemyServices* m_pEnemyServices; // 0xc30        
        client::CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xc38        
        client::CSimpleSimTimer m_FailChooseEnemyTimer; // 0xc4c        
        entity2::GameTime_t m_flAcceptableTimeSeenEnemy; // 0xc54        
        bool m_bSkippedChooseEnemy; // 0xc58        
        bool m_bIgnoreUnseenEnemies; // 0xc59        
        [[maybe_unused]] std::uint8_t pad_0xc5a[0x2]; // 0xc5a
        // m_hEnemyFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hEnemyFilter;
        char m_hEnemyFilter[0x4]; // 0xc5c        
        CUtlSymbolLarge m_iszEnemyFilterName; // 0xc60        
        // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEnt;
        char m_hTargetEnt[0x4]; // 0xc68        
        bool m_bClearTargetOnScheduleEnd; // 0xc6c        
        [[maybe_unused]] std::uint8_t pad_0xc6d[0x3]; // 0xc6d
        entity2::GameTime_t m_flSoundWaitTime; // 0xc70        
        int32_t m_nSoundPriority; // 0xc74        
        bool m_bSuppressFootsteps; // 0xc78        
        [[maybe_unused]] std::uint8_t pad_0xc79[0x3]; // 0xc79
        int32_t m_afCapability; // 0xc7c        
        [[maybe_unused]] std::uint8_t pad_0xc80[0x170]; // 0xc80
        float m_flGroundSpeed; // 0xdf0        
        entity2::GameTime_t m_flMoveWaitFinished; // 0xdf4        
        // m_hOpeningDoor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOpeningDoor;
        char m_hOpeningDoor[0x4]; // 0xdf8        
        [[maybe_unused]] std::uint8_t pad_0xdfc[0x4]; // 0xdfc
        server::CUnreachableTargetList m_UnreachableTargets; // 0xe00        
        // m_hPathObstructor has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPathObstructor;
        char m_hPathObstructor[0x4]; // 0xe20        
        float m_flJumpMaxRise; // 0xe24        
        float m_flJumpMaxDrop; // 0xe28        
        float m_flJumpMaxDist; // 0xe2c        
        float m_flJumpMinDist; // 0xe30        
        [[maybe_unused]] std::uint8_t pad_0xe34[0x4]; // 0xe34
        server::CAI_AnimGraphServices* m_pAnimGraphServices; // 0xe38        
        bool m_bAnimGraphIsAnimatingDeath; // 0xe40        
        bool m_bDeferredNavigation; // 0xe41        
        [[maybe_unused]] std::uint8_t pad_0xe42[0x6]; // 0xe42
        server::CAI_Scheduler m_Scheduler; // 0xe48        
        server::CAI_Navigator* m_pNavigatorNavmesh; // 0xef0        
        [[maybe_unused]] std::uint8_t pad_0xef8[0x18]; // 0xef8
        server::CAI_Motor* m_pMotor; // 0xf10        
        entity2::GameTime_t m_flTimeLastMovement; // 0xf18        
        entity2::GameTime_t m_flTimeLastFootstep; // 0xf1c        
        client::CSimpleSimTimer m_CheckOnGroundTimer; // 0xf20        
        CUtlSymbolLarge m_strNavRestrictionVolume; // 0xf28        
        Vector m_vDefaultEyeOffset; // 0xf30        
        int32_t m_afMemory; // 0xf3c        
        entity2::GameTime_t m_flLastAttackTime; // 0xf40        
        entity2::GameTime_t m_flLastTookDamageTime; // 0xf44        
        entity2::GameTime_t m_flLastTookDamageFromPlayerTime; // 0xf48        
        Vector m_vecLastTookDamageAttackVector; // 0xf4c        
        CUtlSymbolLarge m_iszSquadName; // 0xf58        
        // m_vecMySquadSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::SquadSlotNPCEntry_t> m_vecMySquadSlots;
        char m_vecMySquadSlots[0x18]; // 0xf60        
        [[maybe_unused]] std::uint8_t pad_0xf78[0x8]; // 0xf78
        int32_t m_nPrevHealthDuringModifyDamage; // 0xf80        
        [[maybe_unused]] std::uint8_t pad_0xf84[0x4]; // 0xf84
        // metadata: MNetworkEnable
        bool m_bFadeCorpse; // 0xf88        
        // metadata: MNetworkEnable
        bool m_bImportantRagdoll; // 0xf89        
        [[maybe_unused]] std::uint8_t pad_0xf8a[0x6]; // 0xf8a
        client::CTakeDamageResult m_deathBlowResult; // 0xf90        
        bool m_bDidDeathCleanup; // 0xfb0        
        bool m_bReceivedEnemyDeadNotification; // 0xfb1        
        [[maybe_unused]] std::uint8_t pad_0xfb2[0x2]; // 0xfb2
        entity2::GameTime_t m_flWaitFinished; // 0xfb4        
        bool m_fNoDamageDecal; // 0xfb8        
        [[maybe_unused]] std::uint8_t pad_0xfb9[0x7]; // 0xfb9
        // m_pVecAttachments has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>>* m_pVecAttachments;
        char m_pVecAttachments[0x8]; // 0xfc0        
        entity2::CEntityIOOutput m_OnDamaged; // 0xfc8        
        entity2::CEntityIOOutput m_OnDeath; // 0xff0        
        entity2::CEntityIOOutput m_OnQuarterHealth; // 0x1018        
        entity2::CEntityIOOutput m_OnHalfHealth; // 0x1040        
        entity2::CEntityIOOutput m_OnThreeQuarterHealth; // 0x1068        
        // m_OnFoundEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnFoundEnemy;
        char m_OnFoundEnemy[0x28]; // 0x1090        
        entity2::CEntityIOOutput m_OnLostEnemy; // 0x10b8        
        entity2::CEntityIOOutput m_OnLostPlayer; // 0x10e0        
        entity2::CEntityIOOutput m_OnDamagedByPlayer; // 0x1108        
        entity2::CEntityIOOutput m_OnDamagedByPlayerSquad; // 0x1130        
        entity2::CEntityIOOutput m_OnPlayerUse; // 0x1158        
        entity2::CEntityIOOutput m_OnUse; // 0x1180        
        entity2::CEntityIOOutput m_OnStartTouchMaterial; // 0x11a8        
        entity2::CEntityIOOutput m_OnEndTouchMaterial; // 0x11d0        
        entity2::CEntityIOOutput m_OnLostEnemyLOS; // 0x11f8        
        entity2::CEntityIOOutput m_OnLostPlayerLOS; // 0x1220        
        uint64_t m_nAITraceMask; // 0x1248        
        float m_flThinkTime; // 0x1250        
        [[maybe_unused]] std::uint8_t pad_0x1254[0x1c]; // 0x1254
        int32_t m_nDebugCurIndex; // 0x1270        
        [[maybe_unused]] std::uint8_t pad_0x1274[0x4];
        
        // Static fields:
        static CUtlSymbolLarge &Get_sm_iszPlayerSquad() {return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[0]->m_pInstance);};
        static int32_t &Get_sm_nDebugBits() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[1]->m_pInstance);};
        static int32_t &Get_sm_nDebugPauseIndex() {return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[2]->m_pInstance);};
        
        // Datamap fields:
        // CAI_Senses m_pSenses; // 0xba0
        // void m_pSquad; // 0xf78
        // void CAI_BaseNPCForceSelectedGoLoopThink; // 0x0
        // void m_vecTaskThinkTimes; // 0x1258
        // CAI_Pathfinder m_pPathfinderNavmesh; // 0xef8
        // void m_hDamagedFX; // 0xf84
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
    static_assert(sizeof(CAI_BaseNPC) == 0x1278);
};
