#pragma once
#include "client/C_BaseModelEntity.hpp"
#include "client/ParticleIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 8
	// Size: 0x890
	// Has VTable
	// 
	// MNetworkIncludeByName "m_clrRender"
	// MNetworkExcludeByName "CGameSceneNode::m_vecOrigin"
	// MNetworkIncludeByUserGroup "Origin"
	// MNetworkIncludeByName "CGameSceneNode::m_angRotation"
	// MNetworkIncludeByName "CGameSceneNode::m_hParent"
	// MNetworkIncludeByName "m_spawnflags"
	// MNetworkVarNames "Vector m_vDirection"
	// MNetworkVarNames "string_t m_iszEffectName"
	// MNetworkVarNames "string_t m_iszSSEffectName"
	// MNetworkVarNames "Color m_clrOverlay"
	// MNetworkVarNames "bool m_bOn"
	// MNetworkVarNames "bool m_bmaxColor"
	// MNetworkVarNames "float32 m_flSize"
	// MNetworkVarNames "float32 m_flHazeScale"
	// MNetworkVarNames "float32 m_flRotation"
	// MNetworkVarNames "float32 m_flHDRColorScale"
	// MNetworkVarNames "float32 m_flAlphaHaze"
	// MNetworkVarNames "float32 m_flAlphaScale"
	// MNetworkVarNames "float32 m_flAlphaHdr"
	// MNetworkVarNames "float32 m_flFarZScale"
	class C_Sun : public client::C_BaseModelEntity
	{
	public:
		client::ParticleIndex_t m_fxSSSunFlareEffectIndex; // 0x830		
		client::ParticleIndex_t m_fxSunFlareEffectIndex; // 0x834		
		float m_fdistNormalize; // 0x838		
		Vector m_vSunPos; // 0x83c		
		// MNetworkEnable
		Vector m_vDirection; // 0x848		
	private:
		[[maybe_unused]] uint8_t __pad0854[0x4]; // 0x854
	public:
		// MNetworkEnable
		CUtlSymbolLarge m_iszEffectName; // 0x858		
		// MNetworkEnable
		CUtlSymbolLarge m_iszSSEffectName; // 0x860		
		// MNetworkEnable
		Color m_clrOverlay; // 0x868		
		// MNetworkEnable
		bool m_bOn; // 0x86c		
		// MNetworkEnable
		bool m_bmaxColor; // 0x86d		
	private:
		[[maybe_unused]] uint8_t __pad086e[0x2]; // 0x86e
	public:
		// MNetworkEnable
		// MNetworkBitCount "10"
		float m_flSize; // 0x870		
		// MNetworkEnable
		// MNetworkBitCount "10"
		float m_flHazeScale; // 0x874		
		// MNetworkEnable
		// MNetworkMinValue "-360.000000"
		// MNetworkMaxValue "360.000000"
		float m_flRotation; // 0x878		
		// MNetworkEnable
		// MNetworkChangeCallback "OnHDRScaleChanged"
		float m_flHDRColorScale; // 0x87c		
		// MNetworkEnable
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "2.000000"
		float m_flAlphaHaze; // 0x880		
		// MNetworkEnable
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "2.000000"
		float m_flAlphaScale; // 0x884		
		// MNetworkEnable
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "2.000000"
		float m_flAlphaHdr; // 0x888		
		// MNetworkEnable
		// MNetworkMinValue "0.000000"
		// MNetworkMaxValue "1.000000"
		float m_flFarZScale; // 0x88c		
	};
};
