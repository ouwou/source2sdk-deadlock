#pragma once
#include "client/CAnimGraph2ControllerBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x30
	// Has VTable
	class CAnimGraph2TestPropGraphController : public client::CAnimGraph2ControllerBase
	{
	public:
		CAnimGraph2ParamOptionalRef<CGlobalSymbol> m_TROOPER_MovementState; // 0x10		
		
		// Static fields:
		static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CAnimGraph2TestPropGraphController")->GetStaticFields()[0]->m_pInstance);};
	};
};
