#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x338
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_DecayMaintainCount : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "count to maintain"
		int32_t m_nParticlesToMaintain; // 0x1c0		
		// MPropertyFriendlyName "decay delay"
		float m_flDecayDelay; // 0x1c4		
		// MPropertyFriendlyName "snapshot control point for count"
		int32_t m_nSnapshotControlPoint; // 0x1c8		
		// MPropertyFriendlyName "decay on lifespan"
		bool m_bLifespanDecay; // 0x1cc		
	private:
		[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
	public:
		// MPropertyFriendlyName "total count scale"
		particleslib::CParticleCollectionFloatInput m_flScale; // 0x1d0		
		// MPropertyFriendlyName "kill newest instead of oldest"
		bool m_bKillNewest; // 0x330		
	};
};
