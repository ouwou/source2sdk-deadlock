#pragma once
#include "client/ECitadelStatCategory.hpp"
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
	struct StatWithCategory_t
	{
	public:
		// MPropertyDescription "The Stat Type"
		client::EStatsType m_eStatType; // 0x0		
		// MPropertyDescription "What Category does this stat belong in?"
		client::ECitadelStatCategory m_eStatCategory; // 0x4		
	};
};
