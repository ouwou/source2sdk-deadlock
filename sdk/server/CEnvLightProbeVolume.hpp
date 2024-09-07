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
	// Size: 0x1528
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
	class CEnvLightProbeVolume : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0xfe0]; // 0x4d8
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeTexture; // 0x14b8		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightIndicesTexture; // 0x14c0		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightScalarsTexture; // 0x14c8		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hLightProbeDirectLightShadowsTexture; // 0x14d0		
		// MNetworkEnable
		Vector m_Entity_vBoxMins; // 0x14d8		
		// MNetworkEnable
		Vector m_Entity_vBoxMaxs; // 0x14e4		
		// MNetworkEnable
		bool m_Entity_bMoveable; // 0x14f0		
	private:
		[[maybe_unused]] uint8_t __pad14f1[0x3]; // 0x14f1
	public:
		// MNetworkEnable
		int32_t m_Entity_nHandshake; // 0x14f4		
		// MNetworkEnable
		int32_t m_Entity_nPriority; // 0x14f8		
		// MNetworkEnable
		bool m_Entity_bStartDisabled; // 0x14fc		
	private:
		[[maybe_unused]] uint8_t __pad14fd[0x3]; // 0x14fd
	public:
		// MNetworkEnable
		int32_t m_Entity_nLightProbeSizeX; // 0x1500		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeSizeY; // 0x1504		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeSizeZ; // 0x1508		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeAtlasX; // 0x150c		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeAtlasY; // 0x1510		
		// MNetworkEnable
		int32_t m_Entity_nLightProbeAtlasZ; // 0x1514		
	private:
		[[maybe_unused]] uint8_t __pad1518[0x9]; // 0x1518
	public:
		// MNetworkEnable
		bool m_Entity_bEnabled; // 0x1521		
		
		// Datamap fields:
		// void m_Entity_pSceneObject; // 0x1518
	};
};
