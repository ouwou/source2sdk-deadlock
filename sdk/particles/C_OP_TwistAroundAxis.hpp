#pragma once
#include "particles/CParticleFunctionForce.hpp"
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
	class C_OP_TwistAroundAxis : public particles::CParticleFunctionForce
	{
	public:
		// MPropertyFriendlyName "amount of force"
		float m_fForceAmount; // 0x1d0		
		// MPropertyFriendlyName "twist axis"
		// MVectorIsCoordinate
		Vector m_TwistAxis; // 0x1d4		
		// MPropertyFriendlyName "object local space axis 0/1"
		bool m_bLocalSpace; // 0x1e0		
	private:
		[[maybe_unused]] uint8_t __pad01e1[0x3]; // 0x1e1
	public:
		// MPropertyFriendlyName "control point"
		int32_t m_nControlPointNumber; // 0x1e4		
	};
};
