#pragma once
#include "client/CAI_Component.hpp"
#include "server/HandshakeInfo_t.hpp"
#include "server/LastIncomingHit_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x98
	// Has VTable
	class CAI_AnimGraphServices : public client::CAI_Component
	{
	public:
		server::HandshakeInfo_t m_pHandshakeInfo[2]; // 0x40		
		float m_flMinFaceTolerance; // 0x70		
		server::LastIncomingHit_t m_LastIncomingHit; // 0x74		
		
		// Static fields:
		static CUtlSymbolLarge &Get_TASK_GRAPH_START_HANDSHAKE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_AnimGraphServices")->GetStaticFields()[0]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_GRAPH_WAIT_FOR_HANDSHAKE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_AnimGraphServices")->GetStaticFields()[1]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_GRAPH_WAIT_FOR_HANDSHAKE_AND_FACE_ENEMY(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_AnimGraphServices")->GetStaticFields()[2]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_GRAPH_WAIT_FOR_HANDSHAKE_TO_BECOME_ACTIVE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_AnimGraphServices")->GetStaticFields()[3]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_GRAPH_WAIT_FOR_PREVIOUS_HANDSHAKE_TO_BECOME_INACTIVE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_AnimGraphServices")->GetStaticFields()[4]->m_pInstance);};
		static CUtlSymbolLarge &Get_TASK_GRAPH_CANCEL_HANDSHAKE(){return *reinterpret_cast<CUtlSymbolLarge*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_AnimGraphServices")->GetStaticFields()[5]->m_pInstance);};
	};
};
