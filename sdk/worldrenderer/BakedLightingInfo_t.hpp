#pragma once
#include "resourcesystem/InfoForResourceTypeCTextureBase.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0x30
	// 
	// MGetKV3ClassDefaults
	struct BakedLightingInfo_t
	{
	public:
		uint32_t m_nLightmapVersionNumber; // 0x0		
		uint32_t m_nLightmapGameVersionNumber; // 0x4		
		Vector2D m_vLightmapUvScale; // 0x8		
		bool m_bHasLightmaps; // 0x10		
		bool m_bBakedShadowsGamma20; // 0x11		
		bool m_bCompressionEnabled; // 0x12		
		uint8_t m_nChartPackIterations; // 0x13		
		uint8_t m_nVradQuality; // 0x14		
	private:
		[[maybe_unused]] uint8_t __pad0015[0x3]; // 0x15
	public:
		CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase>> m_lightMaps; // 0x18		
	};
};
