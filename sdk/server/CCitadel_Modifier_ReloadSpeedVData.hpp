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
	// Size: 0x600
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ReloadSpeedVData : public server::CCitadelModifierVData
	{
	public:
		float m_flReloadSpeedPercent; // 0x5f8		
		bool m_bDestroyAfterReload; // 0x5fc		
	};
};
