#pragma once
#include "server/CNPC_HeroCloneTrooper.hpp"
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
	class CNPC_HeroDecoy : public server::CNPC_HeroCloneTrooper
	{
	public:
		// Static fields:
		static CUtlSymbolLarge &Get_SCHED_HERO_DECOY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroDecoy")->GetStaticFields()[0]->m_pInstance);};
		static CUtlSymbolLarge &Get_SCHED_HERO_DECOY_MOVETO(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroDecoy")->GetStaticFields()[1]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_MOVE_DECOY_MOVETO(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroDecoy")->GetStaticFields()[2]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_MOVE_DECOY_FORWARD(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNPC_HeroDecoy")->GetStaticFields()[3]->m_pInstance);};
		// No schema binary for binding
	};
};
