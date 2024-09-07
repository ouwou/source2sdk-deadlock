#pragma once
#include "client/ConditionId_t.hpp"
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelPlayerClipComponent.hpp"
#include "server/CNPC_Trooper.hpp"
#include "server/LaneSide_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1890
	// Has VTable
	// 
	// MNetworkVarNames "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
	// MNetworkVarNames "GameTime_t m_flFadeOutStart"
	// MNetworkVarNames "GameTime_t m_flFadeOutEnd"
	class CNPC_TrooperBoss : public server::CNPC_Trooper
	{
	private:
		[[maybe_unused]] uint8_t __pad1668[0x8]; // 0x1668
	public:
		// MNetworkEnable
		// MNetworkUserGroup "CCitadelPlayerClipComponent"
		// MNetworkAlias "CCitadelPlayerClipComponent"
		// MNetworkTypeAlias "CCitadelPlayerClipComponent"
		server::CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // 0x1670		
	private:
		[[maybe_unused]] uint8_t __pad1690[0x8]; // 0x1690
	public:
		server::LaneSide_t m_LaneSide; // 0x1698		
	private:
		[[maybe_unused]] uint8_t __pad1699[0x1df]; // 0x1699
	public:
		CUtlSymbolLarge m_backdoorProtectionTrigger; // 0x1878		
	private:
		[[maybe_unused]] uint8_t __pad1880[0x4]; // 0x1880
	public:
		// MNetworkEnable
		entity2::GameTime_t m_flFadeOutStart; // 0x1884		
		// MNetworkEnable
		entity2::GameTime_t m_flFadeOutEnd; // 0x1888		
		
		// Static fields:
		static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[0]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_RETURN_TO_SPAWN(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[1]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_SHIELD_STANCE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[2]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_COMBAT_STANCE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[3]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERBOSS_CHARGE_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[4]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPERBOSS_RAISE_SHIELD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[5]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPERBOSS_LOWER_SHIELD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[6]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPERBOSS_SHIELD_ACTIVE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[7]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPERBOSS_ENEMY_IN_CHARGE_RANGE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[8]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPERBOSS_ENEMY_OUT_OF_CHARGE_RANGE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperBoss")->GetStaticFields()[9]->m_pInstance);};
	};
};