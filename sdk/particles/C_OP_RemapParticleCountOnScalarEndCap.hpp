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
	class C_OP_RemapParticleCountOnScalarEndCap : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
		// MPropertyFriendlyName "input minimum"
		int32_t m_nInputMin; // 0x1c4		
		// MPropertyFriendlyName "input maximum"
		int32_t m_nInputMax; // 0x1c8		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1cc		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1d0		
		// MPropertyFriendlyName "count back from last particle"
		bool m_bBackwards; // 0x1d4		
	private:
		[[maybe_unused]] uint8_t __pad01d5[0x3]; // 0x1d5
	public:
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x1d8		
	};
};
