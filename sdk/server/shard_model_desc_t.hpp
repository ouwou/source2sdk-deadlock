#pragma once
#include "client/ShardSolid_t.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x80
	// Has VTable
	// 
	// MNetworkVarNames "int32 m_nModelID"
	// MNetworkVarNames "HMaterialStrong m_hMaterialBase"
	// MNetworkVarNames "HMaterialStrong m_hMaterialDamageOverlay"
	// MNetworkVarNames "ShardSolid_t m_solid"
	// MNetworkVarNames "Vector2D m_vecPanelSize"
	// MNetworkVarNames "Vector2D m_vecStressPositionA"
	// MNetworkVarNames "Vector2D m_vecStressPositionB"
	// MNetworkVarNames "Vector2D m_vecPanelVertices"
	// MNetworkVarNames "Vector4D m_vInitialPanelVertices"
	// MNetworkVarNames "float m_flGlassHalfThickness"
	// MNetworkVarNames "bool m_bHasParent"
	// MNetworkVarNames "bool m_bParentFrozen"
	// MNetworkVarNames "CUtlStringToken m_SurfacePropStringToken"
	struct shard_model_desc_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		int32_t m_nModelID; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000c[0x4]; // 0xc
	public:
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterialBase; // 0x10		
		// MNetworkEnable
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterialDamageOverlay; // 0x18		
		// MNetworkEnable
		client::ShardSolid_t m_solid; // 0x20		
	private:
		[[maybe_unused]] uint8_t __pad0021[0x3]; // 0x21
	public:
		// MNetworkEnable
		Vector2D m_vecPanelSize; // 0x24		
		// MNetworkEnable
		Vector2D m_vecStressPositionA; // 0x2c		
		// MNetworkEnable
		Vector2D m_vecStressPositionB; // 0x34		
	private:
		[[maybe_unused]] uint8_t __pad003c[0x4]; // 0x3c
	public:
		// MNetworkEnable
		CNetworkUtlVectorBase<Vector2D> m_vecPanelVertices; // 0x40		
		// MNetworkEnable
		CNetworkUtlVectorBase<Vector4D> m_vInitialPanelVertices; // 0x58		
		// MNetworkEnable
		float m_flGlassHalfThickness; // 0x70		
		// MNetworkEnable
		bool m_bHasParent; // 0x74		
		// MNetworkEnable
		bool m_bParentFrozen; // 0x75		
	private:
		[[maybe_unused]] uint8_t __pad0076[0x2]; // 0x76
	public:
		// MNetworkEnable
		CUtlStringToken m_SurfacePropStringToken; // 0x78		
	};
};
