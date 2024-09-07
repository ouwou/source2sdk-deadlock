#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadelBaseAbility.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xae0
	// Has VTable
	class CCitadel_Ability_HornetMark : public server::CCitadelBaseAbility
	{
	public:
		client::ParticleIndex_t m_nFXIndex; // 0xad8		
	};
};
