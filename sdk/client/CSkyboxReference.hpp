#pragma once
#include "client/C_BaseEntity.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_SkyCamera;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x560
	// Has VTable
	class CSkyboxReference : public client::C_BaseEntity
	{
	public:
		WorldGroupId_t m_worldGroupId; // 0x558		
		CHandle<client::C_SkyCamera> m_hSkyCamera; // 0x55c		
		
		// Datamap fields:
		// const char * worldGroupID; // 0x7fffffff
	};
};
