#pragma once
#include "client/C_PhysicsProp.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0xc28
	// Has VTable
	// 
	// MNetworkIncludeByName "m_iHealth"
	// MNetworkIncludeByName "m_iMaxHealth"
	// MNetworkVarNames "int m_eLootType"
	class C_ItemCrate : public client::C_PhysicsProp
	{
	public:
		// MNetworkEnable
		int32_t m_eLootType; // 0xc20		
	};
};
