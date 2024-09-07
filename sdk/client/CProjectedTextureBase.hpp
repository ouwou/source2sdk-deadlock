#pragma once
#include <cstdint>
namespace source2sdk::client
{
	struct C_BaseEntity;
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x2e0
	// Has VTable
	// 
	// MNetworkVarNames "CHandle< C_BaseEntity> m_hTargetEntity"
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
	// MNetworkVarNames "float32 m_flVolumetricIntensity"
	// MNetworkVarNames "float32 m_flNoiseStrength"
	// MNetworkVarNames "float32 m_flFlashlightTime"
	// MNetworkVarNames "uint32 m_nNumPlanes"
	// MNetworkVarNames "float32 m_flPlaneOffset"
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
	class CProjectedTextureBase
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0xc]; // 0x0
	public:
		// MNetworkEnable
		CHandle<client::C_BaseEntity> m_hTargetEntity; // 0xc		
		// MNetworkEnable
		bool m_bState; // 0x10		
		// MNetworkEnable
		bool m_bAlwaysUpdate; // 0x11		
	private:
		[[maybe_unused]] uint8_t __pad0012[0x2]; // 0x12
	public:
		// MNetworkEnable
		float m_flLightFOV; // 0x14		
		// MNetworkEnable
		bool m_bEnableShadows; // 0x18		
		// MNetworkEnable
		bool m_bSimpleProjection; // 0x19		
		// MNetworkEnable
		bool m_bLightOnlyTarget; // 0x1a		
		// MNetworkEnable
		bool m_bLightWorld; // 0x1b		
		// MNetworkEnable
		bool m_bCameraSpace; // 0x1c		
	private:
		[[maybe_unused]] uint8_t __pad001d[0x3]; // 0x1d
	public:
		// MNetworkEnable
		float m_flBrightnessScale; // 0x20		
		// MNetworkEnable
		Color m_LightColor; // 0x24		
		// MNetworkEnable
		float m_flIntensity; // 0x28		
		// MNetworkEnable
		float m_flLinearAttenuation; // 0x2c		
		// MNetworkEnable
		float m_flQuadraticAttenuation; // 0x30		
		// MNetworkEnable
		bool m_bVolumetric; // 0x34		
	private:
		[[maybe_unused]] uint8_t __pad0035[0x3]; // 0x35
	public:
		// MNetworkEnable
		float m_flVolumetricIntensity; // 0x38		
		// MNetworkEnable
		float m_flNoiseStrength; // 0x3c		
		// MNetworkEnable
		float m_flFlashlightTime; // 0x40		
		// MNetworkEnable
		uint32_t m_nNumPlanes; // 0x44		
		// MNetworkEnable
		float m_flPlaneOffset; // 0x48		
		// MNetworkEnable
		float m_flColorTransitionTime; // 0x4c		
		// MNetworkEnable
		float m_flAmbient; // 0x50		
		// MNetworkEnable
		char m_SpotlightTextureName[512]; // 0x54		
		// MNetworkEnable
		int32_t m_nSpotlightTextureFrame; // 0x254		
		// MNetworkEnable
		uint32_t m_nShadowQuality; // 0x258		
		// MNetworkEnable
		// MNetworkBitCount "16"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "500.000000"
		// MNetworkEncodeFlags "1"
		float m_flNearZ; // 0x25c		
		// MNetworkEnable
		// MNetworkBitCount "18"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1500.000000"
		// MNetworkEncodeFlags "1"
		float m_flFarZ; // 0x260		
		// MNetworkEnable
		float m_flProjectionSize; // 0x264		
		// MNetworkEnable
		float m_flRotation; // 0x268		
		// MNetworkEnable
		bool m_bFlipHorizontal; // 0x26c		
		
		// Static fields:
		static float &Get_m_flVisibleBBoxMinHeight(){return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("CProjectedTextureBase")->GetStaticFields()[0]->m_pInstance);};
	};
};
