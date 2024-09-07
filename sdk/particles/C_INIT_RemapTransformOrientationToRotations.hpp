#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x240
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RemapTransformOrientationToRotations : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "transform input"
		particleslib::CParticleTransformInput m_TransformInput; // 0x1c8		
		// MPropertyFriendlyName "offset pitch/yaw/roll"
		Vector m_vecRotation; // 0x230		
		// MPropertyFriendlyName "Use Quaternians Internally"
		bool m_bUseQuat; // 0x23c		
		// MPropertyFriendlyName "Write normal instead of rotation"
		bool m_bWriteNormal; // 0x23d		
	};
};
