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
	// Size: 0x490
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_QuantizeCPComponent : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "input"
		particleslib::CParticleCollectionFloatInput m_flInputValue; // 0x1c8		
		// MPropertyFriendlyName "output control point"
		int32_t m_nCPOutput; // 0x328		
		// MPropertyFriendlyName "output component"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nOutVectorField; // 0x32c		
		// MPropertyFriendlyName "interval to snap to"
		particleslib::CParticleCollectionFloatInput m_flQuantizeValue; // 0x330		
	};
};
