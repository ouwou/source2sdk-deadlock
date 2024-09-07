#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_BreakablePropPickupVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x328
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_BreakablePropModifierPickupVData : public server::CCitadel_BreakablePropPickupVData
	{
	public:
		CEmbeddedSubclass<server::CCitadelModifier> m_sModifer; // 0x318		
	};
};
