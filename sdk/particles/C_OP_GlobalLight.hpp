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
	class C_OP_GlobalLight : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "initial color bias"
		float m_flScale; // 0x1c0		
		// MPropertyFriendlyName "clamp minimum light value to initial color"
		bool m_bClampLowerRange; // 0x1c4		
		// MPropertyFriendlyName "clamp maximum light value to initial color"
		bool m_bClampUpperRange; // 0x1c5		
	};
};
