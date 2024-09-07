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
	// Size: 0x780
	// Has VTable
	// 
	// MNetworkVarNames "uint8 m_Flags"
	// MNetworkVarNames "uint8 m_LightStyle"
	// MNetworkVarNames "float32 m_Radius"
	// MNetworkVarNames "int32 m_Exponent"
	// MNetworkVarNames "float32 m_InnerAngle"
	// MNetworkVarNames "float32 m_OuterAngle"
	// MNetworkVarNames "float32 m_SpotRadius"
	class CDynamicLight : public server::CBaseModelEntity
	{
	public:
		uint8_t m_ActualFlags; // 0x768		
		// MNetworkEnable
		uint8_t m_Flags; // 0x769		
		// MNetworkEnable
		uint8_t m_LightStyle; // 0x76a		
		bool m_On; // 0x76b		
		// MNetworkEnable
		float m_Radius; // 0x76c		
		// MNetworkEnable
		int32_t m_Exponent; // 0x770		
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "360.000000"
		float m_InnerAngle; // 0x774		
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "360.000000"
		float m_OuterAngle; // 0x778		
		// MNetworkEnable
		float m_SpotRadius; // 0x77c		
		
		// Datamap fields:
		// void CDynamicLightDynamicLightThink; // 0x0
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
		// void InputToggle; // 0x0
		// Color _light; // 0x7fffffff
		// float pitch; // 0x7fffffff
		// int32_t spawnflags; // 0x7fffffff
	};
};
