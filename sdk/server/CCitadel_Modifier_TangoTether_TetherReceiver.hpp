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
	// Size: 0x110
	// Has VTable
	class CCitadel_Modifier_TangoTether_TetherReceiver : public server::CCitadelModifier
	{
	public:
		client::ParticleIndex_t m_nFXIndex; // 0xc8		
	};
};
