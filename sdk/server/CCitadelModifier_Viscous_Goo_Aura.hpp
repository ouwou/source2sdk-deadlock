#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelModifierAura.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xf0
	// Has VTable
	class CCitadelModifier_Viscous_Goo_Aura : public server::CCitadelModifierAura
	{
	public:
		client::ParticleIndex_t m_AuraParticle; // 0xe8		
	};
};
