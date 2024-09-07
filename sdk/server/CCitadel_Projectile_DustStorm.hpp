#pragma once
#include "server/CCitadelProjectile.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadel_Ability_Dust_Storm;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x9e8
	// Has VTable
	class CCitadel_Projectile_DustStorm : public server::CCitadelProjectile
	{
	public:
		int32_t m_cTicksNoMovement; // 0x820		
		CHandle<server::CCitadel_Ability_Dust_Storm> m_DustStormAbility; // 0x824		
	};
};
