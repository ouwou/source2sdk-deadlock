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
	// Size: 0x1e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SDFLighting : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "Lighting dir"
		Vector m_vLightingDir; // 0x1c0		
		// MPropertyFriendlyName "shadow color"
		Vector m_vTint_0; // 0x1cc		
		// MPropertyFriendlyName "lit color"
		Vector m_vTint_1; // 0x1d8		
	};
};
