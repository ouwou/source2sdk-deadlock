#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x350
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_PositionWarpScalar : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "warp min"
		// MVectorIsCoordinate
		Vector m_vecWarpMin; // 0x1c8		
		// MPropertyFriendlyName "warp max"
		// MVectorIsCoordinate
		Vector m_vecWarpMax; // 0x1d4		
		// MPropertyFriendlyName "warp amount"
		particleslib::CPerParticleFloatInput m_InputValue; // 0x1e0		
		// MPropertyFriendlyName "previous position scale"
		float m_flPrevPosScale; // 0x340		
		// MPropertyFriendlyName "warp scale control point number"
		int32_t m_nScaleControlPointNumber; // 0x344		
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x348		
	};
};
