#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd50
	// Has VTable
	// 
	// MNetworkVarNames "int m_nPlayersHit"
	class CCitadel_Ability_StickyBomb : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x8]; // 0xc60
	public:
		// MNetworkEnable
		int32_t m_nPlayersHit; // 0xc68		
	};
};
