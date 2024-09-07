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
	class CModifier_CloakingDevice_Active_Ambush : public server::CCitadelModifier
	{
	public:
		client::ParticleIndex_t m_nAmbushParticle; // 0xc8		
	};
};
