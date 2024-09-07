#pragma once
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
	class CCitadel_Modifier_Dust_Storm_Aura_Apply : public server::CCitadelModifier
	{
	public:
		float m_flDamagePerTick; // 0xc8		
		bool m_bFirstTick; // 0xcc		
	};
};
