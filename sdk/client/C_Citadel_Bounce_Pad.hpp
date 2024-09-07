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
	// Size: 0xab0
	// Has VTable
	// 
	// MNetworkVarNames "float m_flUpFactor"
	// MNetworkVarNames "float m_flBounceVelocity"
	class C_Citadel_Bounce_Pad : public client::CCitadelAnimatingModelEntity
	{
	public:
		// MNetworkEnable
		float m_flUpFactor; // 0xa98		
		// MNetworkEnable
		float m_flBounceVelocity; // 0xa9c		
		float m_flBarrelBounceVelocity; // 0xaa0		
		float m_flBarrelUpFactor; // 0xaa4		
		bool m_bSpeedOnLand; // 0xaa8		
	};
};
