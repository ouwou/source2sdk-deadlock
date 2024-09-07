#pragma once
#include "server/CModelPointEntity.hpp"
#include <cstdint>
namespace source2sdk::server
{
	struct CBaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x9d0
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< CBaseEntity> m_hTargetEntity"
	// MNetworkVarNames "bool m_bState"
	// MNetworkVarNames "bool m_bAlwaysUpdate"
	// MNetworkVarNames "float32 m_flLightFOV"
	// MNetworkVarNames "bool m_bEnableShadows"
	// MNetworkVarNames "bool m_bSimpleProjection"
	// MNetworkVarNames "bool m_bLightOnlyTarget"
	// MNetworkVarNames "bool m_bLightWorld"
	// MNetworkVarNames "bool m_bCameraSpace"
	// MNetworkVarNames "float32 m_flBrightnessScale"
	// MNetworkVarNames "Color m_LightColor"
	// MNetworkVarNames "float32 m_flIntensity"
	// MNetworkVarNames "float32 m_flLinearAttenuation"
	// MNetworkVarNames "float32 m_flQuadraticAttenuation"
	// MNetworkVarNames "bool m_bVolumetric"
	// MNetworkVarNames "float32 m_flNoiseStrength"
	// MNetworkVarNames "float32 m_flFlashlightTime"
	// MNetworkVarNames "uint32 m_nNumPlanes"
	// MNetworkVarNames "float32 m_flPlaneOffset"
	// MNetworkVarNames "float32 m_flVolumetricIntensity"
	// MNetworkVarNames "float32 m_flColorTransitionTime"
	// MNetworkVarNames "float32 m_flAmbient"
	// MNetworkVarNames "char m_SpotlightTextureName"
	// MNetworkVarNames "int32 m_nSpotlightTextureFrame"
	// MNetworkVarNames "uint32 m_nShadowQuality"
	// MNetworkVarNames "float32 m_flNearZ"
	// MNetworkVarNames "float32 m_flFarZ"
	// MNetworkVarNames "float32 m_flProjectionSize"
	// MNetworkVarNames "float32 m_flRotation"
	// MNetworkVarNames "bool m_bFlipHorizontal"
	class CEnvProjectedTexture : public server::CModelPointEntity
	{
	public:
		// MNetworkEnable
		CHandle<server::CBaseEntity> m_hTargetEntity; // 0x768		
		// MNetworkEnable
		bool m_bState; // 0x76c		
		// MNetworkEnable
		bool m_bAlwaysUpdate; // 0x76d		
	private:
		[[maybe_unused]] uint8_t __pad076e[0x2]; // 0x76e
	public:
		// MNetworkEnable
		float m_flLightFOV; // 0x770		
		// MNetworkEnable
		bool m_bEnableShadows; // 0x774		
		// MNetworkEnable
		bool m_bSimpleProjection; // 0x775		
		// MNetworkEnable
		bool m_bLightOnlyTarget; // 0x776		
		// MNetworkEnable
		bool m_bLightWorld; // 0x777		
		// MNetworkEnable
		bool m_bCameraSpace; // 0x778		
	private:
		[[maybe_unused]] uint8_t __pad0779[0x3]; // 0x779
	public:
		// MNetworkEnable
		float m_flBrightnessScale; // 0x77c		
		// MNetworkEnable
		Color m_LightColor; // 0x780		
		// MNetworkEnable
		float m_flIntensity; // 0x784		
		// MNetworkEnable
		float m_flLinearAttenuation; // 0x788		
		// MNetworkEnable
		float m_flQuadraticAttenuation; // 0x78c		
		// MNetworkEnable
		bool m_bVolumetric; // 0x790		
	private:
		[[maybe_unused]] uint8_t __pad0791[0x3]; // 0x791
	public:
		// MNetworkEnable
		float m_flNoiseStrength; // 0x794		
		// MNetworkEnable
		float m_flFlashlightTime; // 0x798		
		// MNetworkEnable
		uint32_t m_nNumPlanes; // 0x79c		
		// MNetworkEnable
		float m_flPlaneOffset; // 0x7a0		
		// MNetworkEnable
		float m_flVolumetricIntensity; // 0x7a4		
		// MNetworkEnable
		float m_flColorTransitionTime; // 0x7a8		
		// MNetworkEnable
		float m_flAmbient; // 0x7ac		
		// MNetworkEnable
		char m_SpotlightTextureName[512]; // 0x7b0		
		// MNetworkEnable
		int32_t m_nSpotlightTextureFrame; // 0x9b0		
		// MNetworkEnable
		uint32_t m_nShadowQuality; // 0x9b4		
		// MNetworkEnable
		// MNetworkBitCount "16"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "500.000000"
		// MNetworkEncodeFlags "1"
		float m_flNearZ; // 0x9b8		
		// MNetworkEnable
		// MNetworkBitCount "18"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1500.000000"
		// MNetworkEncodeFlags "1"
		float m_flFarZ; // 0x9bc		
		// MNetworkEnable
		float m_flProjectionSize; // 0x9c0		
		// MNetworkEnable
		float m_flRotation; // 0x9c4		
		// MNetworkEnable
		bool m_bFlipHorizontal; // 0x9c8		
		
		// Datamap fields:
		// void InputTurnOn; // 0x0
		// void InputTurnOff; // 0x0
		// void InputAlwaysUpdateOn; // 0x0
		// void InputAlwaysUpdateOff; // 0x0
		// float InputSetFOV; // 0x0
		// CHandle< CBaseEntity > InputSetTarget; // 0x0
		// bool InputSetCameraSpace; // 0x0
		// bool InputSetLightOnlyTarget; // 0x0
		// bool InputSetLightWorld; // 0x0
		// bool InputSetEnableShadows; // 0x0
		// Color InputSetLightColor; // 0x0
		// float InputSetLightIntensity; // 0x0
		// float InputSetAmbient; // 0x0
		// CUtlSymbolLarge InputSetSpotlightTexture; // 0x0
		// void CEnvProjectedTextureInitialThink; // 0x0
	};
};
