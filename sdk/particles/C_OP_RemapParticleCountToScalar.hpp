#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x750
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapParticleCountToScalar : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "input minimum"
		particleslib::CParticleCollectionFloatInput m_nInputMin; // 0x1c8		
		// MPropertyFriendlyName "input maximum"
		particleslib::CParticleCollectionFloatInput m_nInputMax; // 0x328		
		// MPropertyFriendlyName "output minimum"
		particleslib::CParticleCollectionFloatInput m_flOutputMin; // 0x488		
		// MPropertyFriendlyName "output maximum"
		particleslib::CParticleCollectionFloatInput m_flOutputMax; // 0x5e8		
		// MPropertyFriendlyName
		bool m_bActiveRange; // 0x748		
	private:
		[[maybe_unused]] uint8_t __pad0749[0x3]; // 0x749
	public:
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x74c		
	};
};
