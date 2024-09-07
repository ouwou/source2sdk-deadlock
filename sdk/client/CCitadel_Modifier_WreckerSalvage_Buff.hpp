#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x100
	// Has VTable
	class CCitadel_Modifier_WreckerSalvage_Buff : public client::CCitadelModifier
	{
	public:
		client::ParticleIndex_t m_nBuffParticle; // 0xc0		
	};
};
