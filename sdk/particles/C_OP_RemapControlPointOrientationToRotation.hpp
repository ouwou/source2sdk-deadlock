#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapControlPointOrientationToRotation : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "control point"
		int32_t m_nCP; // 0x1c0		
		// MPropertyFriendlyName "rotation field"
		// MPropertyAttributeChoiceName "particlefield_rotation"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4		
		// MPropertyFriendlyName "offset rotation"
		float m_flOffsetRot; // 0x1c8		
		// MPropertyFriendlyName "control point axis"
		// MPropertyAttributeChoiceName "vector_component"
		// MVectorIsSometimesCoordinate "m_nFieldOutput"
		int32_t m_nComponent; // 0x1cc		
	};
};