#pragma once
#include "resourcesystem/InfoForResourceTypeCPostProcessingResource.hpp"
#include "server/CBaseTrigger.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x978
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "HPostProcessingStrong m_hPostSettings"
	// MNetworkVarNames "float m_flFadeDuration"
	// MNetworkVarNames "float m_flMinLogExposure"
	// MNetworkVarNames "float m_flMaxLogExposure"
	// MNetworkVarNames "float m_flMinExposure"
	// MNetworkVarNames "float m_flMaxExposure"
	// MNetworkVarNames "float m_flExposureCompensation"
	// MNetworkVarNames "float m_flExposureFadeSpeedUp"
	// MNetworkVarNames "float m_flExposureFadeSpeedDown"
	// MNetworkVarNames "float m_flTonemapEVSmoothingRange"
	// MNetworkVarNames "bool m_bMaster"
	// MNetworkVarNames "bool m_bExposureControl"
	class CPostProcessingVolume : public server::CBaseTrigger
	{
	private:
		[[maybe_unused]] uint8_t __pad0938[0x10]; // 0x938
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostSettings; // 0x948		
		// MNetworkEnable
		float m_flFadeDuration; // 0x950		
		// MNetworkEnable
		float m_flMinLogExposure; // 0x954		
		// MNetworkEnable
		float m_flMaxLogExposure; // 0x958		
		// MNetworkEnable
		float m_flMinExposure; // 0x95c		
		// MNetworkEnable
		float m_flMaxExposure; // 0x960		
		// MNetworkEnable
		float m_flExposureCompensation; // 0x964		
		// MNetworkEnable
		float m_flExposureFadeSpeedUp; // 0x968		
		// MNetworkEnable
		float m_flExposureFadeSpeedDown; // 0x96c		
		// MNetworkEnable
		float m_flTonemapEVSmoothingRange; // 0x970		
		// MNetworkEnable
		bool m_bMaster; // 0x974		
		// MNetworkEnable
		bool m_bExposureControl; // 0x975		
	};
};
