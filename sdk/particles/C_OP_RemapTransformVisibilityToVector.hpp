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
	// Size: 0x258
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapTransformVisibilityToVector : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "transform input"
		particleslib::CParticleTransformInput m_TransformInput; // 0x1c8		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x230		
		// MPropertyFriendlyName "CP visibility minimum"
		float m_flInputMin; // 0x234		
		// MPropertyFriendlyName "CP visibility maximum"
		float m_flInputMax; // 0x238		
		// MPropertyFriendlyName "output minimum"
		Vector m_vecOutputMin; // 0x23c		
		// MPropertyFriendlyName "output maximum"
		Vector m_vecOutputMax; // 0x248		
		// MPropertyFriendlyName "visibility radius"
		float m_flRadius; // 0x254		
	};
};
