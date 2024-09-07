#pragma once
#include "client/C_BaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x858
	// Has VTable
	// 
	// MNetworkVarNames "uint8 m_Flags"
	// MNetworkVarNames "uint8 m_LightStyle"
	// MNetworkVarNames "float32 m_Radius"
	// MNetworkVarNames "int32 m_Exponent"
	// MNetworkVarNames "float32 m_InnerAngle"
	// MNetworkVarNames "float32 m_OuterAngle"
	// MNetworkVarNames "float32 m_SpotRadius"
	class C_DynamicLight : public client::C_BaseModelEntity
	{
	public:
		// MNetworkEnable
		uint8_t m_Flags; // 0x830		
		// MNetworkEnable
		uint8_t m_LightStyle; // 0x831		
	private:
		[[maybe_unused]] uint8_t __pad0832[0x2]; // 0x832
	public:
		// MNetworkEnable
		float m_Radius; // 0x834		
		// MNetworkEnable
		int32_t m_Exponent; // 0x838		
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "360.000000"
		float m_InnerAngle; // 0x83c		
		// MNetworkEnable
		// MNetworkBitCount "8"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "360.000000"
		float m_OuterAngle; // 0x840		
		// MNetworkEnable
		float m_SpotRadius; // 0x844		
	};
};
