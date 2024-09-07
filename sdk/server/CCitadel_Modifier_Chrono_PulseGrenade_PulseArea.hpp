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
	// Size: 0x220
	// Has VTable
	class CCitadel_Modifier_Chrono_PulseGrenade_PulseArea : public server::CCitadelModifier
	{
	public:
		int32_t m_iPulseCount; // 0xc8		
		client::ParticleIndex_t m_hPreviewRingParticle; // 0xcc		
	};
};
