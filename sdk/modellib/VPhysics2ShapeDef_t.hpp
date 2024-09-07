#pragma once
#include "physicslib/RnCapsuleDesc_t.hpp"
#include "physicslib/RnHullDesc_t.hpp"
#include "physicslib/RnMeshDesc_t.hpp"
#include "physicslib/RnSphereDesc_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x78
	// 
	// MGetKV3ClassDefaults
	struct VPhysics2ShapeDef_t
	{
	public:
		CUtlVector<physicslib::RnSphereDesc_t> m_spheres; // 0x0		
		CUtlVector<physicslib::RnCapsuleDesc_t> m_capsules; // 0x18		
		CUtlVector<physicslib::RnHullDesc_t> m_hulls; // 0x30		
		CUtlVector<physicslib::RnMeshDesc_t> m_meshes; // 0x48		
		CUtlVector<uint16_t> m_CollisionAttributeIndices; // 0x60		
	};
};
