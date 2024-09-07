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
	// Size: 0x1e8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapSpeedtoCP : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "input control point"
		int32_t m_nInControlPointNumber; // 0x1c8		
		// MPropertyFriendlyName "output control point"
		int32_t m_nOutControlPointNumber; // 0x1cc		
		// MPropertyFriendlyName "Output field 0-2 X/Y/Z"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nField; // 0x1d0		
		// MPropertyFriendlyName "input minimum"
		float m_flInputMin; // 0x1d4		
		// MPropertyFriendlyName "input maximum"
		float m_flInputMax; // 0x1d8		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1dc		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1e0		
		// MPropertyFriendlyName "use delta of velocity instead of constant speed"
		bool m_bUseDeltaV; // 0x1e4		
	};
};
