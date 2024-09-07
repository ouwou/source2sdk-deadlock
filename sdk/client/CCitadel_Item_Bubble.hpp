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
	// Size: 0xc80
	// Has VTable
	// 
	// MNetworkVarNames "GameTime_t m_flEndTime"
	class CCitadel_Item_Bubble : public client::CCitadel_Item
	{
	public:
		// MNetworkEnable
		// MNetworkUserGroup "LocalPlayerOwnerExclusive"
		entity2::GameTime_t m_flEndTime; // 0xc78		
	};
};
