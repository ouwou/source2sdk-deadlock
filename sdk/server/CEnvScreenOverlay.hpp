#pragma once
#include "entity2/GameTime_t.hpp"
#include "server/CPointEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x560
	// Has VTable
	// 
	// MNetworkVarNames "string_t m_iszOverlayNames"
	// MNetworkVarNames "float32 m_flOverlayTimes"
	// MNetworkVarNames "GameTime_t m_flStartTime"
	// MNetworkVarNames "int32 m_iDesiredOverlay"
	// MNetworkVarNames "bool m_bIsActive"
	class CEnvScreenOverlay : public server::CPointEntity
	{
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_iszOverlayNames[10]; // 0x4d8		
		// MNetworkEnable
		// MNetworkBitCount "11"
		// MNetworkMinValue "-1.000000"
		// MNetworkMaxValue "63.000000"
		float m_flOverlayTimes[10]; // 0x528		
		// MNetworkEnable
		entity2::GameTime_t m_flStartTime; // 0x550		
		// MNetworkEnable
		int32_t m_iDesiredOverlay; // 0x554		
		// MNetworkEnable
		bool m_bIsActive; // 0x558		
		
		// Datamap fields:
		// void InputStartOverlay; // 0x0
		// void InputStopOverlay; // 0x0
		// int32_t InputSwitchOverlay; // 0x0
	};
};
