#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadel_Modifier_Silenced.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1f8
	// Has VTable
	class CCitadel_Modifier_Bubble : public server::CCitadel_Modifier_Silenced
	{
	public:
		float m_flDampingFactor; // 0xd0		
	private:
		[[maybe_unused]] uint8_t __pad00d4[0x11c]; // 0xd4
	public:
		client::ParticleIndex_t m_ParticleIndex; // 0x1f0		
	};
};
