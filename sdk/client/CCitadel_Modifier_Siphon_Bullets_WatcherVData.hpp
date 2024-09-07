#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadel_Modifier_StatStealBaseVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x628
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_Siphon_Bullets_WatcherVData : public client::CCitadel_Modifier_StatStealBaseVData
	{
	public:
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_HealModifier; // 0x618		
	};
};
