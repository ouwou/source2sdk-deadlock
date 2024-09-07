#pragma once
#include "client/EAbilityUpgradeType.hpp"
#include "client/EStatsType.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x18
	// 
	// MGetKV3ClassDefaults
	// MPropertyAutoExpandSelf
	struct AbilityUpgrade_t__PropertyUpgrade_t
	{
	public:
		CUtlString m_strPropertyName; // 0x0		
		CUtlString m_strBonus; // 0x8		
		client::EAbilityUpgradeType m_eUpgradeType; // 0x10		
		// MPropertyDescription "If set, only applies the scaling of this upgrade to the specified stat"
		// MPropertySuppressExpr "( m_eUpgradeType != EAddToScale && m_eUpgradeType != EMultiplyScale )"
		client::EStatsType m_eScaleStatFilter; // 0x14		
	};
};
