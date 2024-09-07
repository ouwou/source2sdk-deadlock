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
	// Size: 0x8c0
	// Has VTable
	class C_Citadel_Projectile_Bebop_Hook : public client::C_CitadelProjectile
	{
	public:
		client::ParticleIndex_t m_iChainEffect; // 0x8b8		
	};
};
