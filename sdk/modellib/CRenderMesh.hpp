#pragma once
#include "modellib/CRenderSkeleton.hpp"
#include "modellib/CSceneObjectData.hpp"
#include "modellib/DynamicMeshDeformParams_t.hpp"
#include <cstdint>
namespace source2sdk::modellib
{
	struct CBaseConstraint;
};
namespace source2sdk::modellib
{
	struct CRenderGroom;
};

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x1c0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class CRenderMesh
	{
	private:
		[[maybe_unused]] uint8_t __pad0000[0x10]; // 0x0
	public:
		CUtlLeanVectorFixedGrowable<modellib::CSceneObjectData,1> m_sceneObjects; // 0x10		
		CUtlLeanVector<modellib::CBaseConstraint*> m_constraints; // 0x78		
		modellib::CRenderSkeleton m_skeleton; // 0x88		
	private:
		[[maybe_unused]] uint8_t __pad00d8[0xd0]; // 0xd8
	public:
		modellib::DynamicMeshDeformParams_t m_meshDeformParams; // 0x1a8		
	private:
		[[maybe_unused]] uint8_t __pad01b4[0x4]; // 0x1b4
	public:
		modellib::CRenderGroom* m_pGroomData; // 0x1b8		
	};
};
