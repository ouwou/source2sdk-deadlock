#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include "server/CCitadel_Ability_CardToss__Card_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd40
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bCardIsFlying"
	class CCitadel_Ability_CardToss : public server::CCitadelBaseAbility
	{
	public:
		CUtlVector<server::CCitadel_Ability_CardToss__Card_t> m_vecCards; // 0xad8		
	private:
		[[maybe_unused]] uint8_t __pad0af0[0x248]; // 0xaf0
	public:
		// MNetworkEnable
		bool m_bCardIsFlying; // 0xd38		
	};
};
