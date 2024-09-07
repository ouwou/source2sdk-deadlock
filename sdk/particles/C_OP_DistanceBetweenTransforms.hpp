#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
#include "particles/ParticleTraceSet_t.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x8b0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_DistanceBetweenTransforms : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "strarting transform"
		particleslib::CParticleTransformInput m_TransformStart; // 0x1c8		
		// MPropertyFriendlyName "end transform"
		particleslib::CParticleTransformInput m_TransformEnd; // 0x230		
		// MPropertyFriendlyName "distance minimum"
		particleslib::CPerParticleFloatInput m_flInputMin; // 0x298		
		// MPropertyFriendlyName "distance maximum"
		particleslib::CPerParticleFloatInput m_flInputMax; // 0x3f8		
		// MPropertyFriendlyName "output minimum"
		particleslib::CPerParticleFloatInput m_flOutputMin; // 0x558		
		// MPropertyFriendlyName "output maximum"
		particleslib::CPerParticleFloatInput m_flOutputMax; // 0x6b8		
		// MPropertyFriendlyName "maximum trace length"
		float m_flMaxTraceLength; // 0x818		
		// MPropertyFriendlyName "LOS Failure Scalar"
		float m_flLOSScale; // 0x81c		
		// MPropertyFriendlyName "LOS collision group"
		char m_CollisionGroupName[128]; // 0x820		
		// MPropertyFriendlyName "Trace Set"
		particles::ParticleTraceSet_t m_nTraceSet; // 0x8a0		
		// MPropertyFriendlyName "ensure line of sight"
		bool m_bLOS; // 0x8a4		
	private:
		[[maybe_unused]] uint8_t __pad08a5[0x3]; // 0x8a5
	public:
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x8a8		
	};
};
