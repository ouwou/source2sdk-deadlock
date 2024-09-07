#pragma once
#include "client/C_BaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x840
	// Has VTable
	// 
	// MNetworkVarNames "float32 m_flLightScale"
	// MNetworkVarNames "float32 m_Radius"
	class C_SpotlightEnd : public client::C_BaseModelEntity
	{
	public:
		// MNetworkEnable
		float m_flLightScale; // 0x830		
		// MNetworkEnable
		float m_Radius; // 0x834		
	};
};
