#pragma once
#include "client/C_BaseEntity.hpp"
#include "client/C_EnvWindShared.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x760
	// Has VTable
	// 
	// MNetworkVarNames "CEnvWindShared m_EnvWindShared"
	class C_EnvWindClientside : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		// MNetworkDisable
		client::C_EnvWindShared m_EnvWindShared; // 0x558		
	};
};
