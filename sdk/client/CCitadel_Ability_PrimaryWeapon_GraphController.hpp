#pragma once
#include "client/CCitadelBaseAbilityGraphController.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xf8
	// Has VTable
	class CCitadel_Ability_PrimaryWeapon_GraphController : public client::CCitadelBaseAbilityGraphController
	{
	public:
		CAnimGraphParamOptionalRef<bool> m_bAiming; // 0x18		
		CAnimGraphParamOptionalRef<float> m_flReloadSpeed; // 0x38		
		CAnimGraphParamOptionalRef<bool> m_bReloadingSingleRoundStart; // 0x58		
		CAnimGraphParamOptionalRef<bool> m_bReloadingSingleRound; // 0x78		
		CAnimGraphParamOptionalRef<bool> m_bReloading; // 0x98		
		CAnimGraphParamOptionalRef<bool> m_bShootAlt; // 0xb8		
		CAnimGraphParamOptionalRef<bool> m_bShoot; // 0xd8		
		
		// Static fields:
		static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Ability_PrimaryWeapon_GraphController")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadel_Ability_PrimaryWeapon_GraphController")->GetStaticFields()[1]->m_pInstance);};
	};
};
