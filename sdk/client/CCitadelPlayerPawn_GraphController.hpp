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
	// Size: 0x148
	// Has VTable
	class CCitadelPlayerPawn_GraphController : public client::CAnimGraphControllerBase
	{
	public:
		CAnimGraphParamRef<char*> m_pszSprintState; // 0x18		
		CAnimGraphParamRef<char*> m_pszFullBodySequence; // 0x40		
		CAnimGraphParamRef<char*> m_pszFlinchType; // 0x68		
		CAnimGraphParamOptionalRef<char*> m_pszMaxSpeedState; // 0x90		
		CAnimGraphParamOptionalRef<char*> m_pszDeathSequence; // 0xb8		
		CAnimGraphTagRef m_sAnimClippedMovement; // 0xe0		
		CAnimGraphTagRef m_sDisableGravity; // 0xf8		
		CAnimGraphTagRef m_sDirectAirControl; // 0x110		
		CAnimGraphParamOptionalRef<bool> m_bHardLanding; // 0x128		
		
		// Static fields:
		static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadelPlayerPawn_GraphController")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CCitadelPlayerPawn_GraphController")->GetStaticFields()[1]->m_pInstance);};
	};
};
