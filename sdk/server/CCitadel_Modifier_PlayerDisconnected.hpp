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
	// Size: 0x51e0
	// Has VTable
	class CCitadel_Modifier_PlayerDisconnected : public server::CCitadelModifier
	{
	public:
		entity2::GameTime_t m_flTimePathUpdated; // 0xc8		
	};
};
