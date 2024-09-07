#pragma once
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x500
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "float m_flAutoExposureMin"
	// MNetworkVarNames "float m_flAutoExposureMax"
	// MNetworkVarNames "float m_flTonemapPercentTarget"
	// MNetworkVarNames "float m_flTonemapPercentBrightPixels"
	// MNetworkVarNames "float m_flTonemapMinAvgLum"
	// MNetworkVarNames "float m_flExposureAdaptationSpeedUp"
	// MNetworkVarNames "float m_flExposureAdaptationSpeedDown"
	// MNetworkVarNames "float m_flTonemapEVSmoothingRange"
	class CTonemapController2 : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		float m_flAutoExposureMin; // 0x4d8		
		// MNetworkEnable
		float m_flAutoExposureMax; // 0x4dc		
		// MNetworkEnable
		float m_flTonemapPercentTarget; // 0x4e0		
		// MNetworkEnable
		float m_flTonemapPercentBrightPixels; // 0x4e4		
		// MNetworkEnable
		float m_flTonemapMinAvgLum; // 0x4e8		
		// MNetworkEnable
		float m_flExposureAdaptationSpeedUp; // 0x4ec		
		// MNetworkEnable
		float m_flExposureAdaptationSpeedDown; // 0x4f0		
		// MNetworkEnable
		float m_flTonemapEVSmoothingRange; // 0x4f4		
		
		// Datamap fields:
		// void InputEnable; // 0x0
		// void InputDisable; // 0x0
		// float InputSetMinExposure; // 0x0
		// float InputSetMaxExposure; // 0x0
		// float InputSetPercentTarget; // 0x0
		// float InputSetPercentBrightPixels; // 0x0
		// float InputSetMinAverageLuminosity; // 0x0
		// float InputSetExposureAdaptationSpeedUp; // 0x0
		// float InputSetExposureAdaptationSpeedDown; // 0x0
	};
};
