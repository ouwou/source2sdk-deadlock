#pragma once
#include "client/C_BaseEntity.hpp"
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x5a8
	// Has VTable
	// 
	// MNetworkVarNames "float m_flEndDistance"
	// MNetworkVarNames "float m_flStartDistance"
	// MNetworkVarNames "float m_flFogFalloffExponent"
	// MNetworkVarNames "bool m_bHeightFogEnabled"
	// MNetworkVarNames "float m_flFogHeightWidth"
	// MNetworkVarNames "float m_flFogHeightEnd"
	// MNetworkVarNames "float m_flFogHeightStart"
	// MNetworkVarNames "float m_flFogHeightExponent"
	// MNetworkVarNames "float m_flLODBias"
	// MNetworkVarNames "bool m_bActive"
	// MNetworkVarNames "bool m_bStartDisabled"
	// MNetworkVarNames "float m_flFogMaxOpacity"
	// MNetworkVarNames "int m_nCubemapSourceType"
	// MNetworkVarNames "HMaterialStrong m_hSkyMaterial"
	// MNetworkVarNames "string_t m_iszSkyEntity"
	// MNetworkVarNames "HRenderTextureStrong m_hFogCubemapTexture"
	// MNetworkVarNames "bool m_bHasHeightFogEnd"
	class C_EnvCubemapFog : public client::C_BaseEntity
	{
	public:
		// MNetworkEnable
		float m_flEndDistance; // 0x558		
		// MNetworkEnable
		float m_flStartDistance; // 0x55c		
		// MNetworkEnable
		float m_flFogFalloffExponent; // 0x560		
		// MNetworkEnable
		bool m_bHeightFogEnabled; // 0x564		
	private:
		[[maybe_unused]] uint8_t __pad0565[0x3]; // 0x565
	public:
		// MNetworkEnable
		float m_flFogHeightWidth; // 0x568		
		// MNetworkEnable
		float m_flFogHeightEnd; // 0x56c		
		// MNetworkEnable
		float m_flFogHeightStart; // 0x570		
		// MNetworkEnable
		float m_flFogHeightExponent; // 0x574		
		// MNetworkEnable
		float m_flLODBias; // 0x578		
		// MNetworkEnable
		bool m_bActive; // 0x57c		
		// MNetworkEnable
		bool m_bStartDisabled; // 0x57d		
	private:
		[[maybe_unused]] uint8_t __pad057e[0x2]; // 0x57e
	public:
		// MNetworkEnable
		float m_flFogMaxOpacity; // 0x580		
		// MNetworkEnable
		int32_t m_nCubemapSourceType; // 0x584		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial; // 0x588		
		// MNetworkEnable
		CUtlSymbolLarge m_iszSkyEntity; // 0x590		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hFogCubemapTexture; // 0x598		
		// MNetworkEnable
		bool m_bHasHeightFogEnd; // 0x5a0		
		bool m_bFirstTime; // 0x5a1		
		
		// Datamap fields:
		// bool InputEnable; // 0x0
		// bool InputDisable; // 0x0
	};
};
