#pragma once
#include "client/NPC_STATE.hpp"
#include "entity2/CEntityIOOutput.hpp"
#include "schemasystem/ThreeState_t.hpp"
#include "server/CAI_ProxTester.hpp"
#include "server/CAI_ScriptConditionsElement.hpp"
#include "server/CBaseEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x5f0
	// Has VTable
	class CAI_ScriptConditions : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x8]; // 0x4d8
	public:
		entity2::CEntityIOOutput m_OnConditionsSatisfied; // 0x4e0		
		entity2::CEntityIOOutput m_OnConditionsTimeout; // 0x508		
		entity2::CEntityIOOutput m_NoValidActors; // 0x530		
		bool m_fDisabled; // 0x558		
		bool m_bLeaveAsleep; // 0x559		
	private:
		[[maybe_unused]] uint8_t __pad055a[0x2]; // 0x55a
	public:
		CHandle<server::CBaseEntity> m_hTarget; // 0x55c		
		float m_flRequiredDuration; // 0x560		
		client::NPC_STATE m_fMinState; // 0x564		
		client::NPC_STATE m_fMaxState; // 0x568		
		schemasystem::ThreeState_t m_fScriptStatus; // 0x56c		
		schemasystem::ThreeState_t m_fActorSeePlayer; // 0x570		
	private:
		[[maybe_unused]] uint8_t __pad0574[0x4]; // 0x574
	public:
		CUtlSymbolLarge m_Actor; // 0x578		
		float m_flPlayerActorProximity; // 0x580		
		server::CAI_ProxTester m_PlayerActorProxTester; // 0x584		
		float m_flPlayerActorFOV; // 0x58c		
		bool m_bPlayerActorFOVTrueCone; // 0x590		
	private:
		[[maybe_unused]] uint8_t __pad0591[0x3]; // 0x591
	public:
		schemasystem::ThreeState_t m_fPlayerActorLOS; // 0x594		
		schemasystem::ThreeState_t m_fActorSeeTarget; // 0x598		
		float m_flActorTargetProximity; // 0x59c		
		server::CAI_ProxTester m_ActorTargetProxTester; // 0x5a0		
		float m_flPlayerTargetProximity; // 0x5a8		
		server::CAI_ProxTester m_PlayerTargetProxTester; // 0x5ac		
		float m_flPlayerTargetFOV; // 0x5b4		
		bool m_bPlayerTargetFOVTrueCone; // 0x5b8		
	private:
		[[maybe_unused]] uint8_t __pad05b9[0x3]; // 0x5b9
	public:
		schemasystem::ThreeState_t m_fPlayerTargetLOS; // 0x5bc		
		schemasystem::ThreeState_t m_fPlayerBlockingActor; // 0x5c0		
		schemasystem::ThreeState_t m_fActorInPVS; // 0x5c4		
		float m_flMinTimeout; // 0x5c8		
		float m_flMaxTimeout; // 0x5cc		
		schemasystem::ThreeState_t m_fActorInVehicle; // 0x5d0		
		schemasystem::ThreeState_t m_fPlayerInVehicle; // 0x5d4		
		CUtlVector<server::CAI_ScriptConditionsElement> m_ElementList; // 0x5d8		
		
		// Datamap fields:
		// void CAI_ScriptConditionsEvaluationThink; // 0x0
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
	};
};
