#pragma once
#include "client/CAI_BaseNPC_DestructiblePartRuntimeData.hpp"
#include "client/CAI_ScheduleBits.hpp"
#include "client/CRandStopwatch.hpp"
#include "client/CSimpleSimTimer.hpp"
#include "client/CTakeDamageResult.hpp"
#include "client/NPC_STATE.hpp"
#include "client/SquadSlotNPCEntry_t.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CAI_Scheduler.hpp"
#include "server/CBaseCombatCharacter.hpp"
#include "server/CUnreachableTargetList.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CAI_AnimGraphServices;
};
namespace source2sdk::server
{
	struct CAI_BehaviorHost;
};
namespace source2sdk::server
{
	struct CAI_EnemyServices;
};
namespace source2sdk::server
{
	struct CAI_Motor;
};
namespace source2sdk::server
{
	struct CAI_Navigator;
};
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CBaseFilter;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1078
	// Has VTable
	// 
	// MNetworkIncludeByName "m_lifeState"
	// MNetworkIncludeByName "m_spawnflags"
	// MNetworkVarNames "NPC_STATE m_NPCState"
	// MNetworkVarNames "bool m_bFadeCorpse"
	// MNetworkVarNames "bool m_bImportantRagdoll"
	class CAI_BaseNPC : public server::CBaseCombatCharacter
	{
	private:
		[[maybe_unused]] uint8_t __pad0ac0[0x10]; // 0xac0
	public:
		bool m_bCheckContacts; // 0xad0		
		bool m_bIsUsingSmallHull; // 0xad1		
	private:
		[[maybe_unused]] uint8_t __pad0ad2[0x2]; // 0xad2
	public:
		Vector m_vecLastPosition; // 0xad4		
		float m_flLastPositionTolerance; // 0xae0		
		CHandle<server::CAI_BaseNPC> m_hSynchronizedPrimaryNPC; // 0xae4		
		CUtlVector<CHandle<server::CAI_BaseNPC>> m_vecSynchronizedSecondaryNPCs; // 0xae8		
		// MNetworkEnable
		client::NPC_STATE m_NPCState; // 0xb00		
		client::NPC_STATE m_nPreModifierNPCState; // 0xb04		
		client::NPC_STATE m_IdealNPCState; // 0xb08		
		entity2::GameTime_t m_flLastStateChangeTime; // 0xb0c		
	private:
		[[maybe_unused]] uint8_t __pad0b10[0x8]; // 0xb10
	public:
		client::CAI_ScheduleBits m_Conditions; // 0xb18		
		client::CAI_ScheduleBits m_NonGatherConditions; // 0xb3c		
		client::CAI_ScheduleBits m_CustomInterruptConditions; // 0xb60		
		bool m_bForceConditionsGather; // 0xb84		
		bool m_bConditionsGathered; // 0xb85		
		bool m_bDoPostRestoreRefindPath; // 0xb86		
	private:
		[[maybe_unused]] uint8_t __pad0b87[0x1]; // 0xb87
	public:
		server::CAI_BehaviorHost* m_pBehaviorHost; // 0xb88		
	private:
		[[maybe_unused]] uint8_t __pad0b90[0x8]; // 0xb90
	public:
		server::CAI_EnemyServices* m_pEnemyServices; // 0xb98		
		client::CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xba0		
		client::CSimpleSimTimer m_FailChooseEnemyTimer; // 0xbb4		
		entity2::GameTime_t m_flAcceptableTimeSeenEnemy; // 0xbbc		
		bool m_bSkippedChooseEnemy; // 0xbc0		
		bool m_bIgnoreUnseenEnemies; // 0xbc1		
	private:
		[[maybe_unused]] uint8_t __pad0bc2[0x2]; // 0xbc2
	public:
		CHandle<server::CBaseFilter> m_hEnemyFilter; // 0xbc4		
		CUtlSymbolLarge m_iszEnemyFilterName; // 0xbc8		
		CHandle<server::CBaseEntity> m_hTargetEnt; // 0xbd0		
		bool m_bClearTargetOnScheduleEnd; // 0xbd4		
	private:
		[[maybe_unused]] uint8_t __pad0bd5[0x3]; // 0xbd5
	public:
		entity2::GameTime_t m_flSoundWaitTime; // 0xbd8		
		int32_t m_nSoundPriority; // 0xbdc		
		bool m_bSuppressFootsteps; // 0xbe0		
	private:
		[[maybe_unused]] uint8_t __pad0be1[0x3]; // 0xbe1
	public:
		int32_t m_afCapability; // 0xbe4		
		// MNetworkDisable
		float m_flGroundSpeed; // 0xbe8		
		entity2::GameTime_t m_flMoveWaitFinished; // 0xbec		
		CHandle<server::CBaseEntity> m_hOpeningDoor; // 0xbf0		
	private:
		[[maybe_unused]] uint8_t __pad0bf4[0x4]; // 0xbf4
	public:
		server::CUnreachableTargetList m_UnreachableTargets; // 0xbf8		
		CHandle<server::CBaseEntity> m_hPathObstructor; // 0xc18		
		float m_flJumpMaxRise; // 0xc1c		
		float m_flJumpMaxDrop; // 0xc20		
		float m_flJumpMaxDist; // 0xc24		
		float m_flJumpMinDist; // 0xc28		
	private:
		[[maybe_unused]] uint8_t __pad0c2c[0x4]; // 0xc2c
	public:
		server::CAI_AnimGraphServices* m_pAnimGraphServices; // 0xc30		
		bool m_bAnimGraphIsAnimatingDeath; // 0xc38		
		bool m_bDeferredNavigation; // 0xc39		
	private:
		[[maybe_unused]] uint8_t __pad0c3a[0x6]; // 0xc3a
	public:
		server::CAI_Scheduler m_Scheduler; // 0xc40		
		server::CAI_Navigator* m_pNavigatorNavmesh; // 0xce8		
	private:
		[[maybe_unused]] uint8_t __pad0cf0[0x18]; // 0xcf0
	public:
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
	private:
		[[maybe_unused]] uint8_t __pad0d50[0x8]; // 0xd50
	public:
		CUtlSymbolLarge m_iszSquadName; // 0xd58		
		CUtlVector<client::SquadSlotNPCEntry_t> m_vecMySquadSlots; // 0xd60		
		int32_t m_nPrevHealthDuringModifyDamage; // 0xd78		
		// MNetworkEnable
		bool m_bFadeCorpse; // 0xd7c		
		// MNetworkEnable
		bool m_bImportantRagdoll; // 0xd7d		
	private:
		[[maybe_unused]] uint8_t __pad0d7e[0x2]; // 0xd7e
	public:
		client::CTakeDamageResult m_deathBlowResult; // 0xd80		
		bool m_bDidDeathCleanup; // 0xd98		
		bool m_bReceivedEnemyDeadNotification; // 0xd99		
	private:
		[[maybe_unused]] uint8_t __pad0d9a[0x2]; // 0xd9a
	public:
		entity2::GameTime_t m_flWaitFinished; // 0xd9c		
		bool m_fNoDamageDecal; // 0xda0		
	private:
		[[maybe_unused]] uint8_t __pad0da1[0x7]; // 0xda1
	public:
		CUtlVector<CHandle<server::CBaseEntity>>* m_pVecAttachments; // 0xda8		
		entity2::CEntityIOOutput m_OnDamaged; // 0xdb0		
		entity2::CEntityIOOutput m_OnDeath; // 0xdd8		
		entity2::CEntityIOOutput m_OnQuarterHealth; // 0xe00		
		entity2::CEntityIOOutput m_OnHalfHealth; // 0xe28		
		entity2::CEntityIOOutput m_OnThreeQuarterHealth; // 0xe50		
		CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnFoundEnemy; // 0xe78		
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
	private:
		[[maybe_unused]] uint8_t __pad103c[0x1c]; // 0x103c
	public:
		CUtlVector<client::CAI_BaseNPC_DestructiblePartRuntimeData> m_DestructiblePartsRuntimeDataByVDataIndex; // 0x1058		
		int32_t m_nDebugCurIndex; // 0x1070		
		struct 
		{
			uint8_t m_bInvokingBehaviorIsValidEnemy: 1; 			
			uint8_t m_bInvokingBehaviorBestEnemy: 1; 			
			uint8_t m_bInvokingBehaviorShouldIgnoreSound: 1; 			
			uint8_t m_bInvokingBehaviorIsInterruptable: 1; 			
			uint8_t m_bInvokingBehaviorOnTakeDamage_React_Alive: 1; 			
			uint8_t m_bInvokingBehaviorQueryHearSound: 1; 			
			uint8_t m_bInvokingBehaviorOnCalcBaseMove: 1; 			
			uint8_t m_bInvokingBehaviorShouldAlwaysGatherEnvironmentalConditions: 1; 			
			uint8_t m_bInvokingBehaviorAimGun: 1; 			
			uint8_t __pad0: 1;
		}; // 10 bits
		
		// Static fields:
		static CUtlSymbolLarge &Get_sm_iszPlayerSquad(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[0]->m_pInstance);};
		static int32_t &Get_sm_nDebugBits(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[1]->m_pInstance);};
		static int32_t &Get_sm_nDebugPauseIndex(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_BaseNPC")->GetStaticFields()[2]->m_pInstance);};
		
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
};
