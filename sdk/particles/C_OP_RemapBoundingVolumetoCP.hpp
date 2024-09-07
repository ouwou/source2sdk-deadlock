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
	class C_OP_RemapBoundingVolumetoCP : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "output control point"
		int32_t m_nOutControlPointNumber; // 0x1c8		
		// MPropertyFriendlyName "input volume minimum in cubic units"
		float m_flInputMin; // 0x1cc		
		// MPropertyFriendlyName "input volume maximum in cubic units"
		float m_flInputMax; // 0x1d0		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1d4		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1d8		
	};
};
