#pragma once
#include "client/CAI_BaseNPCGraphController.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x5c0
	// Has VTable
	class CAI_CitadelNPC_GraphController : public client::CAI_BaseNPCGraphController
	{
	public:
		CAnimGraphParamOptionalRef<int32_t> m_nHitLayerTrigger; // 0x558		
		CAnimGraphParamOptionalRef<char*> m_pszDamageState; // 0x578		
		CAnimGraphParamOptionalRef<float> m_fHealth; // 0x5a0		
		
		// Static fields:
		static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_CitadelNPC_GraphController")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAI_CitadelNPC_GraphController")->GetStaticFields()[1]->m_pInstance);};
	};
};
