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
	// Size: 0xd8
	// Has VTable
	class CCitadel_Modifier_BlastPush : public client::CCitadelModifier
	{
	public:
		Vector m_vPush; // 0xc0		
		float m_flPushVelocity; // 0xcc		
		float m_flMaxPushVelocity; // 0xd0		
		float m_flMaxPushVelocitySqr; // 0xd4		
	};
};
