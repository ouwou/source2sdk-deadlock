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
	// Size: 0x15d0
	// Has VTable
	class CNPC_YakuzaGangster : public server::CAI_CitadelNPC
	{
	public:
		// Static fields:
		static CUtlSymbolLarge &Get_SCHED_GANGSTER_IDLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_YakuzaGangster")->GetStaticFields()[0]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_IDLE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_YakuzaGangster")->GetStaticFields()[1]->m_pInstance);};
		// No schema binary for binding
	};
};
