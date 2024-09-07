#pragma once
#include "particles/CParticleFunctionOperator.hpp"
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
	// Size: 0x1e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_DifferencePreviousParticle : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "input field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1c0		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4		
		// MPropertyFriendlyName "difference minimum"
		float m_flInputMin; // 0x1c8		
		// MPropertyFriendlyName "difference maximum"
		float m_flInputMax; // 0x1cc		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1d0		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1d4		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x1d8		
		// MPropertyFriendlyName "only active within specified difference"
		bool m_bActiveRange; // 0x1dc		
		// MPropertyFriendlyName "also set ouput to previous particle"
		bool m_bSetPreviousParticle; // 0x1dd		
	};
};
