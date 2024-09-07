#pragma once
#include "client/ConditionId_t.hpp"
#include "server/CAI_CitadelNPC.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};
namespace source2sdk::server
{
	struct CInfoTrooperBossSpawn;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1668
	// Has VTable
	// 
	// MNetworkVarNames "int m_iLane"
	// MNetworkVarNames "EHANDLE m_hTargetedEnemy"
	// MNetworkVarNames "float m_flHealingChargeParticlePct"
	class CNPC_Trooper : public server::CAI_CitadelNPC
	{
	private:
		[[maybe_unused]] uint8_t __pad15a8[0x8]; // 0x15a8
	public:
		// MNetworkEnable
		int32_t m_iLane; // 0x15b0		
		int32_t m_iLaneSlot; // 0x15b4		
	private:
		[[maybe_unused]] uint8_t __pad15b8[0x1c]; // 0x15b8
	public:
		CHandle<server::CInfoTrooperBossSpawn> m_hSpawnWaveController; // 0x15d4		
		CHandle<server::CBaseEntity> m_hTrooperSpawnPoint; // 0x15d8		
	private:
		[[maybe_unused]] uint8_t __pad15dc[0x1c]; // 0x15dc
	public:
		CModifierHandleTyped<server::CCitadelModifier> m_hNearDeathModifier; // 0x15f8		
	private:
		[[maybe_unused]] uint8_t __pad1610[0x8]; // 0x1610
	public:
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hTargetedEnemy; // 0x1618		
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1.000000"
		float m_flHealingChargeParticlePct; // 0x161c		
		
		// Static fields:
		static client::ConditionId_t &Get_COND_TROOPER_MOVE_OUT(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[0]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_SEEN_LARGE_EXPLOSION(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[1]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_CAN_ADVANCE_DOWN_LANE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[2]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_ENEMY_IN_CHARGE_RANGE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[3]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_CAN_ZIPLINE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[4]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_ON_ZIPLINE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[5]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_FOLLOW_OWNER(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[6]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_FOLLOW_OWNER_CLOSE_ENOUGH(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[7]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_CLIP_EMPTY(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[8]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_UNDER_HEAVY_ATTACK(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[9]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_INACTIVE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[10]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_FORCE_ADVANCE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[11]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_NEAR_BASE_ATTACKER(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[12]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_ZIPLINING_NEAR_ENEMY_CAN_DISMOUNT(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[13]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_FIGHTING_FINAL_CORE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[14]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_OUT_OF_LANE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[15]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPER_NEAR_DEATH(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[16]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_ADVANCE_UNDER_FIRE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[17]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_RUN_DOWN_LANE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[18]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_MELEE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[19]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[20]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_RELOAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[21]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_SENTRY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[22]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_WAIT_TO_ADVANCE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[23]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_PAUSE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[24]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_FLINCH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[25]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_START_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[26]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_RIDE_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[27]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_DISMOUNT_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[28]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_INITIAL_WAIT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[29]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_AVOID_TIER2BOSS_LASER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[30]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_CAPTURE_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[31]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_REACT_TO_EXPLOSION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[32]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_MOVE_TO_MELEE_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[33]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_DEPLOY_SHIELD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[34]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_RETURN_TO_LANE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[35]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPER_STUNNED(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[36]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_GET_LANE_NODE_PATH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[37]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_GET_CLOSEST_LANE_NODE_PATH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[38]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[39]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_ACTIVATE_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[40]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_DEACTIVATE_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[41]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_WAIT_FOR_ZIPLINE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[42]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_JUMP_TOWARD_LANE_SLOT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[43]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_WAIT_UNTIL_LAND_ON_GROUND(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[44]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_INITIAL_WAIT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[45]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_WAIT_FOR_SQUAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[46]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_FACE_INITIAL_DIRECTION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[47]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_WAIT_FLINCH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[48]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_GET_PATH_TO_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[49]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_PLAY_ANIMATION(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[50]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_WAIT_FOR_LANE_MOVEMENT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[51]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_DEPLOY_SHIELD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[52]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPER_WAIT_FOR_MELEE_MOVEMENT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_Trooper")->GetStaticFields()[53]->m_pInstance);};
		
		// Datamap fields:
		// int32_t m_iCoverGroupID; // 0x1508
	};
};
