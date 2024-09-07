#pragma once
#include "client/ParticleIndex_t.hpp"
#include "server/CCitadel_Item.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb38
	// Has VTable
	class CCitadel_Item_WarpStone : public server::CCitadel_Item
	{
	public:
		client::ParticleIndex_t m_nCastDelayParticleIndex; // 0xaf8		
	};
};
