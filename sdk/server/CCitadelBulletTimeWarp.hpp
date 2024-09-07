#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x988
	// Has VTable
	// 
	// MNetworkVarNames "float m_flBulletTimeScale"
	// MNetworkVarNames "float m_flProjectileTimeScale"
	// MNetworkVarNames "GameTime_t m_flExpireTime"
	// MNetworkVarNames "float m_flStopDuration"
	class CCitadelBulletTimeWarp : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		float m_flBulletTimeScale; // 0x768		
		// MNetworkEnable
		float m_flProjectileTimeScale; // 0x76c		
		// MNetworkEnable
		entity2::GameTime_t m_flExpireTime; // 0x770		
		// MNetworkEnable
		float m_flStopDuration; // 0x774		
	};
};
