#pragma once
#include "mathlib_extended/AABB_t.hpp"
#include "physicslib/RnFace_t.hpp"
#include "physicslib/RnHalfEdge_t.hpp"
#include "physicslib/RnPlane_t.hpp"
#include "physicslib/RnVertex_t.hpp"
#include <cstdint>
namespace source2sdk::physicslib
{
	struct CRegionSVM;
};

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 8
	// Size: 0xf8
	// 
	// MGetKV3ClassDefaults
	struct RnHull_t
	{
	public:
		Vector m_vCentroid; // 0x0		
		float m_flMaxAngularRadius; // 0xc		
		mathlib_extended::AABB_t m_Bounds; // 0x10		
		Vector m_vOrthographicAreas; // 0x28		
		matrix3x4_t m_MassProperties; // 0x34		
		float m_flVolume; // 0x64		
		float m_flSurfaceArea; // 0x68		
	private:
		[[maybe_unused]] uint8_t __pad006c[0x4]; // 0x6c
	public:
		CUtlVector<physicslib::RnVertex_t> m_Vertices; // 0x70		
		CUtlVector<Vector> m_VertexPositions; // 0x88		
		CUtlVector<physicslib::RnHalfEdge_t> m_Edges; // 0xa0		
		CUtlVector<physicslib::RnFace_t> m_Faces; // 0xb8		
		CUtlVector<physicslib::RnPlane_t> m_FacePlanes; // 0xd0		
		uint32_t m_nFlags; // 0xe8		
	private:
		[[maybe_unused]] uint8_t __pad00ec[0x4]; // 0xec
	public:
		physicslib::CRegionSVM* m_pRegionSVM; // 0xf0		
	};
};
