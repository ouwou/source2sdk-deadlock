#pragma once
#include "server/CBarnLight.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xa98
	// Has VTable
	// 
	// MNetworkVarNames "float m_flInnerAngle"
	// MNetworkVarNames "float m_flOuterAngle"
	// MNetworkVarNames "bool m_bShowLight"
	class COmniLight : public server::CBarnLight
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flInnerAngle; // 0xa88		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		float m_flOuterAngle; // 0xa8c		
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		bool m_bShowLight; // 0xa90		
	};
};
