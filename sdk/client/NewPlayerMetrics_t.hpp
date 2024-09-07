#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	struct NewPlayerMetrics_t
	{
	public:
		CUtlString m_strSkillTierName; // 0x0		
		int32_t m_NetWorth; // 0x8		
		int32_t m_DamageTaken; // 0xc		
		int32_t m_BossDamage; // 0x10		
		int32_t m_PlayerDamage; // 0x14		
		int32_t m_LastHits; // 0x18		
		int32_t m_OrbsSecured; // 0x1c		
		int32_t m_OrbsDenied; // 0x20		
		int32_t m_AbilitiesUpgraded; // 0x24		
		int32_t m_ModsPurchased; // 0x28		
	};
};
