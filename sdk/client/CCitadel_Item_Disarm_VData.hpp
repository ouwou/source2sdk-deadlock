#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Item_TrackingProjectileApplyModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x1658
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Item_Disarm_VData : public client::CCitadel_Item_TrackingProjectileApplyModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_BuffModifier; // 0x1638		
		CEmbeddedSubclass<client::CCitadelModifier> m_DebuffModifier; // 0x1648		
	};
};
