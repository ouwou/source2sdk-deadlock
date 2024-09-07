#pragma once
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x7b0
	// Has VTable
	// 
	// MNetworkIncludeByName "m_clrRender"
	// MNetworkVarNames "Vector m_vDirection"
	// MNetworkVarNames "Color m_clrOverlay"
	// MNetworkVarNames "string_t m_iszEffectName"
	// MNetworkVarNames "string_t m_iszSSEffectName"
	// MNetworkVarNames "bool m_bOn"
	// MNetworkVarNames "bool m_bmaxColor"
	// MNetworkVarNames "float32 m_flSize"
	// MNetworkVarNames "float32 m_flRotation"
	// MNetworkVarNames "float32 m_flHazeScale"
	// MNetworkVarNames "float32 m_flAlphaHaze"
	// MNetworkVarNames "float32 m_flAlphaHdr"
	// MNetworkVarNames "float32 m_flAlphaScale"
	// MNetworkVarNames "float32 m_flHDRColorScale"
	// MNetworkVarNames "float32 m_flFarZScale"
	class CSun : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		Vector m_vDirection; // 0x768		
		// MNetworkEnable
		Color m_clrOverlay; // 0x774		
		// MNetworkEnable
		CUtlSymbolLarge m_iszEffectName; // 0x778		
		// MNetworkEnable
		CUtlSymbolLarge m_iszSSEffectName; // 0x780		
		// MNetworkEnable
		bool m_bOn; // 0x788		
		// MNetworkEnable
		bool m_bmaxColor; // 0x789		
	private:
		[[maybe_unused]] uint8_t __pad078a[0x2]; // 0x78a
	public:
		// MNetworkEnable
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "100.000000"
		float m_flSize; // 0x78c		
		// MNetworkEnable
		// MNetworkMinValue "-360.000000"
		// MNetworkMaxValue "360.000000"
		float m_flRotation; // 0x790		
		// MNetworkEnable
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "100.000000"
		float m_flHazeScale; // 0x794		
		// MNetworkEnable
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "2.000000"
		float m_flAlphaHaze; // 0x798		
		// MNetworkEnable
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "2.000000"
		float m_flAlphaHdr; // 0x79c		
		// MNetworkEnable
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "2.000000"
		float m_flAlphaScale; // 0x7a0		
		// MNetworkEnable
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "100.000000"
		float m_flHDRColorScale; // 0x7a4		
		// MNetworkEnable
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1.000000"
		float m_flFarZScale; // 0x7a8		
		
		// Datamap fields:
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
		// Color InputSetColor; // 0x0
	};
};
