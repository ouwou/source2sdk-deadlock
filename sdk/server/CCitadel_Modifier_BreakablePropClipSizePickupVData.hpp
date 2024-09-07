#pragma once
#include "server/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x608
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_BreakablePropClipSizePickupVData : public server::CCitadelModifierVData
	{
	public:
		// MPropertyStartGroup "Powerup Values"
		float m_flClipSize; // 0x5f8		
		int32_t m_nClipCount; // 0x5fc		
		float m_flFireRate; // 0x600		
	};
};
