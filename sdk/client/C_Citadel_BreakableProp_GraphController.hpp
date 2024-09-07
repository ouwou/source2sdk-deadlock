#pragma once
#include "client/CAnimGraphControllerBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x98
	// Has VTable
	class C_Citadel_BreakableProp_GraphController : public client::CAnimGraphControllerBase
	{
	public:
		CAnimGraphParamOptionalRef<bool> m_bSetInit; // 0x18		
		CAnimGraphParamOptionalRef<float> m_flDamageReceived; // 0x38		
		CAnimGraphParamOptionalRef<bool> m_bOnRespawn; // 0x58		
		CAnimGraphParamOptionalRef<bool> m_bHitTrigger; // 0x78		
		
		// Static fields:
		static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_Citadel_BreakableProp_GraphController")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_Citadel_BreakableProp_GraphController")->GetStaticFields()[1]->m_pInstance);};
	};
};
