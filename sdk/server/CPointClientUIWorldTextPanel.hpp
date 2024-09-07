#pragma once
#include "server/CPointClientUIWorldPanel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb70
	// Has VTable
	// 
	// MNetworkVarNames "char m_messageText"
	class CPointClientUIWorldTextPanel : public server::CPointClientUIWorldPanel
	{
	public:
		// MNetworkEnable
		char m_messageText[512]; // 0x970		
		
		// Datamap fields:
		// void InputToggle; // 0x0
		// CUtlSymbolLarge InputSetMessage; // 0x0
		// int32_t InputSetIntMessage; // 0x0
	};
};
