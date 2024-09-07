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
	// Size: 0xb18
	// Has VTable
	class CCitadel_Ability_LockDown : public server::CCitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_CastParticle; // 0xad8		
	};
};
