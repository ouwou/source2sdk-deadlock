#pragma once
#include "client/C_CitadelProjectile.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x8c8
	// Has VTable
	class C_Citadel_Projectile_Tier2Boss_RocketBarrage : public client::C_CitadelProjectile
	{
	public:
		client::ParticleIndex_t m_nLaserParticleIndex; // 0x8b8		
		Vector m_vecSmoothedVelocity; // 0x8bc		
	};
};
