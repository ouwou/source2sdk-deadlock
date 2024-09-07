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
	// Size: 0xc8
	// Has VTable
	class CModifier_CloakingDevice_Active_Ambush : public client::CCitadelModifier
	{
	public:
		client::ParticleIndex_t m_nAmbushParticle; // 0xc0		
	};
};
