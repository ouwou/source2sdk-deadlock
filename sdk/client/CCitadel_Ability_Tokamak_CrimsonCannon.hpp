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
	// Size: 0xe50
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bAirCast"
	class CCitadel_Ability_Tokamak_CrimsonCannon : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		bool m_bAirCast; // 0xc60		
	private:
		[[maybe_unused]] uint8_t __pad0c61[0x1c7]; // 0xc61
	public:
		bool m_bIsZoomed; // 0xe28		
	};
};
