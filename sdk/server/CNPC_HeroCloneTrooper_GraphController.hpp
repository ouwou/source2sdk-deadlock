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
	// Size: 0x5e0
	// Has VTable
	class CNPC_HeroCloneTrooper_GraphController : public server::CAI_CitadelNPC_GraphController
	{
	public:
		CAnimGraphParamRef<bool> m_bAiming; // 0x5c0		
		
		// Static fields:
		static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_HeroCloneTrooper_GraphController")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_HeroCloneTrooper_GraphController")->GetStaticFields()[1]->m_pInstance);};
	};
};
