#pragma once
#include "physicslib/FeSDFRigid_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 8
	// Size: 0x50
	// 
	// MGetKV3ClassDefaults
	struct FeBuildSDFRigid_t : public physicslib::FeSDFRigid_t
	{
	public:
		int32_t m_nPriority; // 0x48		
		uint32_t m_nVertexMapHash; // 0x4c		
	};
};
