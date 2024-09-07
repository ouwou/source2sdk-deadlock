#pragma once
#include "server/CBaseModifier.hpp"
#include "server/CCitadel_Item_TrackingProjectileApplyModifierVData.hpp"
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
	class CItem_WitheringWhip_VData : public server::CCitadel_Item_TrackingProjectileApplyModifierVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<server::CBaseModifier> m_DebuffModifier; // 0x1638		
	};
};
