#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelModifierAura_Cone.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x130
	// Has VTable
	class CCitadel_Modifier_Bull_Heal_Aura : public server::CCitadelModifierAura_Cone
	{
	public:
		QAngle m_playerAngles; // 0xe8		
		client::ParticleIndex_t m_ConeParticle; // 0xf4		
	};
};
