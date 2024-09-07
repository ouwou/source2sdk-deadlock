#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
#include "particles/ParticleTraceSet_t.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xec0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_DistanceToTransform : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "distance minimum"
		particleslib::CPerParticleFloatInput m_flInputMin; // 0x1c8		
		// MPropertyFriendlyName "distance maximum"
		particleslib::CPerParticleFloatInput m_flInputMax; // 0x328		
		// MPropertyFriendlyName "output minimum"
		particleslib::CPerParticleFloatInput m_flOutputMin; // 0x488		
		// MPropertyFriendlyName "output maximum"
		particleslib::CPerParticleFloatInput m_flOutputMax; // 0x5e8		
		// MPropertyFriendlyName "transform input"
		particleslib::CParticleTransformInput m_TransformStart; // 0x748		
		// MPropertyFriendlyName "ensure line of sight"
		bool m_bLOS; // 0x7b0		
		// MPropertyFriendlyName "LOS collision group"
		char m_CollisionGroupName[128]; // 0x7b1		
	private:
		[[maybe_unused]] uint8_t __pad0831[0x3]; // 0x831
	public:
		// MPropertyFriendlyName "Trace Set"
		particles::ParticleTraceSet_t m_nTraceSet; // 0x834		
		// MPropertyFriendlyName "maximum trace length"
		float m_flMaxTraceLength; // 0x838		
		// MPropertyFriendlyName "LOS Failure Scalar"
		float m_flLOSScale; // 0x83c		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x840		
		// MPropertyFriendlyName "only active within specified distance"
		bool m_bActiveRange; // 0x844		
		// MPropertyFriendlyName "output is additive"
		bool m_bAdditive; // 0x845		
	private:
		[[maybe_unused]] uint8_t __pad0846[0x2]; // 0x846
	public:
		// MPropertyFriendlyName "component scale"
		particleslib::CPerParticleVecInput m_vecComponentScale; // 0x848		
	};
};
