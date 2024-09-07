#pragma once
#include "client/CCitadelModifier.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x138
	// Has VTable
	class CCitadel_Modifier_VitalitySuppressor : public client::CCitadelModifier
	{
	public:
		entity2::GameTime_t m_flLastTickTime; // 0xc0		
	};
};
