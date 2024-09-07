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
	// Size: 0x1c8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_Decay : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "Reduce rope popping on decay"
		bool m_bRopeDecay; // 0x1c0		
		// MPropertyFriendlyName "force preserving particle order"
		bool m_bForcePreserveParticleOrder; // 0x1c1		
	};
};
