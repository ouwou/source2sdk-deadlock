#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 2
	// Size: 0xa
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	struct FeRigidColliderIndices_t
	{
	public:
		uint16_t m_nTaperedCapsuleRigidIndex; // 0x0		
		uint16_t m_nSphereRigidIndex; // 0x2		
		uint16_t m_nBoxRigidIndex; // 0x4		
		uint16_t m_nSDFRigidIndex; // 0x6		
		uint16_t m_nCollisionPlaneIndex; // 0x8		
	};
};
