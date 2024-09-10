#pragma once
#include "server/CCitadelAnimatingModelEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CCitadelBaseAbility;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0xb38
	// Has VTable
	// 
	// MNetworkVarNames "float m_flUpFactor"
	// MNetworkVarNames "float m_flBounceVelocity"
	class CCitadel_Bounce_Pad : public server::CCitadelAnimatingModelEntity
	{
	public:
		CHandle<server::CCitadelBaseAbility> m_hAbility; // 0xb20		
		// MNetworkEnable
		float m_flUpFactor; // 0xb24		
		// MNetworkEnable
		float m_flBounceVelocity; // 0xb28		
		float m_flBarrelBounceVelocity; // 0xb2c		
		float m_flBarrelUpFactor; // 0xb30		
		bool m_bSpeedOnLand; // 0xb34		
	};
};
