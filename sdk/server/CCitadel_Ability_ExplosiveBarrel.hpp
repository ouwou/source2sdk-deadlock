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
	// Size: 0xca0
	// Has VTable
	class CCitadel_Ability_ExplosiveBarrel : public server::CCitadelBaseAbility
	{
	public:
		CHandle<server::CCitadelProjectile> m_hBarrel; // 0xad8		
	};
};
