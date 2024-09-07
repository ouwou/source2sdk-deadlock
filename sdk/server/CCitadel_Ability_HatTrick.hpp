#pragma once
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelProjectile;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb88
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CCitadelProjectile> m_hProjectile"
	class CCitadel_Ability_HatTrick : public server::CCitadelBaseAbility
	{
	public:
		// MNetworkEnable
		CHandle<server::CCitadelProjectile> m_hProjectile; // 0xad8		
	};
};
