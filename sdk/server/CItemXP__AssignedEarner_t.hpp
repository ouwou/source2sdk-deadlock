#pragma once
#include "client/ECurrencySource.hpp"
#include "client/EDenyDistributionType.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x10
	// Has Trivial Destructor
	struct CItemXP__AssignedEarner_t
	{
	public:
		client::ECurrencySource m_eSource; // 0x0		
		int32_t m_iBounty; // 0x4		
		client::EDenyDistributionType m_eDenyType; // 0x8		
	};
};
