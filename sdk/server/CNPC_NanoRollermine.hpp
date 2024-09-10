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
	// Size: 0x1658
	// Has VTable
	// 
	// MNetworkVarNames "float m_flForwardSpeed"
	// MNetworkVarNames "CHandle< CBaseEntity> m_hOwnerPawn"
	class CNPC_NanoRollermine : public server::CAI_CitadelNPC
	{
	private:
		[[maybe_unused]] uint8_t __pad15d0[0x38]; // 0x15d0
	public:
		// MNetworkEnable
		float m_flForwardSpeed; // 0x1608		
	private:
		[[maybe_unused]] uint8_t __pad160c[0x44]; // 0x160c
	public:
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hOwnerPawn; // 0x1650		
		
		// Static fields:
		static CUtlSymbolLarge &Get_SCHED_NANO_ROLLERMINE_ROLL_FORWARD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[0]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_NANO_ROLLERMINE_EXPLODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[1]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_NANO_ROLLERMINE_EXPLODING(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[2]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_NANO_ROLLERMINE_CHARGE_PATH(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[3]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_NANO_ROLLERMINE_EXPLODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[4]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_NANO_ROLLERMINE_PATH_TO_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[5]->m_pInstance);};
		static client::ConditionId_t &Get_COND_NANO_ROLLERMINE_EXPLODE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[6]->m_pInstance);};
		static client::ConditionId_t &Get_COND_NANO_ROLLERMINE_EXPLODING(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_NanoRollermine")->GetStaticFields()[7]->m_pInstance);};
	};
};
