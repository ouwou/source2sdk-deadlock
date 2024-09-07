#pragma once
#include "client/CCitadel_Item.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_CitadelBaseAbility;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xcb8
	// Has VTable
	class CCitadel_Item_PowerShard : public client::CCitadel_Item
	{
	public:
		CHandle<client::C_CitadelBaseAbility> m_hLastSignatureToActivate; // 0xc78		
	};
};
