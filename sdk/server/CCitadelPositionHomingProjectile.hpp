#pragma once
#include "server/CCitadelTrackedProjectile.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x858
	// Has VTable
	class CCitadelPositionHomingProjectile : public server::CCitadelTrackedProjectile
	{
	public:
		Vector m_vecHomingPosition; // 0x848		
	};
};
