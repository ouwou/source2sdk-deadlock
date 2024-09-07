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
	// Size: 0x1e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_NormalOffset : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "offset min"
		// MVectorIsCoordinate
		Vector m_OffsetMin; // 0x1c8		
		// MPropertyFriendlyName "offset max"
		// MVectorIsCoordinate
		Vector m_OffsetMax; // 0x1d4		
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1e0		
		// MPropertyFriendlyName "offset in local space 0/1"
		bool m_bLocalCoords; // 0x1e4		
		// MPropertyFriendlyName "normalize output 0/1"
		bool m_bNormalize; // 0x1e5		
	};
};
