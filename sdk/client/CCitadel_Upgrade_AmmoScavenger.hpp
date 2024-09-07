#pragma once
#include "client/CCitadel_Item.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xcf0
	// Has VTable
	class CCitadel_Upgrade_AmmoScavenger : public client::CCitadel_Item
	{
	public:
		CHandle<client::C_BaseEntity> m_hLastOrbTarget; // 0xc78		
	};
};
