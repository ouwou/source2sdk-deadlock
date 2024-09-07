#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
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
	class C_INIT_CreatePhyllotaxis : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1c8		
		// MPropertyFriendlyName "scale size multiplier from CP"
		int32_t m_nScaleCP; // 0x1cc		
		// MPropertyFriendlyName "scale CP component 0/1/2 X/Y/Z"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nComponent; // 0x1d0		
		// MPropertyFriendlyName "center core radius"
		float m_fRadCentCore; // 0x1d4		
		// MPropertyFriendlyName "radius multiplier"
		float m_fRadPerPoint; // 0x1d8		
		// MPropertyFriendlyName "radius max (-1 procedural growth)"
		float m_fRadPerPointTo; // 0x1dc		
		// MPropertyFriendlyName "golden angle (is 137.508)"
		float m_fpointAngle; // 0x1e0		
		// MPropertyFriendlyName "overall size multiplier (-1 count based distribution)"
		float m_fsizeOverall; // 0x1e4		
		// MPropertyFriendlyName "radius bias"
		float m_fRadBias; // 0x1e8		
		// MPropertyFriendlyName "radius min "
		float m_fMinRad; // 0x1ec		
		// MPropertyFriendlyName "distribution bias"
		float m_fDistBias; // 0x1f0		
		// MPropertyFriendlyName "local space"
		bool m_bUseLocalCoords; // 0x1f4		
		// MPropertyFriendlyName "use continuous emission"
		bool m_bUseWithContEmit; // 0x1f5		
		// MPropertyFriendlyName "scale radius from initial value"
		bool m_bUseOrigRadius; // 0x1f6		
	};
};
