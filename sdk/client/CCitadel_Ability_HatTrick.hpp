#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_CitadelProjectile;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xd10
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CCitadelProjectile> m_hProjectile"
	class CCitadel_Ability_HatTrick : public client::C_CitadelBaseAbility
	{
	public:
		// MNetworkEnable
		CHandle<client::C_CitadelProjectile> m_hProjectile; // 0xc60		
	};
};
