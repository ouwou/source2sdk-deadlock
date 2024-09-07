#pragma once
#include "server/CBaseEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CSkyCamera;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4e0
	// Has VTable
	class CSkyboxReference : public server::CBaseEntity
	{
	public:
		WorldGroupId_t m_worldGroupId; // 0x4d8		
		CHandle<server::CSkyCamera> m_hSkyCamera; // 0x4dc		
		
		// Datamap fields:
		// const char * worldGroupID; // 0x7fffffff
	};
};
