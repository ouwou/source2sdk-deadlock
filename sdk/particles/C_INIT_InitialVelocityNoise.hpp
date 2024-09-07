#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CParticleTransformInput.hpp"
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
	// Size: 0x19d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_InitialVelocityNoise : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "absolute value"
		// MVectorIsCoordinate
		Vector m_vecAbsVal; // 0x1c8		
		// MPropertyFriendlyName "invert abs value"
		// MVectorIsCoordinate
		Vector m_vecAbsValInv; // 0x1d4		
		// MPropertyFriendlyName "spatial coordinate offset"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_vecOffsetLoc; // 0x1e0		
		// MPropertyFriendlyName "time coordinate offset"
		particleslib::CPerParticleFloatInput m_flOffset; // 0x858		
		// MPropertyFriendlyName "output minimum"
		particleslib::CPerParticleVecInput m_vecOutputMin; // 0x9b8		
		// MPropertyFriendlyName "output maximum"
		particleslib::CPerParticleVecInput m_vecOutputMax; // 0x1030		
		// MPropertyFriendlyName "time noise coordinate scale"
		particleslib::CPerParticleFloatInput m_flNoiseScale; // 0x16a8		
		// MPropertyFriendlyName "spatial noise coordinate scale"
		particleslib::CPerParticleFloatInput m_flNoiseScaleLoc; // 0x1808		
		// MPropertyFriendlyName "input local space velocity (optional)"
		// MParticleInputOptional
		particleslib::CParticleTransformInput m_TransformInput; // 0x1968		
		// MPropertyFriendlyName "ignore delta time"
		bool m_bIgnoreDt; // 0x19d0		
	};
};
