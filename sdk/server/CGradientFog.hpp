#pragma once
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x518
	// Has VTable
	// 
	// MNetworkVarNames "HRenderTextureStrong m_hGradientFogTexture"
	// MNetworkVarNames "float m_flFogStartDistance"
	// MNetworkVarNames "float m_flFogEndDistance"
	// MNetworkVarNames "bool m_bHeightFogEnabled"
	// MNetworkVarNames "float m_flFogStartHeight"
	// MNetworkVarNames "float m_flFogEndHeight"
	// MNetworkVarNames "float m_flFarZ"
	// MNetworkVarNames "float m_flFogMaxOpacity"
	// MNetworkVarNames "float m_flFogFalloffExponent"
	// MNetworkVarNames "float m_flFogVerticalExponent"
	// MNetworkVarNames "Color m_fogColor"
	// MNetworkVarNames "float m_flFogStrength"
	// MNetworkVarNames "float m_flFadeTime"
	// MNetworkVarNames "bool m_bStartDisabled"
	// MNetworkVarNames "bool m_bIsEnabled"
	class CGradientFog : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hGradientFogTexture; // 0x4d8		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogStartDistance; // 0x4e0		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogEndDistance; // 0x4e4		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		bool m_bHeightFogEnabled; // 0x4e8		
	private:
		[[maybe_unused]] uint8_t __pad04e9[0x3]; // 0x4e9
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogStartHeight; // 0x4ec		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogEndHeight; // 0x4f0		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFarZ; // 0x4f4		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogMaxOpacity; // 0x4f8		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogFalloffExponent; // 0x4fc		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogVerticalExponent; // 0x500		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		Color m_fogColor; // 0x504		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogStrength; // 0x508		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFadeTime; // 0x50c		
		// MNetworkEnable
		bool m_bStartDisabled; // 0x510		
		// MNetworkEnable
		bool m_bIsEnabled; // 0x511		
		bool m_bGradientFogNeedsTextures; // 0x512		
		
		// Datamap fields:
		// bool InputEnable; // 0x0
		// bool InputDisable; // 0x0
		// float InputSetFogStartDistance; // 0x0
		// float InputSetFogEndDistance; // 0x0
		// float InputSetFogStartHeight; // 0x0
		// float InputSetFogEndHeight; // 0x0
		// float InputSetFogMaxOpacity; // 0x0
		// float InputSetFogFalloffExponent; // 0x0
		// float InputSetFogVerticalExponent; // 0x0
		// Color InputSetFogColor; // 0x0
		// float InputSetFogStrength; // 0x0
		// float InputSetFarZ; // 0x0
	};
};
