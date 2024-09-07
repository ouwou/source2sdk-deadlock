#pragma once
#include "particles/CParticleFunction.hpp"
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
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CParticleFunctionEmitter : public particles::CParticleFunction
	{
	public:
		// MPropertyFriendlyName "Emitter Index"
		int32_t m_nEmitterIndex; // 0x1c0		
	};
};
