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
	// Size: 0x1d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_DistanceCull : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "control point"
		int32_t m_nControlPoint; // 0x1c0		
		// MPropertyFriendlyName "control point offset"
		// MVectorIsCoordinate
		Vector m_vecPointOffset; // 0x1c4		
		// MPropertyFriendlyName "cull distance"
		float m_flDistance; // 0x1d0		
		// MPropertyFriendlyName "cull inside instead of outside"
		bool m_bCullInside; // 0x1d4		
	};
};
