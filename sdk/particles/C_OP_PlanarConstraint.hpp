#pragma once
#include "particles/CParticleFunctionConstraint.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x4a8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_PlanarConstraint : public particles::CParticleFunctionConstraint
	{
	public:
		// MPropertyFriendlyName "plane point"
		// MVectorIsCoordinate
		Vector m_PointOnPlane; // 0x1c0		
		// MPropertyFriendlyName "plane normal"
		Vector m_PlaneNormal; // 0x1cc		
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1d8		
		// MPropertyFriendlyName "global origin"
		bool m_bGlobalOrigin; // 0x1dc		
		// MPropertyFriendlyName "global normal"
		bool m_bGlobalNormal; // 0x1dd		
	private:
		[[maybe_unused]] uint8_t __pad01de[0x2]; // 0x1de
	public:
		// MPropertyFriendlyName "radius scale"
		particleslib::CPerParticleFloatInput m_flRadiusScale; // 0x1e0		
		// MPropertyFriendlyName "falloff distance from control point"
		particleslib::CParticleCollectionFloatInput m_flMaximumDistanceToCP; // 0x340		
		// MPropertyFriendlyName "use old code"
		bool m_bUseOldCode; // 0x4a0		
	};
};
