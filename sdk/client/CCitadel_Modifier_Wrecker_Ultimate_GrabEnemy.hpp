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
	// Size: 0x220
	// Has VTable
	class CCitadel_Modifier_Wrecker_Ultimate_GrabEnemy : public client::CCitadelModifier
	{
	public:
		Vector m_vHoldOffset; // 0xc0		
		float m_flLastTouchTime; // 0xcc		
	};
};
