#pragma once
#include "server/CServerOnlyEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4e0
	// Has VTable
	class CCitadelTeleportLocation : public server::CServerOnlyEntity
	{
	public:
		int32_t m_iLane; // 0x4d8		
		int32_t m_iObjective; // 0x4dc		
	};
};
