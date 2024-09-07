#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Item_TrackingProjectileApplyModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x1658
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Item_Disarm_VData : public server::CCitadel_Item_TrackingProjectileApplyModifierVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier; // 0x1638		
		CEmbeddedSubclass<server::CCitadelModifier> m_DebuffModifier; // 0x1648		
	};
};
