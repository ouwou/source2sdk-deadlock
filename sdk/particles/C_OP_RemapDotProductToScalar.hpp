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
	class C_OP_RemapDotProductToScalar : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "first input control point"
		int32_t m_nInputCP1; // 0x1c0		
		// MPropertyFriendlyName "second input control point"
		int32_t m_nInputCP2; // 0x1c4		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8		
		// MPropertyFriendlyName "input minimum (-1 to 1)"
		float m_flInputMin; // 0x1cc		
		// MPropertyFriendlyName "input maximum (-1 to 1)"
		float m_flInputMax; // 0x1d0		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1d4		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1d8		
		// MPropertyFriendlyName "use particle velocity for first input"
		bool m_bUseParticleVelocity; // 0x1dc		
	private:
		[[maybe_unused]] uint8_t __pad01dd[0x3]; // 0x1dd
	public:
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x1e0		
		// MPropertyFriendlyName "only active within specified input range"
		bool m_bActiveRange; // 0x1e4		
		// MPropertyFriendlyName "use particle normal for first input"
		bool m_bUseParticleNormal; // 0x1e5		
	};
};
