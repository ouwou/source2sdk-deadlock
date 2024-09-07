#pragma once
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
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
	struct AISquadSlotTargetInfo_t
	{
	public:
		CHandle<server::CBaseEntity> hTarget; // 0x0		
		CBitVec<48> slots; // 0x4		
		CBitVec<48> inactive_slots_by_mode; // 0xc		
	};
};
