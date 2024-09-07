#pragma once
#include "particles/CParticleFunctionOperator.hpp"
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
	class C_OP_VelocityDecay : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "minimum velocity"
		float m_flMinVelocity; // 0x1c0		
	};
};
