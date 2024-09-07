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
	class CCitadel_Modifier_Stunned : public server::CCitadelModifier
	{
	public:
		bool m_bEnabled; // 0xc8		
	private:
		[[maybe_unused]] uint8_t __pad00c9[0x3]; // 0xc9
	public:
		client::ParticleIndex_t m_nParticleIndex; // 0xcc		
	};
};
