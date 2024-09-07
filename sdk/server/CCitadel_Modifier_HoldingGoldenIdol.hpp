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
	// Size: 0x140
	// Has VTable
	class CCitadel_Modifier_HoldingGoldenIdol : public server::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c8[0x70]; // 0xc8
	public:
		client::ParticleIndex_t m_iIdolParticle; // 0x138		
		int32_t m_nGoldValue; // 0x13c		
	};
};
