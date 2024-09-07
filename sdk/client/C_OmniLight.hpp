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
	// Size: 0xb88
	// Has VTable
	// 
	// MNetworkVarNames "float m_flInnerAngle"
	// MNetworkVarNames "float m_flOuterAngle"
	// MNetworkVarNames "bool m_bShowLight"
	class C_OmniLight : public client::C_BarnLight
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flInnerAngle; // 0xb78		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flOuterAngle; // 0xb7c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		bool m_bShowLight; // 0xb80		
	};
};
