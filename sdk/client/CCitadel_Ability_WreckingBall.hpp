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
	// Size: 0xca0
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bHoldingBall"
	class CCitadel_Ability_WreckingBall : public client::C_CitadelBaseAbility
	{
	private:
		[[maybe_unused]] uint8_t __pad0c60[0x38]; // 0xc60
	public:
		// MNetworkEnable
		bool m_bHoldingBall; // 0xc98		
	};
};
