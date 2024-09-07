#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
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
	// Size: 0x1f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_RemapParticleCountToScalar : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8		
		// MPropertyFriendlyName "input minimum"
		int32_t m_nInputMin; // 0x1cc		
		// MPropertyFriendlyName "input maximum"
		int32_t m_nInputMax; // 0x1d0		
		// MPropertyFriendlyName "input scale control point"
		int32_t m_nScaleControlPoint; // 0x1d4		
		// MPropertyFriendlyName "input scale control point field"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nScaleControlPointField; // 0x1d8		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1dc		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1e0		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x1e4		
		// MPropertyFriendlyName "only active within specified input range"
		bool m_bActiveRange; // 0x1e8		
		// MPropertyFriendlyName "invert input from total particle count"
		bool m_bInvert; // 0x1e9		
		// MPropertyFriendlyName "wrap input"
		bool m_bWrap; // 0x1ea		
	private:
		[[maybe_unused]] uint8_t __pad01eb[0x1]; // 0x1eb
	public:
		// MPropertyFriendlyName "remap bias"
		float m_flRemapBias; // 0x1ec		
	};
};
