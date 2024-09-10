#pragma once
#include "server/CAI_CitadelNPC.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1610
	// Has VTable
	class CNPC_CarpetBombDrone : public server::CAI_CitadelNPC
	{
	public:
		// Static fields:
		static CUtlSymbolLarge &Get_SCHED_CARPET_BOMBER(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_CarpetBombDrone")->GetStaticFields()[0]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_CARPET_BOMBER_FLY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_CarpetBombDrone")->GetStaticFields()[1]->m_pInstance);};
		// No schema binary for binding
	};
};
