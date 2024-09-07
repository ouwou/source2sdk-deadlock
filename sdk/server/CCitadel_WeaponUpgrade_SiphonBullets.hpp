#pragma once
#include "server/CCitadel_Item.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb70
	// Has VTable
	// 
	// MNetworkVarNames "int m_iStacks"
	class CCitadel_WeaponUpgrade_SiphonBullets : public server::CCitadel_Item
	{
	public:
		// MNetworkEnable
		int32_t m_iStacks; // 0xaf8		
	};
};
