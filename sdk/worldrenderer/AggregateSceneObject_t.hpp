#pragma once
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "worldrenderer/AggregateLODSetup_t.hpp"
#include "worldrenderer/AggregateMeshInfo_t.hpp"
#include "worldrenderer/ObjectTypeFlags_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0x78
	// 
	// MGetKV3ClassDefaults
	struct AggregateSceneObject_t
	{
	public:
		worldrenderer::ObjectTypeFlags_t m_allFlags; // 0x0		
		worldrenderer::ObjectTypeFlags_t m_anyFlags; // 0x4		
		int16_t m_nLayer; // 0x8		
	private:
		[[maybe_unused]] uint8_t __pad000a[0x6]; // 0xa
	public:
		CUtlVector<worldrenderer::AggregateMeshInfo_t> m_aggregateMeshes; // 0x10		
		CUtlVector<worldrenderer::AggregateLODSetup_t> m_lodSetups; // 0x28		
		CUtlVector<uint16_t> m_visClusterMembership; // 0x40		
		CUtlVector<matrix3x4_t> m_fragmentTransforms; // 0x58		
		CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_renderableModel; // 0x70		
	};
};
