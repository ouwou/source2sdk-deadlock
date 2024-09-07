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
	// Size: 0x2c0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_PercentageBetweenTransformsVector : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
		// MPropertyFriendlyName "percentage minimum"
		float m_flInputMin; // 0x1c4		
		// MPropertyFriendlyName "percentage maximum"
		float m_flInputMax; // 0x1c8		
		// MPropertyFriendlyName "output minimum"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vecOutputMin; // 0x1cc		
		// MPropertyFriendlyName "output maximum"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vecOutputMax; // 0x1d8		
	private:
		[[maybe_unused]] uint8_t __pad01e4[0x4]; // 0x1e4
	public:
		// MPropertyFriendlyName "strarting transform"
		particleslib::CParticleTransformInput m_TransformStart; // 0x1e8		
		// MPropertyFriendlyName "end transform"
		particleslib::CParticleTransformInput m_TransformEnd; // 0x250		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x2b8		
		// MPropertyFriendlyName "only active within input range"
		bool m_bActiveRange; // 0x2bc		
		// MPropertyFriendlyName "treat distance between points as radius"
		bool m_bRadialCheck; // 0x2bd		
	};
};
