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
	// Size: 0x1b0
	// Has VTable
	class CCitadel_Modifier_Afterburn_DOT : public server::CCitadel_Modifier_Burning
	{
	public:
		bool m_bCheckForExplosion; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
	public:
		entity2::GameTime_t m_flLastBurnTime; // 0xcc		
	};
};
