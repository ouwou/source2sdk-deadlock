#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x338
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetCPOrientationToPointAtCP : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "CP to point towards"
		int32_t m_nInputCP; // 0x1c8		
		// MPropertyFriendlyName "CP to set"
		int32_t m_nOutputCP; // 0x1cc		
		// MPropertyFriendlyName "Interpolation"
		particleslib::CParticleCollectionFloatInput m_flInterpolation; // 0x1d0		
		// MPropertyFriendlyName "2D Orient"
		bool m_b2DOrientation; // 0x330		
		// MPropertyFriendlyName "Avoid Vertical Axis Singularity"
		bool m_bAvoidSingularity; // 0x331		
		// MPropertyFriendlyName "Point Away"
		bool m_bPointAway; // 0x332		
	};
};
