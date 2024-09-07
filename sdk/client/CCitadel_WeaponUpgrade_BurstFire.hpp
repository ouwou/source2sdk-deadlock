#pragma once
#include "client/CCitadel_Item.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xcb8
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_nFastFireEndTime"
	class CCitadel_WeaponUpgrade_BurstFire : public client::CCitadel_Item
	{
	public:
		// MNetworkEnable
		entity2::GameTime_t m_nFastFireEndTime; // 0xc78		
	};
};
