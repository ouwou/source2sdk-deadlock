#pragma once
#include "server/CPointEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CNodeEnt;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4d8
	// Has VTable
	class CAI_NetworkManager : public server::CPointEntity
	{
	public:
		// Static fields:
		static CUtlVector<uint32_t> &Get_m_SpawnGroupsContributingToNodeList(){return *reinterpret_cast<CUtlVector<uint32_t>*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_NetworkManager")->GetStaticFields()[0]->m_pInstance);};
		static CUtlVector<server::CNodeEnt*> &Get_m_SpawningNodes(){return *reinterpret_cast<CUtlVector<server::CNodeEnt*>*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CAI_NetworkManager")->GetStaticFields()[1]->m_pInstance);};
		// No schema binary for binding
	};
};
