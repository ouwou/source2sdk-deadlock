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
	// Size: 0x218
	// Has VTable
	class CCitadel_Modifier_RapidFire : public client::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0x150]; // 0xc0
	public:
		entity2::GameTime_t m_flNextAttackTime; // 0x210		
	};
};
