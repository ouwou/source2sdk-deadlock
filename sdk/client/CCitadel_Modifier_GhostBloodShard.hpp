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
	// Size: 0x110
	// Has VTable
	class CCitadel_Modifier_GhostBloodShard : public client::CCitadelModifier
	{
	public:
		float m_flMinSlowAmount; // 0xc0		
		float m_flMoveSpeedPenaltyPerStack; // 0xc4		
		float m_flSlowDuration; // 0xc8		
	};
};
