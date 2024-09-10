#pragma once
#include "client/ConditionId_t.hpp"
#include "server/CAI_CitadelNPC.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1638
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bShieldActive"
	// MNetworkVarNames "bool m_bPlayingIdle"
	class CNPC_TrooperNeutral : public server::CAI_CitadelNPC
	{
	private:
		[[maybe_unused]] uint8_t __pad15d0[0x63]; // 0x15d0
	public:
		// MNetworkEnable
		bool m_bShieldActive; // 0x1633		
		// MNetworkEnable
		bool m_bPlayingIdle; // 0x1634		
		
		// Static fields:
		static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_MOVE_TO_COVER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[0]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_SLEEP(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[1]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_RETURN_TO_SPAWN(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[2]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_SENTRY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[3]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_RELOAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[4]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_RELOAD_AND_WAIT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[5]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[6]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_FURNITURE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[7]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_IDLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[8]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_AOE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[9]->m_pInstance);};
		static client::ConditionId_t &Get_COND_SQUAD_SHOOT_SLOT_AVAILABLE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[10]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPERNEUTRAL_WATCHER_NEARBY(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[11]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPERNEUTRAL_NO_WATCHER(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[12]->m_pInstance);};
		static client::ConditionId_t &Get_COND_TROOPERNEUTRAL_CAN_AOE_ATTACK(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[13]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPERNEUTRAL_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[14]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPERNEUTRAL_PLAY_AOE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[15]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TROOPERNEUTRAL_PERFORM_AOE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[16]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_TURN_INITIAL_FACING(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutral")->GetStaticFields()[17]->m_pInstance);};
	};
};
