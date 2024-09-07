#pragma once
#include "client/CBaseModifier.hpp"
#include "client/CCitadel_Item_TrackingProjectileApplyModifierVData.hpp"
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
	class CItem_WitheringWhip_VData : public client::CCitadel_Item_TrackingProjectileApplyModifierVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_DebuffModifier; // 0x1638		
	};
};
