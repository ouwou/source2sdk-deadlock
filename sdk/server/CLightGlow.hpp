#pragma once
#include "server/CBaseModelEntity.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
	// Alignment: 8
	// Size: 0x788
	// Has VTable
	// 
	// MNetworkIncludeByUserGroup "Origin"
	// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
	// MNetworkIncludeByName "m_clrRender"
	// MNetworkIncludeByName "CGameSceneNode::m_hParent"
	// MNetworkIncludeByName "m_spawnflags"
	// MNetworkVarNames "uint32 m_nHorizontalSize"
	// MNetworkVarNames "uint32 m_nVerticalSize"
	// MNetworkVarNames "uint32 m_nMinDist"
	// MNetworkVarNames "uint32 m_nMaxDist"
	// MNetworkVarNames "uint32 m_nOuterMaxDist"
	// MNetworkVarNames "float32 m_flGlowProxySize"
	// MNetworkVarNames "float32 m_flHDRColorScale"
	class CLightGlow : public server::CBaseModelEntity
	{
	public:
		// MNetworkEnable
		uint32_t m_nHorizontalSize; // 0x768		
		// MNetworkEnable
		uint32_t m_nVerticalSize; // 0x76c		
		// MNetworkEnable
		uint32_t m_nMinDist; // 0x770		
		// MNetworkEnable
		uint32_t m_nMaxDist; // 0x774		
		// MNetworkEnable
		uint32_t m_nOuterMaxDist; // 0x778		
		// MNetworkEnable
		// MNetworkBitCount "6"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "64.000000"
		// MNetworkEncodeFlags "2"
		float m_flGlowProxySize; // 0x77c		
		// MNetworkEnable
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "100.000000"
		float m_flHDRColorScale; // 0x780		
		
		// Datamap fields:
		// Color InputColor; // 0x0
	};
};
