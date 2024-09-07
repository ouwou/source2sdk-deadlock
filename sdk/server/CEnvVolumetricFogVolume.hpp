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
	// Size: 0x520
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
	class CEnvVolumetricFogVolume : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		bool m_bActive; // 0x4d8		
	private:
		[[maybe_unused]] uint8_t __pad04d9[0x3]; // 0x4d9
	public:
		// MNetworkEnable
		Vector m_vBoxMins; // 0x4dc		
		// MNetworkEnable
		Vector m_vBoxMaxs; // 0x4e8		
		// MNetworkEnable
		bool m_bStartDisabled; // 0x4f4		
	private:
		[[maybe_unused]] uint8_t __pad04f5[0x3]; // 0x4f5
	public:
		// MNetworkEnable
		float m_flStrength; // 0x4f8		
		// MNetworkEnable
		int32_t m_nFalloffShape; // 0x4fc		
		// MNetworkEnable
		float m_flFalloffExponent; // 0x500		
		// MNetworkEnable
		float m_flHeightFogDepth; // 0x504		
		// MNetworkEnable
		float m_fHeightFogEdgeWidth; // 0x508		
		// MNetworkEnable
		float m_fIndirectLightStrength; // 0x50c		
		// MNetworkEnable
		float m_fSunLightStrength; // 0x510		
		// MNetworkEnable
		float m_fNoiseStrength; // 0x514		
		// MNetworkEnable
		bool m_bOverrideIndirectLightStrength; // 0x518		
		// MNetworkEnable
		bool m_bOverrideSunLightStrength; // 0x519		
		// MNetworkEnable
		bool m_bOverrideNoiseStrength; // 0x51a		
		// MNetworkEnable
		bool m_bAllowLPVIndirect; // 0x51b		
		
		// Datamap fields:
		// bool InputEnable; // 0x0
		// bool InputDisable; // 0x0
	};
};
