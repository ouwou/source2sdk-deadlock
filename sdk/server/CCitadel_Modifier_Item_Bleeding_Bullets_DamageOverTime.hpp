#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x178
	// Has VTable
	class CCitadel_Modifier_Item_Bleeding_Bullets_DamageOverTime : public server::CCitadelModifier
	{
	public:
		entity2::GameTime_t m_flLastTickTime; // 0xc8		
	};
};
