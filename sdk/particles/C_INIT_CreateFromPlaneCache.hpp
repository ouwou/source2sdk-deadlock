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
	class C_INIT_CreateFromPlaneCache : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "local offset min"
		// MVectorIsCoordinate
		Vector m_vecOffsetMin; // 0x1c8		
		// MPropertyFriendlyName "local offset max"
		// MVectorIsCoordinate
		Vector m_vecOffsetMax; // 0x1d4		
	private:
		[[maybe_unused]] uint8_t __pad01e0[0x1]; // 0x1e0
	public:
		// MPropertyFriendlyName "set normal"
		bool m_bUseNormal; // 0x1e1		
	};
};
