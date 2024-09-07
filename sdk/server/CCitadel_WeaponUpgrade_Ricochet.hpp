#pragma once
#include "server/CCitadel_Item.hpp"
#include "server/CCitadel_Modifier_Ricochet_Proc.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb10
	// Has VTable
	class CCitadel_WeaponUpgrade_Ricochet : public server::CCitadel_Item
	{
	public:
		CModifierHandleTyped<server::CCitadel_Modifier_Ricochet_Proc> m_hRicochetModifier; // 0xaf8		
	};
};
