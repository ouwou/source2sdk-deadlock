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
	// Size: 0x120
	// Has VTable
	class CCitadel_Destroyable_Building_GraphController : public client::CAnimGraphControllerBase
	{
	public:
		CAnimGraphParamOptionalRef<bool> m_bHitTrigger; // 0x18		
		CAnimGraphParamOptionalRef<char*> m_eState; // 0x38		
		CAnimGraphParamOptionalRef<float> m_flHealth; // 0x60		
		CAnimGraphParamOptionalRef<bool> m_bActive; // 0x80		
		CAnimGraphParamOptionalRef<float> m_flHealthPercent; // 0xa0		
		CAnimGraphParamOptionalRef<bool> m_bVulnerable; // 0xc0		
		CAnimGraphParamOptionalRef<bool> m_bDestroyed; // 0xe0		
		CAnimGraphParamOptionalRef<float> m_flExposedDurationFraction; // 0x100		
		
		// Static fields:
		static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Destroyable_Building_GraphController")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Destroyable_Building_GraphController")->GetStaticFields()[1]->m_pInstance);};
	};
};
