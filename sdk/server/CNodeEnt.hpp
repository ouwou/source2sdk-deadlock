#pragma once
#include "client/HullFlags_t.hpp"
#include "server/CServerOnlyPointEntity.hpp"
#include "server/HintNodeData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x530
	// Has VTable
	class CNodeEnt : public server::CServerOnlyPointEntity
	{
	public:
		bool m_bDontDropNode; // 0x4d8		
		client::HullFlags_t m_HullForceFlags; // 0x4d9		
	private:
		[[maybe_unused]] uint8_t __pad04e3[0x5]; // 0x4e3
	public:
		server::HintNodeData m_NodeData; // 0x4e8		
		
		// Static fields:
		static int32_t &Get_m_nNodeCount(){return *reinterpret_cast<int32_t*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CNodeEnt")->GetStaticFields()[0]->m_pInstance);};
		
		// Datamap fields:
		// void m_pKeyValuesCopy; // 0x528
	};
};
