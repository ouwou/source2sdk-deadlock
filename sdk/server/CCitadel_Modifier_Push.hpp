#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xe0
	// Has VTable
	class CCitadel_Modifier_Push : public server::CCitadelModifier
	{
	public:
		Vector m_vPushForce; // 0xc8		
		float m_flDecayRate; // 0xd4		
		entity2::GameTime_t m_TimeDestroy; // 0xd8		
	};
};
