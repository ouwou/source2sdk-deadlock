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
	// Size: 0xb60
	// Has VTable
	// 
	// MNetworkVarNames "float m_flUpFactor"
	// MNetworkVarNames "float m_flBounceVelocity"
	class C_Citadel_Bounce_Pad : public client::CCitadelAnimatingModelEntity
	{
	public:
		// MNetworkEnable
		float m_flUpFactor; // 0xb48		
		// MNetworkEnable
		float m_flBounceVelocity; // 0xb4c		
		float m_flBarrelBounceVelocity; // 0xb50		
		float m_flBarrelUpFactor; // 0xb54		
		bool m_bSpeedOnLand; // 0xb58		
	};
};
