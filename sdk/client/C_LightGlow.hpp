#pragma once
#include "client/C_BaseModelEntity.hpp"
#include "client/C_LightGlowOverlay.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x948
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
	class C_LightGlow : public client::C_BaseModelEntity
	{
	public:
		// MNetworkEnable
		uint32_t m_nHorizontalSize; // 0x830		
		// MNetworkEnable
		uint32_t m_nVerticalSize; // 0x834		
		// MNetworkEnable
		uint32_t m_nMinDist; // 0x838		
		// MNetworkEnable
		uint32_t m_nMaxDist; // 0x83c		
		// MNetworkEnable
		uint32_t m_nOuterMaxDist; // 0x840		
		// MNetworkEnable
		// MNetworkBitCount "6"
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "64.000000"
		// MNetworkEncodeFlags "2"
		float m_flGlowProxySize; // 0x844		
		// MNetworkEnable
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "100.000000"
		// MNetworkChangeCallback "OnHDRColorScaleChanged"
		float m_flHDRColorScale; // 0x848		
	private:
		[[maybe_unused]] uint8_t __pad084c[0x4]; // 0x84c
	public:
		client::C_LightGlowOverlay m_GlowOverlay; // 0x850		
	};
};
