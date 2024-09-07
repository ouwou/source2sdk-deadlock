#pragma once
#include "client/CCitadelAnimatingModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xaa0
	// Has VTable
	// 
	// MNetworkVarNames "float m_flProgress"
	// MNetworkVarNames "int m_nNumPushers"
	class C_CitadelPayload : public client::CCitadelAnimatingModelEntity
	{
	public:
		// MNetworkEnable
		float m_flProgress; // 0xa98		
		// MNetworkEnable
		int32_t m_nNumPushers; // 0xa9c		
	};
};
