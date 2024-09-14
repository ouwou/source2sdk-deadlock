#pragma once
#include "source2sdk/client/ScriptedHeldWeaponBehavior_t.hpp"
#include "source2sdk/client/ScriptedMoveTo_t.hpp"
#include "source2sdk/client/ScriptedOnDeath_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/modellib/MovementGait_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/ScriptedConflictResponse_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseAnimGraph;
};

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x7f0
    // Has VTable
    #pragma pack(push, 1)
    class CScriptedSequence : public server::CBaseEntity
    {
    public:
        CUtlSymbolLarge m_iszEntry; // 0x4d8        
        CUtlSymbolLarge m_iszPreIdle; // 0x4e0        
        CUtlSymbolLarge m_iszPlay; // 0x4e8        
        CUtlSymbolLarge m_iszPostIdle; // 0x4f0        
        CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x4f8        
        CUtlSymbolLarge m_iszNextScript; // 0x500        
        CUtlSymbolLarge m_iszEntity; // 0x508        
        CUtlSymbolLarge m_iszSyncGroup; // 0x510        
        client::ScriptedMoveTo_t m_nMoveTo; // 0x518        
        modellib::MovementGait_t m_nMoveToGait; // 0x51c        
        [[maybe_unused]] std::uint8_t pad_0x51d[0x3]; // 0x51d
        client::ScriptedHeldWeaponBehavior_t m_nHeldWeaponBehavior; // 0x520        
        bool m_bIsPlayingPreIdle; // 0x524        
        bool m_bIsPlayingEntry; // 0x525        
        bool m_bIsPlayingAction; // 0x526        
        bool m_bIsPlayingPostIdle; // 0x527        
        bool m_bDontRotateOther; // 0x528        
        bool m_bIsRepeatable; // 0x529        
        bool m_bShouldLeaveCorpse; // 0x52a        
        bool m_bStartOnSpawn; // 0x52b        
        bool m_bDisallowInterrupts; // 0x52c        
        bool m_bCanOverrideNPCState; // 0x52d        
        bool m_bDontTeleportAtEnd; // 0x52e        
        bool m_bHighPriority; // 0x52f        
        bool m_bHideDebugComplaints; // 0x530        
        bool m_bContinueOnDeath; // 0x531        
        bool m_bLoopPreIdleSequence; // 0x532        
        bool m_bLoopActionSequence; // 0x533        
        bool m_bLoopPostIdleSequence; // 0x534        
        bool m_bSynchPostIdles; // 0x535        
        bool m_bIgnoreLookAt; // 0x536        
        bool m_bIgnoreGravity; // 0x537        
        bool m_bDisableNPCCollisions; // 0x538        
        bool m_bKeepAnimgraphLockedPost; // 0x539        
        bool m_bDontAddModifiers; // 0x53a        
        [[maybe_unused]] std::uint8_t pad_0x53b[0x1]; // 0x53b
        float m_flRadius; // 0x53c        
        float m_flRepeat; // 0x540        
        float m_flPlayAnimFadeInTime; // 0x544        
        float m_flMoveInterpTime; // 0x548        
        float m_flAngRate; // 0x54c        
        bool m_bWaitUntilMoveCompletesToStartAnimation; // 0x550        
        [[maybe_unused]] std::uint8_t pad_0x551[0x3]; // 0x551
        int32_t m_nNotReadySequenceCount; // 0x554        
        entity2::GameTime_t m_startTime; // 0x558        
        bool m_bWaitForBeginSequence; // 0x55c        
        [[maybe_unused]] std::uint8_t pad_0x55d[0x3]; // 0x55d
        int32_t m_saved_effects; // 0x560        
        int32_t m_savedFlags; // 0x564        
        int32_t m_savedCollisionGroup; // 0x568        
        bool m_bInterruptable; // 0x56c        
        bool m_sequenceStarted; // 0x56d        
        bool m_bPositionRelativeToOtherEntity; // 0x56e        
        [[maybe_unused]] std::uint8_t pad_0x56f[0x1]; // 0x56f
        // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEnt;
        char m_hTargetEnt[0x4]; // 0x570        
        // m_hNextCine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CScriptedSequence> m_hNextCine;
        char m_hNextCine[0x4]; // 0x574        
        bool m_bThinking; // 0x578        
        bool m_bInitiatedSelfDelete; // 0x579        
        bool m_bIsTeleportingDueToMoveTo; // 0x57a        
        bool m_bAllowCustomInterruptConditions; // 0x57b        
        // m_hForcedTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseAnimGraph> m_hForcedTarget;
        char m_hForcedTarget[0x4]; // 0x57c        
        bool m_bDontCancelOtherSequences; // 0x580        
        bool m_bForceSynch; // 0x581        
        bool m_bPreventUpdateYawOnFinish; // 0x582        
        bool m_bEnsureOnNavmeshOnFinish; // 0x583        
        client::ScriptedOnDeath_t m_onDeathBehavior; // 0x584        
        server::ScriptedConflictResponse_t m_ConflictResponse; // 0x588        
        [[maybe_unused]] std::uint8_t pad_0x58c[0x4]; // 0x58c
        entity2::CEntityIOOutput m_OnBeginSequence; // 0x590        
        entity2::CEntityIOOutput m_OnActionStartOrLoop; // 0x5b8        
        entity2::CEntityIOOutput m_OnEndSequence; // 0x5e0        
        entity2::CEntityIOOutput m_OnPostIdleEndSequence; // 0x608        
        entity2::CEntityIOOutput m_OnCancelSequence; // 0x630        
        entity2::CEntityIOOutput m_OnCancelFailedSequence; // 0x658        
        entity2::CEntityIOOutput m_OnScriptEvent[8]; // 0x680        
        CTransform m_matOtherToMain; // 0x7c0        
        // m_hInteractionMainEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hInteractionMainEntity;
        char m_hInteractionMainEntity[0x4]; // 0x7e0        
        int32_t m_iPlayerDeathBehavior; // 0x7e4        
        [[maybe_unused]] std::uint8_t pad_0x7e8[0x8];
        
        // Datamap fields:
        // void CScriptedSequenceScriptThink; // 0x0
        // void InputMoveToPosition; // 0x0
        // void InputBeginSequence; // 0x0
        // void InputCancelSequence; // 0x0
        // CUtlSymbolLarge InputSetActionSequence; // 0x0
        // CUtlSymbolLarge InputForceTarget; // 0x0
        // void InputScriptPlayerDeath; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CScriptedSequence because it is not a standard-layout class
    static_assert(sizeof(CScriptedSequence) == 0x7f0);
};
