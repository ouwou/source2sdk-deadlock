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
	// Size: 0x5c0
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
	class CEnvCubemap : public server::CBaseEntity
	{
	private:
		[[maybe_unused]] uint8_t __pad04d8[0x80]; // 0x4d8
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_Entity_hCubemapTexture; // 0x558		
		// MNetworkEnable
		bool m_Entity_bCustomCubemapTexture; // 0x560		
	private:
		[[maybe_unused]] uint8_t __pad0561[0x3]; // 0x561
	public:
		// MNetworkEnable
		float m_Entity_flInfluenceRadius; // 0x564		
		// MNetworkEnable
		Vector m_Entity_vBoxProjectMins; // 0x568		
		// MNetworkEnable
		Vector m_Entity_vBoxProjectMaxs; // 0x574		
		// MNetworkEnable
		bool m_Entity_bMoveable; // 0x580		
	private:
		[[maybe_unused]] uint8_t __pad0581[0x3]; // 0x581
	public:
		// MNetworkEnable
		int32_t m_Entity_nHandshake; // 0x584		
		// MNetworkEnable
		int32_t m_Entity_nEnvCubeMapArrayIndex; // 0x588		
		// MNetworkEnable
		int32_t m_Entity_nPriority; // 0x58c		
		// MNetworkEnable
		float m_Entity_flEdgeFadeDist; // 0x590		
		// MNetworkEnable
		Vector m_Entity_vEdgeFadeDists; // 0x594		
		// MNetworkEnable
		float m_Entity_flDiffuseScale; // 0x5a0		
		// MNetworkEnable
		bool m_Entity_bStartDisabled; // 0x5a4		
		// MNetworkEnable
		bool m_Entity_bDefaultEnvMap; // 0x5a5		
		// MNetworkEnable
		bool m_Entity_bDefaultSpecEnvMap; // 0x5a6		
		// MNetworkEnable
		bool m_Entity_bIndoorCubeMap; // 0x5a7		
		// MNetworkEnable
		bool m_Entity_bCopyDiffuseFromDefaultCubemap; // 0x5a8		
	private:
		[[maybe_unused]] uint8_t __pad05a9[0xf]; // 0x5a9
	public:
		// MNetworkEnable
		bool m_Entity_bEnabled; // 0x5b8		
		
		// Datamap fields:
		// void m_Entity_pSceneObject; // 0x5b0
	};
};
