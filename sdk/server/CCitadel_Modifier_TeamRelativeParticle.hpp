#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelModifier.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xd0
	// Has VTable
	class CCitadel_Modifier_TeamRelativeParticle : public server::CCitadelModifier
	{
	public:
		client::ParticleIndex_t m_nParentViewParticle; // 0xc8		
		client::ParticleIndex_t m_nOtherPlayerViewParticle; // 0xcc		
	};
};
