#pragma once
#include "client/C_BaseEntity.hpp"
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x5f0
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
	class C_GradientFog : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hGradientFogTexture; // 0x558		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogStartDistance; // 0x560		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogEndDistance; // 0x564		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		bool m_bHeightFogEnabled; // 0x568		
	private:
		[[maybe_unused]] uint8_t __pad0569[0x3]; // 0x569
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogStartHeight; // 0x56c		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogEndHeight; // 0x570		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFarZ; // 0x574		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogMaxOpacity; // 0x578		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogFalloffExponent; // 0x57c		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogVerticalExponent; // 0x580		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		Color m_fogColor; // 0x584		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFogStrength; // 0x588		
		// MNetworkEnable
		// MNetworkChangeCallback "FogStateChanged"
		float m_flFadeTime; // 0x58c		
		// MNetworkEnable
		bool m_bStartDisabled; // 0x590		
		// MNetworkEnable
		bool m_bIsEnabled; // 0x591		
		bool m_bGradientFogNeedsTextures; // 0x592		
		
		// Static fields:
		static client::C_GradientFog* &Get_sm_pGradientFog(){return *reinterpret_cast<client::C_GradientFog**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GradientFog")->GetStaticFields()[0]->m_pInstance);};
		
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
