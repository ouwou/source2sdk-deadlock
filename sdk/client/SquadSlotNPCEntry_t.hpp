#pragma once
#include "client/SquadSlotId_t.hpp"
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc
	// Has Trivial Destructor
	struct SquadSlotNPCEntry_t
	{
	public:
		client::SquadSlotId_t nId; // 0x0		
		CHandle<client::C_BaseEntity> hEnemy; // 0x4		
		bool bHoldForManualRelease; // 0x8		
	};
};
