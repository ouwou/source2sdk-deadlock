#pragma once
#include "client/C_CitadelBaseAbility.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xdc0
	// Has VTable
	class CCitadel_Ability_Nano_Warp : public client::C_CitadelBaseAbility
	{
	public:
		Vector m_vTeleportTarget; // 0xc60		
		client::ParticleIndex_t m_ChannelParticle; // 0xc6c		
	};
};
