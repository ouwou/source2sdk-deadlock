#pragma once
#include "worldrenderer/BakedLightingInfo_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0x48
	// 
	// MGetKV3ClassDefaults
	struct WorldBuilderParams_t
	{
	public:
		float m_flMinDrawVolumeSize; // 0x0		
		bool m_bBuildBakedLighting; // 0x4		
	private:
		[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
	public:
		worldrenderer::BakedLightingInfo_t m_bakedLightingInfo; // 0x8		
		uint64_t m_nCompileTimestamp; // 0x38		
		uint64_t m_nCompileFingerprint; // 0x40		
	};
};
