#pragma once
#include "physicslib/FeTaperedCapsuleRigid_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 16
	// Size: 0x40
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeBuildTaperedCapsuleRigid_t : public physicslib::FeTaperedCapsuleRigid_t
	{
	public:
		int32_t m_nPriority; // 0x30		
		uint32_t m_nVertexMapHash; // 0x34		
	};
};
