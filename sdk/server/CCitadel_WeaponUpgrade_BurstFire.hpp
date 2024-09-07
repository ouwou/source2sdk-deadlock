#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadel_Item.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb38
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_nFastFireEndTime"
	class CCitadel_WeaponUpgrade_BurstFire : public server::CCitadel_Item
	{
	public:
		// MNetworkEnable
		entity2::GameTime_t m_nFastFireEndTime; // 0xaf8		
	};
};
