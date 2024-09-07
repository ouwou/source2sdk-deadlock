#pragma once
#include "client/C_CitadelProjectile.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x9d8
	// Has VTable
	// 
	// MNetworkVarNames "float m_flWidth"
	// MNetworkVarNames "GameTime_t m_tDieTime"
	class C_Projectile_Stomp_Projectile : public client::C_CitadelProjectile
	{
	public:
		// MNetworkEnable
		float m_flWidth; // 0x8b8		
		// MNetworkEnable
		entity2::GameTime_t m_tDieTime; // 0x8bc		
	};
};
