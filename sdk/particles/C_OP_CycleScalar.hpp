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
	// Size: 0x1e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_CycleScalar : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "destination scalar field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nDestField; // 0x1c0		
		// MPropertyFriendlyName "Value at start of cycle"
		float m_flStartValue; // 0x1c4		
		// MPropertyFriendlyName "Value at end of cycle"
		float m_flEndValue; // 0x1c8		
		// MPropertyFriendlyName "Cycle time"
		float m_flCycleTime; // 0x1cc		
		// MPropertyFriendlyName "Do not repeat cycle"
		bool m_bDoNotRepeatCycle; // 0x1d0		
		// MPropertyFriendlyName "Synchronize particles"
		bool m_bSynchronizeParticles; // 0x1d1		
	private:
		[[maybe_unused]] uint8_t __pad01d2[0x2]; // 0x1d2
	public:
		// MPropertyFriendlyName "Scale Start/End Control Point"
		int32_t m_nCPScale; // 0x1d4		
		// MPropertyFriendlyName "start scale control point field"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nCPFieldMin; // 0x1d8		
		// MPropertyFriendlyName "end scale control point field"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nCPFieldMax; // 0x1dc		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x1e0		
	};
};
