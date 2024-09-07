#pragma once
#include "client/C_BarnLight.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xb80
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bShowLight"
	class C_RectLight : public client::C_BarnLight
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		bool m_bShowLight; // 0xb78		
	};
};
