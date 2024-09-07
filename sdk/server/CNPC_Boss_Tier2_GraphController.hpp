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
	// Size: 0x6b0
	// Has VTable
	class CNPC_Boss_Tier2_GraphController : public server::CAI_CitadelNPC_GraphController
	{
	public:
		CAnimGraphParamRef<char*> m_pszActivity; // 0x5c0		
		CAnimGraphParamRef<char*> m_pszStompAttack; // 0x5e8		
		CAnimGraphParamRef<char*> m_pszStaggerDirection; // 0x610		
		CAnimGraphParamRef<char*> m_pszElectricBeamPosition; // 0x638		
		CAnimGraphTagRef m_sStaggered; // 0x660		
		CAnimGraphTagRef m_sStomp; // 0x678		
		bool m_bHasStompStarted; // 0x690		
	private:
		[[maybe_unused]] uint8_t __pad0691[0x7]; // 0x691
	public:
		CAnimGraphTagRef m_sApplyStompDamage; // 0x698		
		
		// Static fields:
		static uint32_t &Get_s_nControllerTypeID(){return *reinterpret_cast<uint32_t*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_Boss_Tier2_GraphController")->GetStaticFields()[0]->m_pInstance);};
		static bool &Get_s_bSchemaTest(){return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CNPC_Boss_Tier2_GraphController")->GetStaticFields()[1]->m_pInstance);};
	};
};
