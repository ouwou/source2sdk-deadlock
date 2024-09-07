#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x238
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapTransformOrientationToRotations : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "transform input"
		particleslib::CParticleTransformInput m_TransformInput; // 0x1c0		
		// MPropertyFriendlyName "offset pitch/yaw/roll"
		Vector m_vecRotation; // 0x228		
		// MPropertyFriendlyName "Use Quaternians Internally"
		bool m_bUseQuat; // 0x234		
		// MPropertyFriendlyName "Write normal instead of rotation"
		bool m_bWriteNormal; // 0x235		
	};
};
