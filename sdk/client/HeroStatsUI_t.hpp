#pragma once
#include "client/ECitadelWeaponTypes.hpp"
#include "client/EStatsType.hpp"
#include "client/StatWithCategory_t.hpp"
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
	struct HeroStatsUI_t
	{
	public:
		// MPropertyDescription "The loc string of the heroes weapon name"
		CUtlString m_strWeaponNameLocString; // 0x0		
		// MPropertyDescription "The location of the weapon image"
		CUtlString m_strWeaponImage; // 0x8		
		// MPropertyDescription "The type of weapon this hero has. This changes the generic gun image and gun name."
		client::ECitadelWeaponTypes m_eWeaponType; // 0x10		
		// MPropertyDescription "What stat do we show in the weapon UI panel?"
		client::EStatsType m_eWeaponStatDisplay; // 0x14		
		// MPropertyDescription "What stats do we want to show?"
		CUtlVector<client::StatWithCategory_t> m_vecDisplayStats; // 0x18		
	};
};
