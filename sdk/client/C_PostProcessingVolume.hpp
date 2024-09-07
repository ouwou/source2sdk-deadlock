#pragma once
#include "client/C_BaseTrigger.hpp"
#include "resourcesystem/InfoForResourceTypeCPostProcessingResource.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x878
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
	class C_PostProcessingVolume : public client::C_BaseTrigger
	{
	private:
		[[maybe_unused]] uint8_t __pad0838[0x10]; // 0x838
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostSettings; // 0x848		
		// MNetworkEnable
		float m_flFadeDuration; // 0x850		
		// MNetworkEnable
		float m_flMinLogExposure; // 0x854		
		// MNetworkEnable
		float m_flMaxLogExposure; // 0x858		
		// MNetworkEnable
		float m_flMinExposure; // 0x85c		
		// MNetworkEnable
		float m_flMaxExposure; // 0x860		
		// MNetworkEnable
		float m_flExposureCompensation; // 0x864		
		// MNetworkEnable
		float m_flExposureFadeSpeedUp; // 0x868		
		// MNetworkEnable
		float m_flExposureFadeSpeedDown; // 0x86c		
		// MNetworkEnable
		float m_flTonemapEVSmoothingRange; // 0x870		
		// MNetworkEnable
		bool m_bMaster; // 0x874		
		// MNetworkEnable
		bool m_bExposureControl; // 0x875		
	};
};
