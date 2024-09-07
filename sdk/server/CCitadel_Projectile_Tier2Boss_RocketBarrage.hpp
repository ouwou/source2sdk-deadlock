#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelProjectile.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x830
	// Has VTable
	class CCitadel_Projectile_Tier2Boss_RocketBarrage : public server::CCitadelProjectile
	{
	public:
		client::ParticleIndex_t m_nLaserParticleIndex; // 0x820		
		Vector m_vecSmoothedVelocity; // 0x824		
	};
};
