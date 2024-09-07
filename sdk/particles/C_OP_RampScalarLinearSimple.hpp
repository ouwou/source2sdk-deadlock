#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 16
	// Size: 0x200
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RampScalarLinearSimple : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "ramp rate"
		float m_Rate; // 0x1c0		
		// MPropertyFriendlyName "start time"
		float m_flStartTime; // 0x1c4		
		// MPropertyFriendlyName "end time"
		float m_flEndTime; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x24]; // 0x1cc
	public:
		// MPropertyFriendlyName "ramp field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nField; // 0x1f0		
	};
};
