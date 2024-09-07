#pragma once
#include "server/CNPC_TrooperNeutral_GraphController.hpp"
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
	class CNPC_TrooperNeutralNodeMover_GraphController : public server::CNPC_TrooperNeutral_GraphController
	{
	public:
		CAnimGraphTagRef m_sHidingInNode; // 0x670		
		
		// Static fields:
		static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover_GraphController")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_TrooperNeutralNodeMover_GraphController")->GetStaticFields()[1]->m_pInstance);};
	};
};
