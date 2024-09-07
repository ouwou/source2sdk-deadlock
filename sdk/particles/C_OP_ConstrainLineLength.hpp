#pragma once
#include "particles/CParticleFunctionConstraint.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1c8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ConstrainLineLength : public particles::CParticleFunctionConstraint
	{
	public:
		// MPropertyFriendlyName "minimum length"
		float m_flMinDistance; // 0x1c0		
		// MPropertyFriendlyName "maximum length"
		float m_flMaxDistance; // 0x1c4		
	};
};
