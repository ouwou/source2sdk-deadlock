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
	// Size: 0xeb0
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bCardIsFlying"
	class CCitadel_Ability_CardToss : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x248]; // 0xc60
	public:
		// MNetworkEnable
		bool m_bCardIsFlying; // 0xea8		
	};
};
