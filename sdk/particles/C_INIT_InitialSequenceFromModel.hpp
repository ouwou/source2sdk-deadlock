#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
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
	class C_INIT_InitialSequenceFromModel : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1c8		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc		
		// MPropertyFriendlyName "current anim time output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutputAnim; // 0x1d0		
		// MPropertyFriendlyName "input minimum"
		float m_flInputMin; // 0x1d4		
		// MPropertyFriendlyName "input maximum"
		float m_flInputMax; // 0x1d8		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1dc		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1e0		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x1e4		
	};
};
