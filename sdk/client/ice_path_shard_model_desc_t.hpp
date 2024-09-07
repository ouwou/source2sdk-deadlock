#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x38
	// Has VTable
	// 
	// MNetworkVarNames "int32 m_nModelID"
	// MNetworkVarNames "Vector2D m_vecPanelSize"
	// MNetworkVarNames "Vector m_vecPanelVertices"
	// MNetworkVarNames "float m_flThickness"
	// MNetworkVarNames "CUtlStringToken m_SurfacePropStringToken"
	struct ice_path_shard_model_desc_t
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x8]; // 0x0
	public:
		// MNetworkEnable
		int32_t m_nModelID; // 0x8		
		// MNetworkEnable
		Vector2D m_vecPanelSize; // 0xc		
	private:
		[[maybe_unused]] uint8_t __pad0014[0x4]; // 0x14
	public:
		// MNetworkEnable
		C_NetworkUtlVectorBase<Vector> m_vecPanelVertices; // 0x18		
		// MNetworkEnable
		float m_flThickness; // 0x30		
		// MNetworkEnable
		CUtlStringToken m_SurfacePropStringToken; // 0x34		
	};
};
