#pragma once
#include "client/C_BaseToggle.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x838
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bIsUsable"
	class C_BaseDoor : public client::C_BaseToggle
	{
	public:
		// MNetworkEnable
		bool m_bIsUsable; // 0x830		
	};
};
