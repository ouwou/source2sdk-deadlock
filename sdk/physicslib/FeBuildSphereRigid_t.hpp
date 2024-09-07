#pragma once
#include "physicslib/FeSphereRigid_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 16
	// Size: 0x30
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeBuildSphereRigid_t : public physicslib::FeSphereRigid_t
	{
	public:
		int32_t m_nPriority; // 0x20		
		uint32_t m_nVertexMapHash; // 0x24		
	};
};
