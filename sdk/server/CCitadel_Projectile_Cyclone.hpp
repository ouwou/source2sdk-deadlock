#pragma once
#include "server/CCitadelProjectile.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadel_Ability_Thumper_4;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x940
	// Has VTable
	class CCitadel_Projectile_Cyclone : public server::CCitadelProjectile
	{
	public:
		CHandle<server::CCitadel_Ability_Thumper_4> m_CycloneAbility; // 0x820		
	};
};
