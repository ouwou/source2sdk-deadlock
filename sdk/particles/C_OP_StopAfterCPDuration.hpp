#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x330
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_StopAfterCPDuration : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "duration at which to stop"
		particleslib::CParticleCollectionFloatInput m_flDuration; // 0x1c8		
		// MPropertyFriendlyName "destroy all particles immediately"
		bool m_bDestroyImmediately; // 0x328		
		// MPropertyFriendlyName "play end cap effect"
		bool m_bPlayEndCap; // 0x329		
	};
};
