#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CCitadelProjectile.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x868
	// Has VTable
	class CCitadel_Projectile_Viscous_GooGrenade : public server::CCitadelProjectile
	{
	public:
		int32_t m_nBounces; // 0x820		
		entity2::GameTime_t m_tNextDetonateTime; // 0x824		
		CUtlVector<CHandle<server::CBaseEntity>> m_vecProjectileHitTargets; // 0x828		
	};
};
