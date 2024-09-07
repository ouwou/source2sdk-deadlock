#pragma once
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x8
	// Has Trivial Destructor
	struct CCitadel_Ability_CardToss__Card_t
	{
	public:
		int32_t m_nCardNum; // 0x0		
		client::ParticleIndex_t m_nFxIdx; // 0x4		
	};
};
