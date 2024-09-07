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
	class CGeneralSpin : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "spin rate degrees"
		int32_t m_nSpinRateDegrees; // 0x1c0		
		// MPropertyFriendlyName "spin rate min"
		int32_t m_nSpinRateMinDegrees; // 0x1c4		
	private:
		[[maybe_unused]] uint8_t __pad01c8[0x4]; // 0x1c8
	public:
		// MPropertyFriendlyName "spin stop time"
		float m_fSpinRateStopTime; // 0x1cc		
	};
};
