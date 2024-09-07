#pragma once
#include "client/CCitadelModifierAura_Cone.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x128
	// Has VTable
	class CCitadel_Modifier_Bull_Heal_Aura : public client::CCitadelModifierAura_Cone
	{
	public:
		QAngle m_playerAngles; // 0xe0		
		client::ParticleIndex_t m_ConeParticle; // 0xec		
	};
};
