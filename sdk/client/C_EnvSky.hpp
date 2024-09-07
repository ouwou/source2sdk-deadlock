#pragma once
#include "client/C_BaseModelEntity.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x890
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
	// MNetworkVarNames "HMaterialStrong m_hSkyMaterialLightingOnly"
	// MNetworkVarNames "bool m_bStartDisabled"
	// MNetworkVarNames "Color m_vTintColor"
	// MNetworkVarNames "Color m_vTintColorLightingOnly"
	// MNetworkVarNames "float m_flBrightnessScale"
	// MNetworkVarNames "int m_nFogType"
	// MNetworkVarNames "float m_flFogMinStart"
	// MNetworkVarNames "float m_flFogMinEnd"
	// MNetworkVarNames "float m_flFogMaxStart"
	// MNetworkVarNames "float m_flFogMaxEnd"
	// MNetworkVarNames "bool m_bEnabled"
	class C_EnvSky : public client::C_BaseModelEntity
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial; // 0x830		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterialLightingOnly; // 0x838		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		bool m_bStartDisabled; // 0x840		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		Color m_vTintColor; // 0x841		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		Color m_vTintColorLightingOnly; // 0x845		
	private:
		[[maybe_unused]] uint8_t __pad0849[0x3]; // 0x849
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		float m_flBrightnessScale; // 0x84c		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		int32_t m_nFogType; // 0x850		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		float m_flFogMinStart; // 0x854		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		float m_flFogMinEnd; // 0x858		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		float m_flFogMaxStart; // 0x85c		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		float m_flFogMaxEnd; // 0x860		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		bool m_bEnabled; // 0x864		
	};
};
