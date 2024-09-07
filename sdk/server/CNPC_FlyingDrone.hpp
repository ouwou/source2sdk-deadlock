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
	// Size: 0x1600
	// Has VTable
	// 
	// MNetworkIncludeByName "m_iHealth"
	// MNetworkIncludeByName "m_iMaxHealth"
	class CNPC_FlyingDrone : public server::CAI_CitadelNPC
	{
	public:
		// Static fields:
		static CUtlSymbolLarge &Get_SCHED_DRONE_FOLLOW_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->GetStaticFields()[0]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_DRONE_TELEPORT_TO_FOLLOW_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->GetStaticFields()[1]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_DRONE_TELEPORT(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->GetStaticFields()[2]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_DRONE_FOLLOW_TARGET(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->GetStaticFields()[3]->m_pInstance);};
		static client::ConditionId_t &Get_COND_DRONE_LOST_TARGET(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_FlyingDrone")->GetStaticFields()[4]->m_pInstance);};
	};
};
