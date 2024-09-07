#pragma once
#include "client/C_BaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x560
	// Has VTable
	// 
	// MNetworkVarNames "float32 m_flFadeStartDist"
	// MNetworkVarNames "float32 m_flFadeEndDist"
	class C_EnvDetailController : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		float m_flFadeStartDist; // 0x558		
		// MNetworkEnable
		float m_flFadeEndDist; // 0x55c		
	};
};
