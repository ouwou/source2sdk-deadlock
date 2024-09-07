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
	// Size: 0x2b8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_PercentageBetweenTransformLerpCPs : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
		// MPropertyFriendlyName "percentage minimum"
		float m_flInputMin; // 0x1c4		
		// MPropertyFriendlyName "percentage maximum"
		float m_flInputMax; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "strarting transform"
		particleslib::CParticleTransformInput m_TransformStart; // 0x1d0		
		// MPropertyFriendlyName "end transform"
		particleslib::CParticleTransformInput m_TransformEnd; // 0x238		
		// MPropertyFriendlyName "output starting control point number"
		int32_t m_nOutputStartCP; // 0x2a0		
		// MPropertyFriendlyName "output starting control point field 0-2 X/Y/Z"
		int32_t m_nOutputStartField; // 0x2a4		
		// MPropertyFriendlyName "output ending control point number"
		int32_t m_nOutputEndCP; // 0x2a8		
		// MPropertyFriendlyName "output ending control point field 0-2 X/Y/Z"
		int32_t m_nOutputEndField; // 0x2ac		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x2b0		
		// MPropertyFriendlyName "only active within input range"
		bool m_bActiveRange; // 0x2b4		
		// MPropertyFriendlyName "treat distance between points as radius"
		bool m_bRadialCheck; // 0x2b5		
	};
};
