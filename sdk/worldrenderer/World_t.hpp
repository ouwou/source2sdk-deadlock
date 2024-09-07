#pragma once
#include "resourcesystem/InfoForResourceTypeCEntityLump.hpp"
#include "worldrenderer/BakedLightingInfo_t.hpp"
#include "worldrenderer/NodeData_t.hpp"
#include "worldrenderer/WorldBuilderParams_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0xa8
	// 
	// MGetKV3ClassDefaults
	struct World_t
	{
	public:
		worldrenderer::WorldBuilderParams_t m_builderParams; // 0x0		
		CUtlVector<worldrenderer::NodeData_t> m_worldNodes; // 0x48		
		worldrenderer::BakedLightingInfo_t m_worldLightingInfo; // 0x60		
		CUtlVector<CStrongHandleCopyable<resourcesystem::InfoForResourceTypeCEntityLump>> m_entityLumps; // 0x90		
	};
};
