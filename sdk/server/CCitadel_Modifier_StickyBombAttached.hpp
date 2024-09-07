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
	// Size: 0x108
	// Has VTable
	class CCitadel_Modifier_StickyBombAttached : public server::CCitadelModifier
	{
	public:
		float m_flDamage; // 0xc8		
		client::ParticleIndex_t m_nParticleIndex; // 0xcc		
	};
};