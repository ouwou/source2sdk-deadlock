#pragma once
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "server/CBaseEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x528
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
	class CEnvCubemapFog : public server::CBaseEntity
	{
	public:
		// MNetworkEnable
		float m_flEndDistance; // 0x4d8		
		// MNetworkEnable
		float m_flStartDistance; // 0x4dc		
		// MNetworkEnable
		float m_flFogFalloffExponent; // 0x4e0		
		// MNetworkEnable
		bool m_bHeightFogEnabled; // 0x4e4		
	private:
		[[maybe_unused]] uint8_t __pad04e5[0x3]; // 0x4e5
	public:
		// MNetworkEnable
		float m_flFogHeightWidth; // 0x4e8		
		// MNetworkEnable
		float m_flFogHeightEnd; // 0x4ec		
		// MNetworkEnable
		float m_flFogHeightStart; // 0x4f0		
		// MNetworkEnable
		float m_flFogHeightExponent; // 0x4f4		
		// MNetworkEnable
		float m_flLODBias; // 0x4f8		
		// MNetworkEnable
		bool m_bActive; // 0x4fc		
		// MNetworkEnable
		bool m_bStartDisabled; // 0x4fd		
	private:
		[[maybe_unused]] uint8_t __pad04fe[0x2]; // 0x4fe
	public:
		// MNetworkEnable
		float m_flFogMaxOpacity; // 0x500		
		// MNetworkEnable
		int32_t m_nCubemapSourceType; // 0x504		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hSkyMaterial; // 0x508		
		// MNetworkEnable
		CUtlSymbolLarge m_iszSkyEntity; // 0x510		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hFogCubemapTexture; // 0x518		
		// MNetworkEnable
		bool m_bHasHeightFogEnd; // 0x520		
		bool m_bFirstTime; // 0x521		
		
		// Datamap fields:
		// bool InputEnable; // 0x0
		// bool InputDisable; // 0x0
	};
};
