#pragma once
#include "physicslib/FeBoxRigid_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 16
	// Size: 0x50
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeBuildBoxRigid_t : public physicslib::FeBoxRigid_t
	{
	public:
		int32_t m_nPriority; // 0x40		
		uint32_t m_nVertexMapHash; // 0x44		
	};
};
