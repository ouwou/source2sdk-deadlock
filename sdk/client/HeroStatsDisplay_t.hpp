#pragma once
#include "client/EStatsType.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x90
	// 
	// MGetKV3ClassDefaults
	struct HeroStatsDisplay_t
	{
	public:
		// MPropertyDescription "What stats do we want to show in the weapon header area?"
		CUtlVector<client::EStatsType> m_vecWeaponHeaderStats; // 0x0		
		// MPropertyDescription "What stats do we want to show in the weapon stats area?"
		CUtlVector<client::EStatsType> m_vecWeaponStats; // 0x18		
		// MPropertyDescription "What stats do we want to show in the health header area?"
		CUtlVector<client::EStatsType> m_vecHealthHeaderStats; // 0x30		
		// MPropertyDescription "What stats do we want to show in the health stats area?"
		CUtlVector<client::EStatsType> m_vecHealthStats; // 0x48		
		// MPropertyDescription "What stats do we want to show in the magic header area?"
		CUtlVector<client::EStatsType> m_vecMagicHeaderStats; // 0x60		
		// MPropertyDescription "What stats do we want to show in the magic stats area?"
		CUtlVector<client::EStatsType> m_vecMagicStats; // 0x78		
	};
};
