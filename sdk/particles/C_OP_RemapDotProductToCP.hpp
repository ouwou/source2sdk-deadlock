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
	// Size: 0x758
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapDotProductToCP : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "first input control point"
		int32_t m_nInputCP1; // 0x1c8		
		// MPropertyFriendlyName "second input control point"
		int32_t m_nInputCP2; // 0x1cc		
		// MPropertyFriendlyName "output control point"
		int32_t m_nOutputCP; // 0x1d0		
		// MPropertyFriendlyName "output component"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nOutVectorField; // 0x1d4		
		// MPropertyFriendlyName "input minimum (-1 to 1)"
		particleslib::CParticleCollectionFloatInput m_flInputMin; // 0x1d8		
		// MPropertyFriendlyName "input maximum (-1 to 1)"
		particleslib::CParticleCollectionFloatInput m_flInputMax; // 0x338		
		// MPropertyFriendlyName "output minimum"
		particleslib::CParticleCollectionFloatInput m_flOutputMin; // 0x498		
		// MPropertyFriendlyName "output maximum"
		particleslib::CParticleCollectionFloatInput m_flOutputMax; // 0x5f8		
	};
};
