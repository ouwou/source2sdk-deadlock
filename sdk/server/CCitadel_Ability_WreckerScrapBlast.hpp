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
	// Size: 0xb88
	// Has VTable
	class CCitadel_Ability_WreckerScrapBlast : public server::CCitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_BlastParticle; // 0xad8		
	};
};
