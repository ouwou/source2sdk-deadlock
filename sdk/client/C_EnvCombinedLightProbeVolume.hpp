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
	// Size: 0x1660
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "Color m_Entity_Color"
	// MNetworkVarNames "float m_Entity_flBrightness"
	// MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
	// MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
	// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
	// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
	// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
	// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
	// MNetworkVarNames "Vector m_Entity_vBoxMins"
	// MNetworkVarNames "Vector m_Entity_vBoxMaxs"
	// MNetworkVarNames "bool m_Entity_bMoveable"
	// MNetworkVarNames "int m_Entity_nHandshake"
	// MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
	// MNetworkVarNames "int m_Entity_nPriority"
	// MNetworkVarNames "bool m_Entity_bStartDisabled"
	// MNetworkVarNames "float m_Entity_flEdgeFadeDist"
	// MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
	// MNetworkVarNames "int m_Entity_nLightProbeSizeX"
	// MNetworkVarNames "int m_Entity_nLightProbeSizeY"
	// MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
	// MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
	// MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
	// MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
	// MNetworkVarNames "bool m_Entity_bEnabled"
	class C_EnvCombinedLightProbeVolume : public client::C_BaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0558[0x1060]; // 0x558
	public:
		// MNetworkEnable
		// MNetworkChangeCallback "StateChanged"
		Color m_Entity_Color; // 0x15b8		
		// MNetworkEnable
		// MNetworkChangeCallback "StateChanged"
		float m_Entity_flBrightness; // 0x15bc		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture; // 0x15c0		
		// MNetworkEnable
		bool m_Entity_bCustomCubemapTexture; // 0x15c8		
	private:
		[[maybe_unused]] uint8_t __pad15c9[0x7]; // 0x15c9
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture; // 0x15d0		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture; // 0x15d8		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture; // 0x15e0		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture; // 0x15e8		
		// MNetworkEnable
		Vector m_Entity_vBoxMins; // 0x15f0		
		// MNetworkEnable
		Vector m_Entity_vBoxMaxs; // 0x15fc		
		// MNetworkEnable
		bool m_Entity_bMoveable; // 0x1608		
	private:
		[[maybe_unused]] uint8_t __pad1609[0x3]; // 0x1609
	public:
		// MNetworkEnable
		int32_t m_Entity_nHandshake; // 0x160c		
		// MNetworkEnable
		int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x1610		
		// MNetworkEnable
		int32_t m_Entity_nPriority; // 0x1614		
		// MNetworkEnable
		bool m_Entity_bStartDisabled; // 0x1618		
	private:
		[[maybe_unused]] uint8_t __pad1619[0x3]; // 0x1619
	public:
		// MNetworkEnable
		float m_Entity_flEdgeFadeDist; // 0x161c		
		// MNetworkEnable
		Vector m_Entity_vEdgeFadeDists; // 0x1620		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeSizeX; // 0x162c		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeSizeY; // 0x1630		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeSizeZ; // 0x1634		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeAtlasX; // 0x1638		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeAtlasY; // 0x163c		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeAtlasZ; // 0x1640		
	private:
		[[maybe_unused]] uint8_t __pad1644[0x15]; // 0x1644
	public:
		// MNetworkEnable
		bool m_Entity_bEnabled; // 0x1659		
		
		// Datamap fields:
		// void m_Entity_pEnvMap; // 0x1648
		// void m_Entity_pLightProbeVolume; // 0x1650
	};
};
