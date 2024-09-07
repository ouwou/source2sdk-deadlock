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
	// Size: 0xb00
	// Has VTable
	class CCitadel_WeaponUpgrade_InstantReload : public server::CCitadel_Item
	{
	public:
		bool m_bIsManualReloading; // 0xaf8		
	};
};
