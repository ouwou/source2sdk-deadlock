#pragma once
#include "server/CAI_BaseNPC.hpp"
#include "server/TestHullMode_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1058
	// Has VTable
	class CAI_TestHull : public server::CAI_BaseNPC
	{
	public:
		server::TestHullMode_t m_nHullMode; // 0x1050		
		
		// Static fields:
		static server::CAI_TestHull* &Get_s_pTestHulls(){return *reinterpret_cast<server::CAI_TestHull**>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_TestHull")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_s_bTestHullAcquired(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_TestHull")->GetStaticFields()[1]->m_pInstance);};
	};
};
