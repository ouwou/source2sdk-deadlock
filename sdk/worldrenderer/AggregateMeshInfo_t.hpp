#pragma once
#include "worldrenderer/ObjectTypeFlags_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 4
	// Size: 0x18
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct AggregateMeshInfo_t
	{
	public:
		uint32_t m_nVisClusterMemberOffset; // 0x0		
		uint8_t m_nVisClusterMemberCount; // 0x4		
		bool m_bHasTransform; // 0x5		
		int16_t m_nDrawCallIndex; // 0x6		
		int16_t m_nLODSetupIndex; // 0x8		
		uint8_t m_nLODGroupMask; // 0xa		
		Color m_vTintColor; // 0xb		
	private:
		[[maybe_unused]] uint8_t __pad000f[0x1]; // 0xf
	public:
		worldrenderer::ObjectTypeFlags_t m_objectFlags; // 0x10		
		int32_t m_nLightProbeVolumePrecomputedHandshake; // 0x14		
	};
};
