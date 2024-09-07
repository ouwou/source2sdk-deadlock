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
	class C_INIT_RemapScalar : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "input field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1c8		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1cc		
		// MPropertyFriendlyName "input minimum"
		float m_flInputMin; // 0x1d0		
		// MPropertyFriendlyName "input maximum"
		float m_flInputMax; // 0x1d4		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1d8		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1dc		
		// MPropertyFriendlyName "emitter lifetime start time (seconds)"
		float m_flStartTime; // 0x1e0		
		// MPropertyFriendlyName "emitter lifetime end time (seconds)"
		float m_flEndTime; // 0x1e4		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x1e8		
		// MPropertyFriendlyName "only active within specified input range"
		bool m_bActiveRange; // 0x1ec		
	private:
		[[maybe_unused]] uint8_t __pad01ed[0x3]; // 0x1ed
	public:
		// MPropertyFriendlyName "remap bias"
		float m_flRemapBias; // 0x1f0		
	};
};
