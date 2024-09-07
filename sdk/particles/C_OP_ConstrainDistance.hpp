#pragma once
#include "particles/CParticleFunctionConstraint.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x498
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ConstrainDistance : public particles::CParticleFunctionConstraint
	{
	public:
		// MPropertyFriendlyName "minimum distance"
		particleslib::CParticleCollectionFloatInput m_fMinDistance; // 0x1c0		
		// MPropertyFriendlyName "maximum distance"
		particleslib::CParticleCollectionFloatInput m_fMaxDistance; // 0x320		
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x480		
		// MPropertyFriendlyName "offset of center"
		// MVectorIsCoordinate
		Vector m_CenterOffset; // 0x484		
		// MPropertyFriendlyName "global center point"
		bool m_bGlobalCenter; // 0x490		
	};
};
