#pragma once
#include "server/CBaseFire.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x4f0
	// Has VTable
	// 
	// MNetworkVarNames "int32 m_nFlameModelIndex"
	// MNetworkVarNames "int32 m_nFlameFromAboveModelIndex"
	class CFireSmoke : public server::CBaseFire
	{
	public:
		// MNetworkEnable
		int32_t m_nFlameModelIndex; // 0x4e8		
		// MNetworkEnable
		int32_t m_nFlameFromAboveModelIndex; // 0x4ec		
	};
};
