#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xed8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_PositionWarp : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "warp min"
		// MVectorIsCoordinate
		particleslib::CParticleCollectionVecInput m_vecWarpMin; // 0x1c8		
		// MPropertyFriendlyName "warp max"
		// MVectorIsCoordinate
		particleslib::CParticleCollectionVecInput m_vecWarpMax; // 0x840		
		// MPropertyFriendlyName "warp scale control point number"
		int32_t m_nScaleControlPointNumber; // 0xeb8		
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0xebc		
		// MPropertyFriendlyName "radius scale component"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nRadiusComponent; // 0xec0		
		// MPropertyFriendlyName "warp transition time (treats min/max as start/end sizes)"
		float m_flWarpTime; // 0xec4		
		// MPropertyFriendlyName "warp transition start time"
		float m_flWarpStartTime; // 0xec8		
		// MPropertyFriendlyName "previous position sacale"
		float m_flPrevPosScale; // 0xecc		
		// MPropertyFriendlyName "reverse warp (0/1)"
		bool m_bInvertWarp; // 0xed0		
		// MPropertyFriendlyName "use particle count instead of time"
		bool m_bUseCount; // 0xed1		
	};
};
