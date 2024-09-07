#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/EventTypeSelection_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x5f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetUserEvent : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "input value"
		particleslib::CPerParticleFloatInput m_flInput; // 0x1c0		
		// MPropertyFriendlyName "rising edge value"
		particleslib::CPerParticleFloatInput m_flRisingEdge; // 0x320		
		// MPropertyFriendlyName "rising edge event type"
		particles::EventTypeSelection_t m_nRisingEventType; // 0x480		
	private:
		[[maybe_unused]] uint8_t __pad0484[0x4]; // 0x484
	public:
		// MPropertyFriendlyName "falling edge value"
		particleslib::CPerParticleFloatInput m_flFallingEdge; // 0x488		
		// MPropertyFriendlyName "falling edge event type"
		particles::EventTypeSelection_t m_nFallingEventType; // 0x5e8		
	};
};
