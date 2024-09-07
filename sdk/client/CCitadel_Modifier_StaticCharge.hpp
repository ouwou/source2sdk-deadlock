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
	// Size: 0x140
	// Has VTable
	class CCitadel_Modifier_StaticCharge : public client::CCitadelModifier
	{
	public:
		client::ParticleIndex_t m_hRingEffect; // 0xc0		
	private:
		[[maybe_unused]] uint8_t __pad00c4[0x74]; // 0xc4
	public:
		float m_flRadius; // 0x138		
	};
};
