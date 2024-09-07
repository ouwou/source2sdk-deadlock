#pragma once
#include "client/CCitadelModifier.hpp"
#include "client/CCitadelModifierVData.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x610
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CCitadelModifierItemPickupTimerVData : public client::CCitadelModifierVData
	{
	public:
		// MPropertyGroupName "Timers"
		float m_TimerToSilence; // 0x5f8		
		float m_SilenceDuration; // 0x5fc		
		// MPropertyStartGroup "Modifiers"
		CEmbeddedSubclass<client::CCitadelModifier> m_SilenceModifier; // 0x600		
	};
};
