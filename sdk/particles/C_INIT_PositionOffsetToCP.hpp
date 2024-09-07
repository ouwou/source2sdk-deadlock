#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
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
	class C_INIT_PositionOffsetToCP : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "creation control point number"
		int32_t m_nControlPointNumberStart; // 0x1c8		
		// MPropertyFriendlyName "offset control point number"
		int32_t m_nControlPointNumberEnd; // 0x1cc		
		// MPropertyFriendlyName "offset in local space 0/1"
		bool m_bLocalCoords; // 0x1d0		
	};
};
