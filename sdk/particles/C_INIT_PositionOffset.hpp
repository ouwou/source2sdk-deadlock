#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/CRandomNumberGeneratorParameters.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xf30
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_PositionOffset : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "offset min"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_OffsetMin; // 0x1c8		
		// MPropertyFriendlyName "offset max"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_OffsetMax; // 0x840		
		// MPropertyFriendlyName "transform input"
		particleslib::CParticleTransformInput m_TransformInput; // 0xeb8		
		// MPropertyFriendlyName "offset in local space 0/1"
		bool m_bLocalCoords; // 0xf20		
		// MPropertyFriendlyName "offset proportional to radius 0/1"
		bool m_bProportional; // 0xf21		
	private:
		[[maybe_unused]] uint8_t __pad0f22[0x2]; // 0xf22
	public:
		// MPropertyFriendlyName "Random number generator controls"
		particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0xf24		
	};
};
