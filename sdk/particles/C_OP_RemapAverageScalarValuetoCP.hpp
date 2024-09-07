#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapAverageScalarValuetoCP : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "output control point"
		int32_t m_nOutControlPointNumber; // 0x1c8		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nOutVectorField; // 0x1cc		
		// MPropertyFriendlyName "scalar field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nField; // 0x1d0		
		// MPropertyFriendlyName "input volume minimum"
		float m_flInputMin; // 0x1d4		
		// MPropertyFriendlyName "input volume maximum"
		float m_flInputMax; // 0x1d8		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1dc		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1e0		
	};
};
