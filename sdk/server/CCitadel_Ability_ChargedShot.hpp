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
	// Size: 0xbc0
	// Has VTable
	class CCitadel_Ability_ChargedShot : public server::CCitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_ChannelParticle; // 0xad8		
	};
};
