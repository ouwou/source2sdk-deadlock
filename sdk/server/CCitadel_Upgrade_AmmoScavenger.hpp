#pragma once
#include "server/CCitadel_Item.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb70
	// Has VTable
	class CCitadel_Upgrade_AmmoScavenger : public server::CCitadel_Item
	{
	public:
		CHandle<server::CBaseEntity> m_hLastOrbTarget; // 0xaf8		
	};
};
