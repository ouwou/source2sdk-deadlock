#pragma once
#include "server/CBaseEntity.hpp"
#include "server/sky3dparams_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x578
	// Has VTable
	// 
	// MNetworkVarNames "sky3dparams_t m_skyboxData"
	// MNetworkVarNames "CUtlStringToken m_skyboxSlotToken"
	class CSkyCamera : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		server::sky3dparams_t m_skyboxData; // 0x4d8		
		// MNetworkEnable
		CUtlStringToken m_skyboxSlotToken; // 0x568		
		bool m_bUseAngles; // 0x56c		
	private:
		[[maybe_unused]] uint8_t __pad056d[0x3]; // 0x56d
	public:
		server::CSkyCamera* m_pNext; // 0x570		
		
		// Datamap fields:
		// int16_t m_skyboxData.scale; // 0x4e0
		// Vector m_skyboxData.origin; // 0x4e4
		// bool m_skyboxData.bClip3DSkyBoxNearToWorldFar; // 0x4f0
		// float m_skyboxData.flClip3DSkyBoxNearToWorldFarOffset; // 0x4f4
		// bool m_skyboxData.fog.enable; // 0x55c
		// bool m_skyboxData.fog.blend; // 0x55d
		// Vector m_skyboxData.fog.dirPrimary; // 0x500
		// Color m_skyboxData.fog.colorPrimary; // 0x50c
		// Color m_skyboxData.fog.colorSecondary; // 0x510
		// float m_skyboxData.fog.start; // 0x51c
		// float m_skyboxData.fog.end; // 0x520
		// float m_skyboxData.fog.maxdensity; // 0x528
		// void InputActivateSkybox; // 0x0
	};
};
