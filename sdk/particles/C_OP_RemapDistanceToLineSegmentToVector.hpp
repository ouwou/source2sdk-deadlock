#pragma once
#include "particles/C_OP_RemapDistanceToLineSegmentBase.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
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
	class C_OP_RemapDistanceToLineSegmentToVector : public particles::C_OP_RemapDistanceToLineSegmentBase
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d8		
		// MPropertyFriendlyName "output value at min distance"
		Vector m_vMinOutputValue; // 0x1dc		
		// MPropertyFriendlyName "output value at max distance"
		Vector m_vMaxOutputValue; // 0x1e8		
	};
};
