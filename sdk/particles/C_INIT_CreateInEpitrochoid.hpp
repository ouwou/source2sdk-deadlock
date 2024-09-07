#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
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
	// Size: 0x7c0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_CreateInEpitrochoid : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "first dimension 0-2 (-1 disables)"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nComponent1; // 0x1c8		
		// MPropertyFriendlyName "second dimension 0-2 (-1 disables)"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nComponent2; // 0x1cc		
		// MPropertyFriendlyName "input transform"
		particleslib::CParticleTransformInput m_TransformInput; // 0x1d0		
		// MPropertyFriendlyName "particle density"
		particleslib::CPerParticleFloatInput m_flParticleDensity; // 0x238		
		// MPropertyFriendlyName "point offset"
		particleslib::CPerParticleFloatInput m_flOffset; // 0x398		
		// MPropertyFriendlyName "radius 1"
		particleslib::CPerParticleFloatInput m_flRadius1; // 0x4f8		
		// MPropertyFriendlyName "radius 2"
		particleslib::CPerParticleFloatInput m_flRadius2; // 0x658		
		// MPropertyFriendlyName "use particle count instead of creation time"
		bool m_bUseCount; // 0x7b8		
		// MPropertyFriendlyName "local space"
		bool m_bUseLocalCoords; // 0x7b9		
		// MPropertyFriendlyName "offset from existing position"
		bool m_bOffsetExistingPos; // 0x7ba		
	};
};
