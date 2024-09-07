#pragma once
#include "server/CBaseEntity.hpp"
#include "server/CEnvWindShared.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x730
	// Has VTable
	// 
	// MNetworkVarNames "CEnvWindShared m_EnvWindShared"
	class CEnvWind : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		server::CEnvWindShared m_EnvWindShared; // 0x4d8		
		
		// Datamap fields:
		// int16_t m_EnvWindShared.m_iMinWind; // 0x4e8
		// int16_t m_EnvWindShared.m_iMaxWind; // 0x4ea
		// int32_t m_EnvWindShared.m_windRadius; // 0x4ec
		// int16_t m_EnvWindShared.m_iMinGust; // 0x4f0
		// int16_t m_EnvWindShared.m_iMaxGust; // 0x4f2
		// float m_EnvWindShared.m_flMinGustDelay; // 0x4f4
		// float m_EnvWindShared.m_flMaxGustDelay; // 0x4f8
		// int16_t m_EnvWindShared.m_iGustDirChange; // 0x500
		// float m_EnvWindShared.m_flGustDuration; // 0x4fc
		// int32_t m_EnvWindShared.m_iWindDir; // 0x514
		// float m_EnvWindShared.m_flWindSpeed; // 0x518
		// void CEnvWindWindThink; // 0x0
	};
};
