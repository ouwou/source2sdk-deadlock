#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb88
	// Has VTable
	class CCitadel_Ability_PowerSurge : public server::CCitadelBaseAbility
	{
	public:
		entity2::GameTime_t m_flNextProcTime; // 0xad8		
		float m_flBaseCooldown; // 0xadc		
	};
};
