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
	class C_OP_RemapSpeed : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0		
		// MPropertyFriendlyName "input minimum"
		float m_flInputMin; // 0x1c4		
		// MPropertyFriendlyName "input maximum"
		float m_flInputMax; // 0x1c8		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1cc		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1d0		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x1d4		
		// MPropertyFriendlyName "ignore delta time"
		bool m_bIgnoreDelta; // 0x1d8		
	};
};
