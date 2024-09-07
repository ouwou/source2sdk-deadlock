#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xc38
	// Has VTable
	class CCitadel_Ability_Nano_Warp : public server::CCitadelBaseAbility
	{
	public:
		Vector m_vTeleportTarget; // 0xad8		
		client::ParticleIndex_t m_ChannelParticle; // 0xae4		
	};
};
