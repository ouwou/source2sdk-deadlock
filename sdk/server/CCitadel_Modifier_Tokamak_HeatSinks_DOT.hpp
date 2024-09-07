#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadel_Modifier_Burning.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x140
	// Has VTable
	class CCitadel_Modifier_Tokamak_HeatSinks_DOT : public server::CCitadel_Modifier_Burning
	{
	public:
		entity2::GameTime_t m_flLastBurnTime; // 0xc8		
		float m_flScaledDPS; // 0xcc		
	};
};
