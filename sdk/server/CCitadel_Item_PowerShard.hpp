#pragma once
#include "server/CCitadel_Item.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelBaseAbility;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb38
	// Has VTable
	class CCitadel_Item_PowerShard : public server::CCitadel_Item
	{
	public:
		CHandle<server::CCitadelBaseAbility> m_hLastSignatureToActivate; // 0xaf8		
	};
};
