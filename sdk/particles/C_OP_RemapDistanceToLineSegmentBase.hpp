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
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapDistanceToLineSegmentBase : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "control point 0"
		int32_t m_nCP0; // 0x1c0		
		// MPropertyFriendlyName "control point 1"
		int32_t m_nCP1; // 0x1c4		
		// MPropertyFriendlyName "min distance value"
		float m_flMinInputValue; // 0x1c8		
		// MPropertyFriendlyName "max distance value"
		float m_flMaxInputValue; // 0x1cc		
		// MPropertyFriendlyName "use distance to an infinite line instead of a finite line segment"
		bool m_bInfiniteLine; // 0x1d0		
	};
};
