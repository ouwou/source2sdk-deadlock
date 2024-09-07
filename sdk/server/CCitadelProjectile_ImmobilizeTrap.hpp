#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelProjectile.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb20
	// Has VTable
	class CCitadelProjectile_ImmobilizeTrap : public server::CCitadelProjectile
	{
	public:
		entity2::GameTime_t m_flStartTime; // 0x820		
		Vector m_vecStartPos; // 0x824		
		Vector m_vecEndPos; // 0x830		
		entity2::GameTime_t m_flProjectileLandTime; // 0x83c		
	};
};
