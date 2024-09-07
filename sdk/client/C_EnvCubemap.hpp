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
	// Size: 0x640
	// Has VTable
	// 
	// MEntityAllowsPortraitWorldSpawn
	// MNetworkVarNames "HRenderTextureStrong m_Entity_hCubemapTexture"
	// MNetworkVarNames "bool m_Entity_bCustomCubemapTexture"
	// MNetworkVarNames "float m_Entity_flInfluenceRadius"
	// MNetworkVarNames "Vector m_Entity_vBoxProjectMins"
	// MNetworkVarNames "Vector m_Entity_vBoxProjectMaxs"
	// MNetworkVarNames "bool m_Entity_bMoveable"
	// MNetworkVarNames "int m_Entity_nHandshake"
	// MNetworkVarNames "int m_Entity_nEnvCubeMapArrayIndex"
	// MNetworkVarNames "int m_Entity_nPriority"
	// MNetworkVarNames "float m_Entity_flEdgeFadeDist"
	// MNetworkVarNames "Vector m_Entity_vEdgeFadeDists"
	// MNetworkVarNames "float m_Entity_flDiffuseScale"
	// MNetworkVarNames "bool m_Entity_bStartDisabled"
	// MNetworkVarNames "bool m_Entity_bDefaultEnvMap"
	// MNetworkVarNames "bool m_Entity_bDefaultSpecEnvMap"
	// MNetworkVarNames "bool m_Entity_bIndoorCubeMap"
	// MNetworkVarNames "bool m_Entity_bCopyDiffuseFromDefaultCubemap"
	// MNetworkVarNames "bool m_Entity_bEnabled"
	class C_EnvCubemap : public client::C_BaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad0558[0x80]; // 0x558
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture; // 0x5d8		
		// MNetworkEnable
		bool m_Entity_bCustomCubemapTexture; // 0x5e0		
	private:
		[[maybe_unused]] uint8_t __pad05e1[0x3]; // 0x5e1
	public:
		// MNetworkEnable
		float m_Entity_flInfluenceRadius; // 0x5e4		
		// MNetworkEnable
		Vector m_Entity_vBoxProjectMins; // 0x5e8		
		// MNetworkEnable
		Vector m_Entity_vBoxProjectMaxs; // 0x5f4		
		// MNetworkEnable
		bool m_Entity_bMoveable; // 0x600		
	private:
		[[maybe_unused]] uint8_t __pad0601[0x3]; // 0x601
	public:
		// MNetworkEnable
		int32_t m_Entity_nHandshake; // 0x604		
		// MNetworkEnable
		int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x608		
		// MNetworkEnable
		int32_t m_Entity_nPriority; // 0x60c		
		// MNetworkEnable
		float m_Entity_flEdgeFadeDist; // 0x610		
		// MNetworkEnable
		Vector m_Entity_vEdgeFadeDists; // 0x614		
		// MNetworkEnable
		float m_Entity_flDiffuseScale; // 0x620		
		// MNetworkEnable
		bool m_Entity_bStartDisabled; // 0x624		
		// MNetworkEnable
		bool m_Entity_bDefaultEnvMap; // 0x625		
		// MNetworkEnable
		bool m_Entity_bDefaultSpecEnvMap; // 0x626		
		// MNetworkEnable
		bool m_Entity_bIndoorCubeMap; // 0x627		
		// MNetworkEnable
		bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x628		
	private:
		[[maybe_unused]] uint8_t __pad0629[0xf]; // 0x629
	public:
		// MNetworkEnable
		bool m_Entity_bEnabled; // 0x638		
		
		// Datamap fields:
		// void m_Entity_pSceneObject; // 0x630
	};
};
