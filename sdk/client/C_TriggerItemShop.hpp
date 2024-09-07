#pragma once
#include "client/C_BaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x840
	// Has VTable
	// 
	// MNetworkVarNames "string_t m_iszSoundName"
	class C_TriggerItemShop : public client::C_BaseTrigger
	{
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_iszSoundName; // 0x838		
	};
};
