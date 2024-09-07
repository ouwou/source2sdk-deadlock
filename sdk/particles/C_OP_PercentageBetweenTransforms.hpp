#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x2b0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_PercentageBetweenTransforms : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
		// MPropertyFriendlyName "percentage minimum"
		float m_flInputMin; // 0x1c4		
		// MPropertyFriendlyName "percentage maximum"
		float m_flInputMax; // 0x1c8		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1cc		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
	public:
		// MPropertyFriendlyName "strarting transform"
		particleslib::CParticleTransformInput m_TransformStart; // 0x1d8		
		// MPropertyFriendlyName "end transform"
		particleslib::CParticleTransformInput m_TransformEnd; // 0x240		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x2a8		
		// MPropertyFriendlyName "only active within input range"
		bool m_bActiveRange; // 0x2ac		
		// MPropertyFriendlyName "treat distance between points as radius"
		bool m_bRadialCheck; // 0x2ad		
	};
};
