#pragma once
#include "client/ConditionId_t.hpp"
#include "server/CAI_CitadelNPC.hpp"
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
	// Size: 0x15d0
	// Has VTable
	// 
	// MNetworkVarNames "EHANDLE m_hOwner"
	class CNPC_HeroCloneTrooper : public server::CAI_CitadelNPC
	{
	private:
		[[maybe_unused]] uint8_t __pad15a8[0x4]; // 0x15a8
	public:
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hOwner; // 0x15ac		
		
		// Static fields:
		static CUtlSymbolLarge &Get_SCHED_CLONE_TROOPER_RELOAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[0]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_CLONE_TROOPER_DODGE_ROLL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[1]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_CLONE_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[2]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_CLONE_SENTRY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[3]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_CLONE_MELEE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[4]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_CLONE_CHARGE_FORWARD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[5]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_CLONE_CHARGE_TO_SQUAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[6]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_CLONE_ADVANCE_ON_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[7]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_CLONE_JUMP_TOWARD_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[8]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_CLONE_FOLLOW_OWNER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[9]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_CLONE_DODGE_ROLL(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[10]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_CLONE_RANGE_ATTACK(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[11]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_CLONE_JUMP_AT_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[12]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_CLONE_GET_PATH_TO_SQUAD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[13]->m_pInstance);};
		static client::ConditionId_t &Get_COND_CLONE_FAR_FROM_OWNER(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[14]->m_pInstance);};
		static client::ConditionId_t &Get_COND_CLONE_NEW_ORDERS(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroCloneTrooper")->GetStaticFields()[15]->m_pInstance);};
	};
};
