#pragma once
#include "server/CCitadelModifierAura.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1a0
	// Has VTable
	class CCitadel_Modifier_AirLift_ExplodeAura : public server::CCitadelModifierAura
	{
	public:
		float m_flStartRadius; // 0xe8		
		float m_flEndRadius; // 0xec		
		float m_flSpreadDuration; // 0xf0		
	};
};
