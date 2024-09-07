#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xe80
	// Has VTable
	class CCitadel_Ability_RocketBarrage : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x1f8]; // 0xc60
	public:
		float m_flCurrentTimeScale; // 0xe58		
		Vector m_vecAimPos; // 0xe5c		
		Vector m_vecAimVel; // 0xe68		
		entity2::GameTime_t m_flLastUpdateTime; // 0xe74		
	};
};
