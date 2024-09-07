#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/CRandomNumberGeneratorParameters.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xec8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_CreateWithinBox : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "min"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_vecMin; // 0x1c8		
		// MPropertyFriendlyName "max"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_vecMax; // 0x840		
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0xeb8		
		// MPropertyFriendlyName "use local space"
		bool m_bLocalSpace; // 0xebc		
	private:
		[[maybe_unused]] uint8_t __pad0ebd[0x3]; // 0xebd
	public:
		// MPropertyFriendlyName "Random number generator controls"
		particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0xec0		
	};
};
