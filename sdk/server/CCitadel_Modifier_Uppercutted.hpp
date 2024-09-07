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
	// Size: 0x150
	// Has VTable
	class CCitadel_Modifier_Uppercutted : public server::CCitadelModifier
	{
	public:
		Vector m_vecFromBebop; // 0xc8		
		float m_flDamage; // 0xd4		
		bool m_bExplodeOnLand; // 0xd8		
	};
};
