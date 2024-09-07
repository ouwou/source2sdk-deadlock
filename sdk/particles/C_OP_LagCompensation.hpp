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
	// Size: 0x1d0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_LagCompensation : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "desired velocity CP"
		int32_t m_nDesiredVelocityCP; // 0x1c0		
		// MPropertyFriendlyName "latency CP"
		int32_t m_nLatencyCP; // 0x1c4		
		// MPropertyFriendlyName "latency CP field"
		int32_t m_nLatencyCPField; // 0x1c8		
		// MPropertyFriendlyName "desired velocity CP field override(for speed only)"
		int32_t m_nDesiredVelocityCPField; // 0x1cc		
	};
};
