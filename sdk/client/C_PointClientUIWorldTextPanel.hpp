#pragma once
#include "client/C_PointClientUIWorldPanel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 16
	// Size: 0xc90
	// Has VTable
	// 
	// MNetworkVarNames "char m_messageText"
	class C_PointClientUIWorldTextPanel : public client::C_PointClientUIWorldPanel
	{
	public:
		// MNetworkEnable
		char m_messageText[512]; // 0xa90		
		
		// Datamap fields:
		// void InputToggle; // 0x0
		// CUtlSymbolLarge InputSetMessage; // 0x0
		// int32_t InputSetIntMessage; // 0x0
	};
};
