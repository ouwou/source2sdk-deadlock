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
	// Size: 0x68
	// Has VTable
	class C_PortraitWorldUnit_GraphController : public client::CAnimGraphControllerBase
	{
	public:
		CAnimGraphParamOptionalRef<char*> m_pszHeroUI; // 0x18		
		CAnimGraphParamOptionalRef<char*> m_pszShopUI; // 0x40		
		
		// Static fields:
		static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_PortraitWorldUnit_GraphController")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("C_PortraitWorldUnit_GraphController")->GetStaticFields()[1]->m_pInstance);};
	};
};
