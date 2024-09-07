#pragma once
#include "physicslib/RnMesh_t.hpp"
#include "physicslib/RnShapeDesc_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 8
	// Size: 0xc0
	// 
	// MGetKV3ClassDefaults
	struct RnMeshDesc_t : public physicslib::RnShapeDesc_t
	{
	public:
		physicslib::RnMesh_t m_Mesh; // 0x18		
	};
};
