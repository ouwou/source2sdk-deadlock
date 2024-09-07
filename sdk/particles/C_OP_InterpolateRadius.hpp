#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 16
	// Size: 0x210
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_InterpolateRadius : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "start time"
		float m_flStartTime; // 0x1c0		
		// MPropertyFriendlyName "end time"
		float m_flEndTime; // 0x1c4		
		// MPropertyFriendlyName "radius start scale"
		float m_flStartScale; // 0x1c8		
		// MPropertyFriendlyName "radius end scale"
		float m_flEndScale; // 0x1cc		
		// MPropertyFriendlyName "ease in and out"
		bool m_bEaseInAndOut; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d1[0x3]; // 0x1d1
	public:
		// MPropertyFriendlyName "scale bias"
		float m_flBias; // 0x1d4		
	};
};
