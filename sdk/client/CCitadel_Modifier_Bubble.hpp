#pragma once
#include "client/CCitadel_Modifier_Silenced.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1e8
	// Has VTable
	class CCitadel_Modifier_Bubble : public client::CCitadel_Modifier_Silenced
	{
	public:
		float m_flDampingFactor; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00c4[0x11c]; // 0xc4
	public:
		client::ParticleIndex_t m_ParticleIndex; // 0x1e0		
	};
};
