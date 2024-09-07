#pragma once
#include "client/C_CitadelProjectile.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x900
	// Has VTable
	class C_Citadel_Projectile_Viscous_GooGrenade : public client::C_CitadelProjectile
	{
	public:
		int32_t m_nBounces; // 0x8b8		
		entity2::GameTime_t m_tNextDetonateTime; // 0x8bc		
		CUtlVector<CHandle<client::C_BaseEntity>> m_vecProjectileHitTargets; // 0x8c0		
	};
};
