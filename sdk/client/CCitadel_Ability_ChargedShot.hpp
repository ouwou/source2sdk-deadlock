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
	// Size: 0xd48
	// Has VTable
	class CCitadel_Ability_ChargedShot : public client::C_CitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_ChannelParticle; // 0xc60		
	};
};
