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
	class C_OP_SetToCP : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1c0		
		// MPropertyFriendlyName "offset"
		Vector m_vecOffset; // 0x1c4		
		// MPropertyFriendlyName "offset in local space"
		bool m_bOffsetLocal; // 0x1d0		
	};
};
