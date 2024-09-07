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
	// Size: 0x1e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetParentControlPointsToChildCP : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "group ID to affect"
		int32_t m_nChildGroupID; // 0x1c8		
		// MPropertyFriendlyName "control point to set"
		int32_t m_nChildControlPoint; // 0x1cc		
		// MPropertyFriendlyName "# of children to set"
		int32_t m_nNumControlPoints; // 0x1d0		
		// MPropertyFriendlyName "first parent control point to set from"
		int32_t m_nFirstSourcePoint; // 0x1d4		
		// MPropertyFriendlyName "set orientation"
		bool m_bSetOrientation; // 0x1d8		
	};
};
