#pragma once
#include "client/CitadelAbilityVData.hpp"
#include "client/EModTier_t.hpp"
#include "client/EShopFilters_t.hpp"
#include "client/ItemSectionInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1538
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CitadelItemVData : public client::CitadelAbilityVData
	{
	private:
		[[maybe_unused]] uint8_t __pad14f0[0x4]; // 0x14f0
	public:
		client::EModTier_t m_iItemTier; // 0x14f4		
		int8_t m_nUpgradeSlotCost; // 0x14f5		
		bool m_bWarnIfNoAffectedAbilities; // 0x14f6		
		bool m_bRequiresChargedAbility; // 0x14f7		
		bool m_bRequiresChanelledAbility; // 0x14f8		
	private:
		[[maybe_unused]] uint8_t __pad14f9[0x7]; // 0x14f9
	public:
		CUtlVector<CSubclassName<4>> m_vecComponentItems; // 0x1500		
		bool m_bShowTextDescription; // 0x1518		
		bool m_bIsDefensiveItem; // 0x1519		
		client::EShopFilters_t m_eShopFilters; // 0x151a		
	private:
		[[maybe_unused]] uint8_t __pad151c[0x4]; // 0x151c
	public:
		// MPropertyFriendlyName "Item Tooltips"
		CUtlVector<client::ItemSectionInfo_t> m_vecTooltipSectionInfo; // 0x1520		
	};
};
