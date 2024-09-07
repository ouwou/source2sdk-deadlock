#pragma once
#include "client/ECurrencySource.hpp"
#include "client/EDenyDistributionType.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelPlayerPawn;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x14
	// Has Trivial Destructor
	struct COrbSpawner__Bounty_t
	{
	public:
		int32_t m_nGoldToGive; // 0x0		
		int32_t m_nNumOrbs; // 0x4		
		client::EDenyDistributionType m_eDenyType; // 0x8		
		client::ECurrencySource m_eSource; // 0xc		
		CHandle<server::CCitadelPlayerPawn> m_hTarget; // 0x10		
	};
};
