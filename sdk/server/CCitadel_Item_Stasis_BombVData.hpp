#pragma once
#include "server/CBaseModifier.hpp"
#include "server/CCitadel_Item_BubbleVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1648
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Item_Stasis_BombVData : public server::CCitadel_Item_BubbleVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_AuraModifier; // 0x1638		
	};
};
