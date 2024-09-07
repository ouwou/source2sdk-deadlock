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
	class CCitadel_Modifier_ChargePullEnemy : public client::CCitadelModifier
	{
	public:
		Vector m_vecOffsetDir; // 0xc0		
		float m_flTackleRadius; // 0xcc		
		float m_flPullTargetSpeed; // 0xd0		
	};
};
