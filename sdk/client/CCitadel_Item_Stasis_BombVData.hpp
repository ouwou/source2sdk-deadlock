#pragma once
#include "client/CBaseModifier.hpp"
#include "client/CCitadel_Item_BubbleVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1648
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Item_Stasis_BombVData : public client::CCitadel_Item_BubbleVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_AuraModifier; // 0x1638		
	};
};
