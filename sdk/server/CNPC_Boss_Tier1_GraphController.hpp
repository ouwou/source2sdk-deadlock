#pragma once
#include "server/CNPC_Trooper_GraphController.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x688
	// Has VTable
	class CNPC_Boss_Tier1_GraphController : public server::CNPC_Trooper_GraphController
	{
	public:
		CAnimGraphParamRef<char*> m_pszActivity; // 0x618		
		CAnimGraphParamRef<char*> m_pszLaneSide; // 0x640		
		CAnimGraphParamRef<bool> m_bShieldMode; // 0x668		
		
		// Static fields:
		static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_Boss_Tier1_GraphController")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_Boss_Tier1_GraphController")->GetStaticFields()[1]->m_pInstance);};
	};
};
