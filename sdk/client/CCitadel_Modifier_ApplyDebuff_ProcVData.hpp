#pragma once
#include "client/CBaseModifier.hpp"
#include "client/CCitadel_Modifier_BaseEventProcVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x638
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadel_Modifier_ApplyDebuff_ProcVData : public client::CCitadel_Modifier_BaseEventProcVData
	{
	public:
		// MPropertyGroupName "Modifiers"
		CEmbeddedSubclass<client::CBaseModifier> m_DebuffModifier; // 0x628		
	};
};
