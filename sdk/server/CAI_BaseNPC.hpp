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
	// Size: 0x1050
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
		[[maybe_unused]] uint8_t __pad0a98[0x10]; // 0xa98
	public:
		bool m_bCheckContacts; // 0xaa8		
		bool m_bIsUsingSmallHull; // 0xaa9		
	private:
		[[maybe_unused]] uint8_t __pad0aaa[0x2]; // 0xaaa
	public:
		Vector m_vecLastPosition; // 0xaac		
		float m_flLastPositionTolerance; // 0xab8		
		CHandle<server::CAI_BaseNPC> m_hSynchronizedPrimaryNPC; // 0xabc		
		CUtlVector<CHandle<server::CAI_BaseNPC>> m_vecSynchronizedSecondaryNPCs; // 0xac0		
		// MNetworkEnable
		client::NPC_STATE m_NPCState; // 0xad8		
		client::NPC_STATE m_nPreModifierNPCState; // 0xadc		
		client::NPC_STATE m_IdealNPCState; // 0xae0		
		entity2::GameTime_t m_flLastStateChangeTime; // 0xae4		
	private:
		[[maybe_unused]] uint8_t __pad0ae8[0x8]; // 0xae8
	public:
		client::CAI_ScheduleBits m_Conditions; // 0xaf0		
		client::CAI_ScheduleBits m_NonGatherConditions; // 0xb14		
		client::CAI_ScheduleBits m_CustomInterruptConditions; // 0xb38		
		bool m_bForceConditionsGather; // 0xb5c		
		bool m_bConditionsGathered; // 0xb5d		
		bool m_bDoPostRestoreRefindPath; // 0xb5e		
	private:
		[[maybe_unused]] uint8_t __pad0b5f[0x1]; // 0xb5f
	public:
		server::CAI_BehaviorHost* m_pBehaviorHost; // 0xb60		
	private:
		[[maybe_unused]] uint8_t __pad0b68[0x8]; // 0xb68
	public:
		server::CAI_EnemyServices* m_pEnemyServices; // 0xb70		
		client::CRandStopwatch m_GiveUpOnDeadEnemyTimer; // 0xb78		
		client::CSimpleSimTimer m_FailChooseEnemyTimer; // 0xb8c		
		entity2::GameTime_t m_flAcceptableTimeSeenEnemy; // 0xb94		
		bool m_bSkippedChooseEnemy; // 0xb98		
		bool m_bIgnoreUnseenEnemies; // 0xb99		
	private:
		[[maybe_unused]] uint8_t __pad0b9a[0x2]; // 0xb9a
	public:
		CHandle<server::CBaseFilter> m_hEnemyFilter; // 0xb9c		
		CUtlSymbolLarge m_iszEnemyFilterName; // 0xba0		
		CHandle<server::CBaseEntity> m_hTargetEnt; // 0xba8		
		bool m_bClearTargetOnScheduleEnd; // 0xbac		
	private:
		[[maybe_unused]] uint8_t __pad0bad[0x3]; // 0xbad
	public:
		entity2::GameTime_t m_flSoundWaitTime; // 0xbb0		
		int32_t m_nSoundPriority; // 0xbb4		
		bool m_bSuppressFootsteps; // 0xbb8		
	private:
		[[maybe_unused]] uint8_t __pad0bb9[0x3]; // 0xbb9
	public:
		int32_t m_afCapability; // 0xbbc		
		// MNetworkDisable
		float m_flGroundSpeed; // 0xbc0		
		entity2::GameTime_t m_flMoveWaitFinished; // 0xbc4		
		CHandle<server::CBaseEntity> m_hOpeningDoor; // 0xbc8		
	private:
		[[maybe_unused]] uint8_t __pad0bcc[0x4]; // 0xbcc
	public:
		server::CUnreachableTargetList m_UnreachableTargets; // 0xbd0		
		CHandle<server::CBaseEntity> m_hPathObstructor; // 0xbf0		
		float m_flJumpMaxRise; // 0xbf4		
		float m_flJumpMaxDrop; // 0xbf8		
		float m_flJumpMaxDist; // 0xbfc		
		float m_flJumpMinDist; // 0xc00		
	private:
		[[maybe_unused]] uint8_t __pad0c04[0x4]; // 0xc04
	public:
		server::CAI_AnimGraphServices* m_pAnimGraphServices; // 0xc08		
		bool m_bAnimGraphIsAnimatingDeath; // 0xc10		
		bool m_bDeferredNavigation; // 0xc11		
	private:
		[[maybe_unused]] uint8_t __pad0c12[0x6]; // 0xc12
	public:
		server::CAI_Scheduler m_Scheduler; // 0xc18		
		server::CAI_Navigator* m_pNavigatorNavmesh; // 0xcc0		
	private:
		[[maybe_unused]] uint8_t __pad0cc8[0x18]; // 0xcc8
	public:
		server::CAI_Motor* m_pMotor; // 0xce0		
		entity2::GameTime_t m_flTimeLastMovement; // 0xce8		
		entity2::GameTime_t m_flTimeLastFootstep; // 0xcec		
		client::CSimpleSimTimer m_CheckOnGroundTimer; // 0xcf0		
		CUtlSymbolLarge m_strNavRestrictionVolume; // 0xcf8		
		Vector m_vDefaultEyeOffset; // 0xd00		
		int32_t m_afMemory; // 0xd0c		
		entity2::GameTime_t m_flLastAttackTime; // 0xd10		
		entity2::GameTime_t m_flLastTookDamageTime; // 0xd14		
		entity2::GameTime_t m_flLastTookDamageFromPlayerTime; // 0xd18		
		Vector m_vecLastTookDamageAttackVector; // 0xd1c		
	private:
		[[maybe_unused]] uint8_t __pad0d28[0x8]; // 0xd28
	public:
		CUtlSymbolLarge m_iszSquadName; // 0xd30		
		CUtlVector<client::SquadSlotNPCEntry_t> m_vecMySquadSlots; // 0xd38		
		int32_t m_nPrevHealthDuringModifyDamage; // 0xd50		
		// MNetworkEnable
		bool m_bFadeCorpse; // 0xd54		
		// MNetworkEnable
		bool m_bImportantRagdoll; // 0xd55		
	private:
		[[maybe_unused]] uint8_t __pad0d56[0x2]; // 0xd56
	public:
		client::CTakeDamageResult m_deathBlowResult; // 0xd58		
		bool m_bDidDeathCleanup; // 0xd70		
		bool m_bReceivedEnemyDeadNotification; // 0xd71		
	private:
		[[maybe_unused]] uint8_t __pad0d72[0x2]; // 0xd72
	public:
		entity2::GameTime_t m_flWaitFinished; // 0xd74		
		bool m_fNoDamageDecal; // 0xd78		
	private:
		[[maybe_unused]] uint8_t __pad0d79[0x7]; // 0xd79
	public:
		CUtlVector<CHandle<server::CBaseEntity>>* m_pVecAttachments; // 0xd80		
		entity2::CEntityIOOutput m_OnDamaged; // 0xd88		
		entity2::CEntityIOOutput m_OnDeath; // 0xdb0		
		entity2::CEntityIOOutput m_OnQuarterHealth; // 0xdd8		
		entity2::CEntityIOOutput m_OnHalfHealth; // 0xe00		
		entity2::CEntityIOOutput m_OnThreeQuarterHealth; // 0xe28		
		CEntityOutputTemplate<CHandle<server::CBaseEntity>> m_OnFoundEnemy; // 0xe50		
		entity2::CEntityIOOutput m_OnLostEnemy; // 0xe78		
		entity2::CEntityIOOutput m_OnLostPlayer; // 0xea0		
		entity2::CEntityIOOutput m_OnDamagedByPlayer; // 0xec8		
		entity2::CEntityIOOutput m_OnDamagedByPlayerSquad; // 0xef0		
		entity2::CEntityIOOutput m_OnPlayerUse; // 0xf18		
		entity2::CEntityIOOutput m_OnUse; // 0xf40		
		entity2::CEntityIOOutput m_OnStartTouchMaterial; // 0xf68		
		entity2::CEntityIOOutput m_OnEndTouchMaterial; // 0xf90		
		entity2::CEntityIOOutput m_OnLostEnemyLOS; // 0xfb8		
		entity2::CEntityIOOutput m_OnLostPlayerLOS; // 0xfe0		
		uint64_t m_nAITraceMask; // 0x1008		
		float m_flThinkTime; // 0x1010		
	private:
		[[maybe_unused]] uint8_t __pad1014[0x1c]; // 0x1014
	public:
		CUtlVector<client::CAI_BaseNPC_DestructiblePartRuntimeData> m_DestructiblePartsRuntimeDataByVDataIndex; // 0x1030		
		int32_t m_nDebugCurIndex; // 0x1048		
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
		// CAI_Senses m_pSenses; // 0xae8
		// void m_pSquad; // 0xd28
		// void m_vecTaskThinkTimes; // 0x1018
		// CAI_Pathfinder m_pPathfinderNavmesh; // 0xcc8
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
