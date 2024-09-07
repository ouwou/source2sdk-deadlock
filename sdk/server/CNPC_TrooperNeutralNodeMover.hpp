#pragma once
#include "client/ConditionId_t.hpp"
#include "server/CNPC_TrooperNeutral.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1668
	// Has VTable
	class CNPC_TrooperNeutralNodeMover : public server::CNPC_TrooperNeutral
	{
	public:
		// Static fields:
		static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_MOVE_TO_NEW_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[0]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_HIDE_IN_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[1]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_COME_OUT_OF_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[2]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_TROOPERNEUTRAL_RETURN_TO_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[3]->m_pInstance);};
		static client::ConditionId_t &Get_COND_FAR_FROM_NODE(){return *reinterpret_cast<client::ConditionId_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[4]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_PICK_NEW_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[5]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_MOVE_TO_NEXT_MOVEMENT_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[6]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_HIDE_IN_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[7]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_COME_OUT_OF_NODE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover")->GetStaticFields()[8]->m_pInstance);};
		// No schema binary for binding
	};
};
