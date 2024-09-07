#pragma once
#include "client/C_BaseModelEntity.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x858
	// Has VTable
	// 
	// MNetworkVarNames "float m_flBulletTimeScale"
	// MNetworkVarNames "float m_flProjectileTimeScale"
	// MNetworkVarNames "GameTime_t m_flExpireTime"
	// MNetworkVarNames "float m_flStopDuration"
	class CCitadelBulletTimeWarp : public client::C_BaseModelEntity
	{
	public:
		// MNetworkEnable
		float m_flBulletTimeScale; // 0x830		
		// MNetworkEnable
		float m_flProjectileTimeScale; // 0x834		
		// MNetworkEnable
		entity2::GameTime_t m_flExpireTime; // 0x838		
		// MNetworkEnable
		float m_flStopDuration; // 0x83c		
	};
};
