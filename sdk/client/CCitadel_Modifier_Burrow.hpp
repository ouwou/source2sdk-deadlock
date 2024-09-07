#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/SatVolumeIndex_t.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x218
	// Has VTable
	class CCitadel_Modifier_Burrow : public client::CCitadelModifier
	{
	public:
		client::SatVolumeIndex_t m_nSatVolumeIndex; // 0xc0		
		entity2::GameTime_t m_flLastDamageTime; // 0xc4		
	};
};
