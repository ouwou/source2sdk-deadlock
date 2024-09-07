#pragma once
#include "modellib/MaterialGroup_t.hpp"
#include "modellib/ModelBoneFlexDriver_t.hpp"
#include "modellib/ModelSkeletonData_t.hpp"
#include "modellib/PermModelDataAnimatedMaterialAttribute_t.hpp"
#include "modellib/PermModelExtPart_t.hpp"
#include "modellib/PermModelInfo_t.hpp"
#include "resourcesystem/InfoForResourceTypeCAnimationGroup.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include "resourcesystem/InfoForResourceTypeCPhysAggregateData.hpp"
#include "resourcesystem/InfoForResourceTypeCRenderMesh.hpp"
#include "resourcesystem/InfoForResourceTypeCSequenceGroupData.hpp"
#include <cstdint>
namespace source2sdk::modellib
{
	struct CModelConfigList;
};

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x2c8
	// 
	// MGetKV3ClassDefaults
	struct PermModelData_t
	{
	public:
		CUtlString m_name; // 0x0		
		modellib::PermModelInfo_t m_modelInfo; // 0x8		
		CUtlVector<modellib::PermModelExtPart_t> m_ExtParts; // 0x60		
		CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCRenderMesh>> m_refMeshes; // 0x78		
		CUtlVector<uint64_t> m_refMeshGroupMasks; // 0x90		
		CUtlVector<uint64_t> m_refPhysGroupMasks; // 0xa8		
		CUtlVector<uint8_t> m_refLODGroupMasks; // 0xc0		
		CUtlVector<float> m_lodGroupSwitchDistances; // 0xd8		
		CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCPhysAggregateData>> m_refPhysicsData; // 0xf0		
		CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCPhysAggregateData>> m_refPhysicsHitboxData; // 0x108		
		CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCAnimationGroup>> m_refAnimGroups; // 0x120		
		CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCSequenceGroupData>> m_refSequenceGroups; // 0x138		
		CUtlVector<CUtlString> m_meshGroups; // 0x150		
		CUtlVector<modellib::MaterialGroup_t> m_materialGroups; // 0x168		
		uint64_t m_nDefaultMeshGroupMask; // 0x180		
		modellib::ModelSkeletonData_t m_modelSkeleton; // 0x188		
		CUtlVector<int16_t> m_remappingTable; // 0x230		
		CUtlVector<uint16_t> m_remappingTableStarts; // 0x248		
		CUtlVector<modellib::ModelBoneFlexDriver_t> m_boneFlexDrivers; // 0x260		
		modellib::CModelConfigList* m_pModelConfigList; // 0x278		
		CUtlVector<CUtlString> m_BodyGroupsHiddenInTools; // 0x280		
		CUtlVector<CStrongHandle<resourcesystem::InfoForResourceTypeCModel>> m_refAnimIncludeModels; // 0x298		
		CUtlVector<modellib::PermModelDataAnimatedMaterialAttribute_t> m_AnimatedMaterialAttributes; // 0x2b0		
	};
};
