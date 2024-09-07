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
	// Size: 0x110
	// Has VTable
	class CCitadel_Modifier_StickyBombAttached : public client::CCitadelModifier
	{
	public:
		bool m_bDetonateSoundStarted; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00c1[0xb]; // 0xc1
	public:
		float m_flDamage; // 0xcc		
		client::ParticleIndex_t m_nParticleIndex; // 0xd0		
	};
};
