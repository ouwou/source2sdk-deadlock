#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Enumerator count: 5
	// Alignment: 4
	// Size: 0x4
	enum class EDenyDistributionType : std::uint32_t
	{
		EDenyToDenier = 0x0,
		EDenyToDenierNearbyTeammates = 0x1,
		EDenyToDenierTeam = 0x2,
		EDenyToNobody = 0x3,
		EDenyTypesCount = 0x4,
	};
};
