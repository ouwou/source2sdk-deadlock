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
	// Size: 0x15a8
	// Has VTable
	// 
	// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeTexture"
	// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightIndicesTexture"
	// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightScalarsTexture"
	// MNetworkVarNames "HRenderTextureStrong m_Entity_hLightProbeDirectLightShadowsTexture"
	// MNetworkVarNames "Vector m_Entity_vBoxMins"
	// MNetworkVarNames "Vector m_Entity_vBoxMaxs"
	// MNetworkVarNames "bool m_Entity_bMoveable"
	// MNetworkVarNames "int m_Entity_nHandshake"
	// MNetworkVarNames "int m_Entity_nPriority"
	// MNetworkVarNames "bool m_Entity_bStartDisabled"
	// MNetworkVarNames "int m_Entity_nLightProbeSizeX"
	// MNetworkVarNames "int m_Entity_nLightProbeSizeY"
	// MNetworkVarNames "int m_Entity_nLightProbeSizeZ"
	// MNetworkVarNames "int m_Entity_nLightProbeAtlasX"
	// MNetworkVarNames "int m_Entity_nLightProbeAtlasY"
	// MNetworkVarNames "int m_Entity_nLightProbeAtlasZ"
	// MNetworkVarNames "bool m_Entity_bEnabled"
	class C_EnvLightProbeVolume : public client::C_BaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0558[0xfe0]; // 0x558
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture; // 0x1538		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture; // 0x1540		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture; // 0x1548		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture; // 0x1550		
		// MNetworkEnable
		Vector m_Entity_vBoxMins; // 0x1558		
		// MNetworkEnable
		Vector m_Entity_vBoxMaxs; // 0x1564		
		// MNetworkEnable
		bool m_Entity_bMoveable; // 0x1570		
	private:
		[[maybe_unused]] uint8_t __pad1571[0x3]; // 0x1571
	public:
		// MNetworkEnable
		int32_t m_Entity_nHandshake; // 0x1574		
		// MNetworkEnable
		int32_t m_Entity_nPriority; // 0x1578		
		// MNetworkEnable
		bool m_Entity_bStartDisabled; // 0x157c		
	private:
		[[maybe_unused]] uint8_t __pad157d[0x3]; // 0x157d
	public:
		// MNetworkEnable
		int32_t m_Entity_nLightProbeSizeX; // 0x1580		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeSizeY; // 0x1584		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeSizeZ; // 0x1588		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeAtlasX; // 0x158c		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeAtlasY; // 0x1590		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeAtlasZ; // 0x1594		
	private:
		[[maybe_unused]] uint8_t __pad1598[0x9]; // 0x1598
	public:
		// MNetworkEnable
		bool m_Entity_bEnabled; // 0x15a1		
		
		// Datamap fields:
		// void m_Entity_pSceneObject; // 0x1598
	};
};
