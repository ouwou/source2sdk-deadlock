#pragma once
#include "client/C_PointEntity.hpp"
#include "entity2/GameTime_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x5e8
	// Has VTable
	// 
	// MNetworkVarNames "string_t m_iszOverlayNames"
	// MNetworkVarNames "float32 m_flOverlayTimes"
	// MNetworkVarNames "GameTime_t m_flStartTime"
	// MNetworkVarNames "int32 m_iDesiredOverlay"
	// MNetworkVarNames "bool m_bIsActive"
	class C_EnvScreenOverlay : public client::C_PointEntity
	{
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_iszOverlayNames[10]; // 0x558		
		// MNetworkEnable
		// MNetworkBitCount "11"
		// MNetworkMinValue "-1.000000"
		// MNetworkMaxValue "63.000000"
		float m_flOverlayTimes[10]; // 0x5a8		
		// MNetworkEnable
		entity2::GameTime_t m_flStartTime; // 0x5d0		
		// MNetworkEnable
		int32_t m_iDesiredOverlay; // 0x5d4		
		// MNetworkEnable
		bool m_bIsActive; // 0x5d8		
		bool m_bWasActive; // 0x5d9		
	private:
		[[maybe_unused]] uint8_t __pad05da[0x2]; // 0x5da
	public:
		int32_t m_iCachedDesiredOverlay; // 0x5dc		
		int32_t m_iCurrentOverlay; // 0x5e0		
		entity2::GameTime_t m_flCurrentOverlayTime; // 0x5e4		
	};
};
