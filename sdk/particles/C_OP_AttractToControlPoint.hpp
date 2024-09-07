#pragma once
#include "particles/CParticleFunctionForce.hpp"
#include "particleslib/CParticleTransformInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x518
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_AttractToControlPoint : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "component scale"
		// MVectorIsCoordinate
		Vector m_vecComponentScale; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01dc[0x4]; // 0x1dc
	public:
		// MPropertyFriendlyName "amount of force (or Max Force)"
		particleslib::CPerParticleFloatInput m_fForceAmount; // 0x1e0		
		// MPropertyFriendlyName "falloff power"
		float m_fFalloffPower; // 0x340		
	private:
		[[maybe_unused]] uint8_t __pad0344[0x4]; // 0x344
	public:
		// MPropertyFriendlyName "input position transform"
		particleslib::CParticleTransformInput m_TransformInput; // 0x348		
		// MPropertyFriendlyName "Min Pullforce"
		particleslib::CPerParticleFloatInput m_fForceAmountMin; // 0x3b0		
		// MPropertyFriendlyName "Apply Min Pullforce"
		bool m_bApplyMinForce; // 0x510		
	};
};
