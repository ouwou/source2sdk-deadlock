#pragma once
#include "client/CCitadelModifier.hpp"
#include "entity2/GameTime_t.hpp"
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
	class CCitadel_Modifier_Push : public client::CCitadelModifier
	{
	public:
		Vector m_vPushForce; // 0xc0		
		float m_flDecayRate; // 0xcc		
		entity2::GameTime_t m_TimeDestroy; // 0xd0		
	};
};
