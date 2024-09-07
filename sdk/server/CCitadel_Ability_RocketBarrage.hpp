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
	// Size: 0xcf8
	// Has VTable
	class CCitadel_Ability_RocketBarrage : public server::CCitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0ad8[0x1f8]; // 0xad8
	public:
		float m_flCurrentTimeScale; // 0xcd0		
		Vector m_vecAimPos; // 0xcd4		
		Vector m_vecAimVel; // 0xce0		
		entity2::GameTime_t m_flLastUpdateTime; // 0xcec		
	};
};
