#pragma once
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x788
	// Has VTable
	// 
	// MNetworkVarNames "float32 m_flLightScale"
	// MNetworkVarNames "float32 m_Radius"
	class CSpotlightEnd : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		float m_flLightScale; // 0x768		
		// MNetworkEnable
		float m_Radius; // 0x76c		
		Vector m_vSpotlightDir; // 0x770		
		Vector m_vSpotlightOrg; // 0x77c		
	};
};
