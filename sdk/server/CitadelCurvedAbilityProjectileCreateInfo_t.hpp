#pragma once
#include "server/CitadelAbilityProjectileCreateInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x58
	struct CitadelCurvedAbilityProjectileCreateInfo_t : public server::CitadelAbilityProjectileCreateInfo_t
	{
	public:
		float m_flTimeToReturn; // 0x50		
	};
};
