#pragma once
#include "physicslib/RnSoftbodyCapsule_t.hpp"
#include "physicslib/RnSoftbodyParticle_t.hpp"
#include "physicslib/RnSoftbodySpring_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
	// Alignment: 8
	// Size: 0x90
	// 
	// MGetKV3ClassDefaults
	struct PhysSoftbodyDesc_t
	{
	public:
		CUtlVector<uint32_t> m_ParticleBoneHash; // 0x0		
		CUtlVector<physicslib::RnSoftbodyParticle_t> m_Particles; // 0x18		
		CUtlVector<physicslib::RnSoftbodySpring_t> m_Springs; // 0x30		
		CUtlVector<physicslib::RnSoftbodyCapsule_t> m_Capsules; // 0x48		
		CUtlVector<CTransform> m_InitPose; // 0x60		
		CUtlVector<CUtlString> m_ParticleBoneName; // 0x78		
	};
};
