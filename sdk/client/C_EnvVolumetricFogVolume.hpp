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
	// Size: 0x5a0
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "bool m_bActive"
	// MNetworkVarNames "Vector m_vBoxMins"
	// MNetworkVarNames "Vector m_vBoxMaxs"
	// MNetworkVarNames "bool m_bStartDisabled"
	// MNetworkVarNames "float m_flStrength"
	// MNetworkVarNames "int m_nFalloffShape"
	// MNetworkVarNames "float m_flFalloffExponent"
	// MNetworkVarNames "float m_flHeightFogDepth"
	// MNetworkVarNames "float m_fHeightFogEdgeWidth"
	// MNetworkVarNames "float m_fIndirectLightStrength"
	// MNetworkVarNames "float m_fSunLightStrength"
	// MNetworkVarNames "float m_fNoiseStrength"
	// MNetworkVarNames "bool m_bOverrideIndirectLightStrength"
	// MNetworkVarNames "bool m_bOverrideSunLightStrength"
	// MNetworkVarNames "bool m_bOverrideNoiseStrength"
	// MNetworkVarNames "bool m_bAllowLPVIndirect"
	class C_EnvVolumetricFogVolume : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		bool m_bActive; // 0x558		
	private:
		[[maybe_unused]] uint8_t __pad0559[0x3]; // 0x559
	public:
		// MNetworkEnable
		Vector m_vBoxMins; // 0x55c		
		// MNetworkEnable
		Vector m_vBoxMaxs; // 0x568		
		// MNetworkEnable
		bool m_bStartDisabled; // 0x574		
	private:
		[[maybe_unused]] uint8_t __pad0575[0x3]; // 0x575
	public:
		// MNetworkEnable
		float m_flStrength; // 0x578		
		// MNetworkEnable
		int32_t m_nFalloffShape; // 0x57c		
		// MNetworkEnable
		float m_flFalloffExponent; // 0x580		
		// MNetworkEnable
		float m_flHeightFogDepth; // 0x584		
		// MNetworkEnable
		float m_fHeightFogEdgeWidth; // 0x588		
		// MNetworkEnable
		float m_fIndirectLightStrength; // 0x58c		
		// MNetworkEnable
		float m_fSunLightStrength; // 0x590		
		// MNetworkEnable
		float m_fNoiseStrength; // 0x594		
		// MNetworkEnable
		bool m_bOverrideIndirectLightStrength; // 0x598		
		// MNetworkEnable
		bool m_bOverrideSunLightStrength; // 0x599		
		// MNetworkEnable
		bool m_bOverrideNoiseStrength; // 0x59a		
		// MNetworkEnable
		bool m_bAllowLPVIndirect; // 0x59b		
		
		// Datamap fields:
		// bool InputEnable; // 0x0
		// bool InputDisable; // 0x0
	};
};
