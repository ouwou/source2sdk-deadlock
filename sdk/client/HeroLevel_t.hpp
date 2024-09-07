#pragma once
#include "client/BonusUpgrade_t.hpp"
#include "client/ECurrencyType.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x50
	// 
	// MGetKV3ClassDefaults
	struct HeroLevel_t
	{
	public:
		uint32_t m_unRequiredGold; // 0x0		
		CUtlOrderedMap<client::ECurrencyType,int32_t> m_mapBonusCurrencies; // 0x8		
		bool m_bUseStandardUpgrade; // 0x30		
	private:
		[[maybe_unused]] uint8_t __pad0031[0x7]; // 0x31
	public:
		CUtlVector<client::BonusUpgrade_t> m_vecBonusUpgrades; // 0x38		
	};
};
