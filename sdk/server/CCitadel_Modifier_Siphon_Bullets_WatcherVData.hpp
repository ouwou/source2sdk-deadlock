#pragma once
#include "server/CCitadelModifier.hpp"
#include "server/CCitadel_Modifier_StatStealBaseVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x628
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Siphon_Bullets_WatcherVData : public server::CCitadel_Modifier_StatStealBaseVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<server::CCitadelModifier> m_HealModifier; // 0x618		
	};
};
