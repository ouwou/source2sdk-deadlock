#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
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
	class C_OP_SetControlPointOrientationToCPVelocity : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "control point input for velocity"
		int32_t m_nCPInput; // 0x1c8		
		// MPropertyFriendlyName "control point output for orientation"
		int32_t m_nCPOutput; // 0x1cc		
	};
};
