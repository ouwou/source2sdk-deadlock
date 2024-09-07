#pragma once
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x7c8
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
	class CEnvSky : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial; // 0x768		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterialLightingOnly; // 0x770		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		bool m_bStartDisabled; // 0x778		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		Color m_vTintColor; // 0x779		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		Color m_vTintColorLightingOnly; // 0x77d		
	private:
		[[maybe_unused]] uint8_t __pad0781[0x3]; // 0x781
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		float m_flBrightnessScale; // 0x784		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		int32_t m_nFogType; // 0x788		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		float m_flFogMinStart; // 0x78c		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		float m_flFogMinEnd; // 0x790		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		float m_flFogMaxStart; // 0x794		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		float m_flFogMaxEnd; // 0x798		
		// MNetworkEnable
		// MNetworkChangeCallback "SkyStateChanged"
		bool m_bEnabled; // 0x79c		
	};
};
