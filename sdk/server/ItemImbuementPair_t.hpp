#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x38
	// Has VTable
	// 
	// MNetworkVarNames "AbilityID_t m_SourceItemID"
	// MNetworkVarNames "AbilityID_t m_TargetAbilityID"
	struct ItemImbuementPair_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x30]; // 0x0
	public:
		// MNetworkEnable
		CUtlStringToken m_SourceItemID; // 0x30		
		// MNetworkEnable
		CUtlStringToken m_TargetAbilityID; // 0x34		
	};
};
