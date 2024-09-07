#pragma once
#include "particles/CParticleFunctionForce.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1e80
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ExternalWindForce : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "sample position"
		particleslib::CPerParticleVecInput m_vecSamplePosition; // 0x1d0		
		// MPropertyFriendlyName "force scale"
		particleslib::CPerParticleVecInput m_vecScale; // 0x848		
		// MPropertyFriendlyName "sample wind"
		bool m_bSampleWind; // 0xec0		
		// MPropertyFriendlyName "sample water current"
		bool m_bSampleWater; // 0xec1		
		// MPropertyFriendlyName "dampen gravity/buoyancy near water plane"
		// MPropertySuppressExpr "!m_bSampleWater"
		bool m_bDampenNearWaterPlane; // 0xec2		
		// MPropertyFriendlyName "sample local gravity"
		bool m_bSampleGravity; // 0xec3		
	private:
		[[maybe_unused]] uint8_t __pad0ec4[0x4]; // 0xec4
	public:
		// MPropertyFriendlyName "gravity force"
		// MPropertySuppressExpr "m_bSampleGravity"
		particleslib::CPerParticleVecInput m_vecGravityForce; // 0xec8		
		// MPropertyFriendlyName "use Movement Basic for Local Gravity & Buoyancy Scale"
		// MPropertySuppressExpr "!m_bSampleGravity"
		bool m_bUseBasicMovementGravity; // 0x1540		
	private:
		[[maybe_unused]] uint8_t __pad1541[0x7]; // 0x1541
	public:
		// MPropertyFriendlyName "local gravity scale"
		// MPropertySuppressExpr "!m_bSampleGravity"
		particleslib::CPerParticleFloatInput m_flLocalGravityScale; // 0x1548		
		// MPropertyFriendlyName "local gravity buoyancy scale"
		// MPropertySuppressExpr "!m_bSampleGravity"
		particleslib::CPerParticleFloatInput m_flLocalBuoyancyScale; // 0x16a8		
		// MPropertyFriendlyName "buoyancy force"
		// MPropertySuppressExpr "!m_bSampleWater || m_bSampleGravity"
		particleslib::CPerParticleVecInput m_vecBuoyancyForce; // 0x1808		
	};
};
