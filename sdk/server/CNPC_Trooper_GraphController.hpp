#pragma once
#include "server/CAI_CitadelNPC_GraphController.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x618
	// Has VTable
	class CNPC_Trooper_GraphController : public server::CAI_CitadelNPC_GraphController
	{
	public:
		CAnimGraphTagRef m_sUsingMelee; // 0x5c0		
		CAnimGraphParamOptionalRef<bool> m_b_Falling; // 0x5d8		
		CAnimGraphParamOptionalRef<bool> m_b_Ziplining; // 0x5f8		
		
		// Static fields:
		static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_Trooper_GraphController")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_Trooper_GraphController")->GetStaticFields()[1]->m_pInstance);};
	};
};
