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
	// Size: 0xa90
	// Has VTable
	// 
	// MNetworkVarNames "bool m_bShowLight"
	class CRectLight : public server::CBarnLight
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "RenderingChanged"
		bool m_bShowLight; // 0xa88		
	};
};
