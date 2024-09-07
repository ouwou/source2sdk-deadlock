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
	// Size: 0x5f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RepeatedTriggerChildGroup : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "group ID to affect"
		int32_t m_nChildGroupID; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "Within-Cluster Refire Time"
		particleslib::CParticleCollectionFloatInput m_flClusterRefireTime; // 0x1d0		
		// MPropertyFriendlyName "Within-Cluster Fire Count Before Cooldown"
		particleslib::CParticleCollectionFloatInput m_flClusterSize; // 0x330		
		// MPropertyFriendlyName "Cluster Cooldown Time"
		particleslib::CParticleCollectionFloatInput m_flClusterCooldown; // 0x490		
		// MPropertyFriendlyName "limit active children to parent particle count"
		bool m_bLimitChildCount; // 0x5f0		
	};
};
