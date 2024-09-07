#pragma once
#include "worldrenderer/AggregateSceneObject_t.hpp"
#include "worldrenderer/BakedLightingInfo_t.hpp"
#include "worldrenderer/ClutterSceneObject_t.hpp"
#include "worldrenderer/ExtraVertexStreamOverride_t.hpp"
#include "worldrenderer/InfoOverlayData_t.hpp"
#include "worldrenderer/MaterialOverride_t.hpp"
#include "worldrenderer/SceneObject_t.hpp"
#include "worldrenderer/WorldNodeOnDiskBufferData_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: worldrenderer
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::worldrenderer
{
	// Alignment: 8
	// Size: 0x140
	// 
	// MGetKV3ClassDefaults
	struct WorldNode_t
	{
	public:
		CUtlVector<worldrenderer::SceneObject_t> m_sceneObjects; // 0x0		
		CUtlVector<worldrenderer::InfoOverlayData_t> m_infoOverlays; // 0x18		
		CUtlVector<uint16_t> m_visClusterMembership; // 0x30		
		CUtlVector<worldrenderer::AggregateSceneObject_t> m_aggregateSceneObjects; // 0x48		
		CUtlVector<worldrenderer::ClutterSceneObject_t> m_clutterSceneObjects; // 0x60		
		CUtlVector<worldrenderer::ExtraVertexStreamOverride_t> m_extraVertexStreamOverrides; // 0x78		
		CUtlVector<worldrenderer::MaterialOverride_t> m_materialOverrides; // 0x90		
		CUtlVector<worldrenderer::WorldNodeOnDiskBufferData_t> m_extraVertexStreams; // 0xa8		
		CUtlVector<CUtlString> m_layerNames; // 0xc0		
		CUtlVector<uint8_t> m_sceneObjectLayerIndices; // 0xd8		
		CUtlVector<uint8_t> m_overlayLayerIndices; // 0xf0		
		CUtlString m_grassFileName; // 0x108		
		worldrenderer::BakedLightingInfo_t m_nodeLightingInfo; // 0x110		
	};
};
