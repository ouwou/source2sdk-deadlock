#pragma once
#include "client/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x108
	// Has VTable
	class CCitadel_Modifier_Containment_Victim : public client::CCitadelModifier
	{
	public:
		float m_flTetherRadius; // 0xc0		
		Vector m_vecOrigin; // 0xc4		
	};
};
