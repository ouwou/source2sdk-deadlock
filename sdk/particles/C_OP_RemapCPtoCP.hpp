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
	// Size: 0x1f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapCPtoCP : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "input control point number"
		int32_t m_nInputControlPoint; // 0x1c8		
		// MPropertyFriendlyName "output control point number"
		int32_t m_nOutputControlPoint; // 0x1cc		
		// MPropertyFriendlyName "input field"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nInputField; // 0x1d0		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nOutputField; // 0x1d4		
		// MPropertyFriendlyName "input minimum"
		float m_flInputMin; // 0x1d8		
		// MPropertyFriendlyName "input maximum"
		float m_flInputMax; // 0x1dc		
		// MPropertyFriendlyName "output minimum"
		float m_flOutputMin; // 0x1e0		
		// MPropertyFriendlyName "output maximum"
		float m_flOutputMax; // 0x1e4		
		// MPropertyFriendlyName "use the derivative"
		bool m_bDerivative; // 0x1e8		
	private:
		[[maybe_unused]] uint8_t __pad01e9[0x3]; // 0x1e9
	public:
		// MPropertyFriendlyName "interpolation"
		float m_flInterpRate; // 0x1ec		
	};
};
