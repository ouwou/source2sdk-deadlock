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
	// Size: 0x1a8
	// Has VTable
	class CCitadel_Modifier_ColdFrontAOE : public client::CCitadelModifier
	{
	private:
		[[maybe_unused]] uint8_t __pad00c0[0xe0]; // 0xc0
	public:
		client::ParticleIndex_t m_hAOEEffect; // 0x1a0		
	};
};
