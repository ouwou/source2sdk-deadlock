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
	class C_OP_ChooseRandomChildrenInGroup : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "group ID to affect"
		int32_t m_nChildGroupID; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "Number of Children to Use"
		particleslib::CParticleCollectionFloatInput m_flNumberOfChildren; // 0x1d0		
	};
};
