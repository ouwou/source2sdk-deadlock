#pragma once
#include "client/C_BaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x580
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
	class C_TonemapController2 : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		float m_flAutoExposureMin; // 0x558		
		// MNetworkEnable
		float m_flAutoExposureMax; // 0x55c		
		// MNetworkEnable
		float m_flTonemapPercentTarget; // 0x560		
		// MNetworkEnable
		float m_flTonemapPercentBrightPixels; // 0x564		
		// MNetworkEnable
		float m_flTonemapMinAvgLum; // 0x568		
		// MNetworkEnable
		float m_flExposureAdaptationSpeedUp; // 0x56c		
		// MNetworkEnable
		float m_flExposureAdaptationSpeedDown; // 0x570		
		// MNetworkEnable
		float m_flTonemapEVSmoothingRange; // 0x574		
		
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
