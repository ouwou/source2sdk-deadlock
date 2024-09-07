#pragma once
#include "client/EStatsType.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 4
	// Size: 0x8
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct HeroScalingStat_t
	{
	public:
		client::EStatsType eScalingStat; // 0x0		
		float flScale; // 0x4		
	};
};
