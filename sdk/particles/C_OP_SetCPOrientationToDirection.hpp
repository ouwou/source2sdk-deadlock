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
	class C_OP_SetCPOrientationToDirection : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "input control point"
		int32_t m_nInputControlPoint; // 0x1c0		
		// MPropertyFriendlyName "output control point"
		int32_t m_nOutputControlPoint; // 0x1c4		
	};
};
