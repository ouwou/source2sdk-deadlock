#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
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
	// Size: 0x2e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RemapTransformToVector : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8		
		// MPropertyFriendlyName "input minimum"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vInputMin; // 0x1cc		
		// MPropertyFriendlyName "input maximum"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vInputMax; // 0x1d8		
		// MPropertyFriendlyName "output minimum"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vOutputMin; // 0x1e4		
		// MPropertyFriendlyName "output maximum"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		Vector m_vOutputMax; // 0x1f0		
	private:
		[[maybe_unused]] uint8_t __pad01fc[0x4]; // 0x1fc
	public:
		// MPropertyFriendlyName "transform input"
		particleslib::CParticleTransformInput m_TransformInput; // 0x200		
		// MPropertyFriendlyName "local space transform"
		// MParticleInputOptional
		particleslib::CParticleTransformInput m_LocalSpaceTransform; // 0x268		
		// MPropertyFriendlyName "emitter lifetime start time (seconds)"
		float m_flStartTime; // 0x2d0		
		// MPropertyFriendlyName "emitter lifetime end time (seconds)"
		float m_flEndTime; // 0x2d4		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x2d8		
		// MPropertyFriendlyName "offset position"
		bool m_bOffset; // 0x2dc		
		// MPropertyFriendlyName "accelerate position"
		bool m_bAccelerate; // 0x2dd		
	private:
		[[maybe_unused]] uint8_t __pad02de[0x2]; // 0x2de
	public:
		// MPropertyFriendlyName "remap bias"
		float m_flRemapBias; // 0x2e0		
	};
};
