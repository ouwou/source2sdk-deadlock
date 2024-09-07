#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particles/ParticleLightnintBranchBehavior_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1100
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_LightningSnapshotGenerator : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "snapshot control point number"
		int32_t m_nCPSnapshot; // 0x1c8		
		// MPropertyFriendlyName "start control point number"
		int32_t m_nCPStartPnt; // 0x1cc		
		// MPropertyFriendlyName "end control point number"
		int32_t m_nCPEndPnt; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
	public:
		// MPropertyFriendlyName "Recursion Depth"
		particleslib::CParticleCollectionFloatInput m_flSegments; // 0x1d8		
		// MPropertyFriendlyName "Offset"
		particleslib::CParticleCollectionFloatInput m_flOffset; // 0x338		
		// MPropertyFriendlyName "Offset Decay"
		particleslib::CParticleCollectionFloatInput m_flOffsetDecay; // 0x498		
		// MPropertyFriendlyName "Recalculation Rate"
		particleslib::CParticleCollectionFloatInput m_flRecalcRate; // 0x5f8		
		// MPropertyFriendlyName "UV Scale"
		particleslib::CParticleCollectionFloatInput m_flUVScale; // 0x758		
		// MPropertyFriendlyName "UV Offset"
		particleslib::CParticleCollectionFloatInput m_flUVOffset; // 0x8b8		
		// MPropertyFriendlyName "Branch Split Rate"
		particleslib::CParticleCollectionFloatInput m_flSplitRate; // 0xa18		
		// MPropertyFriendlyName "Branch Twist"
		particleslib::CParticleCollectionFloatInput m_flBranchTwist; // 0xb78		
		// MPropertyFriendlyName "Branch Behavior"
		particles::ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0xcd8		
	private:
		[[maybe_unused]] uint8_t __pad0cdc[0x4]; // 0xcdc
	public:
		// MPropertyFriendlyName "Start Radius"
		particleslib::CParticleCollectionFloatInput m_flRadiusStart; // 0xce0		
		// MPropertyFriendlyName "End Radius"
		particleslib::CParticleCollectionFloatInput m_flRadiusEnd; // 0xe40		
		// MPropertyFriendlyName "Dedicated Particle Pool Count"
		particleslib::CParticleCollectionFloatInput m_flDedicatedPool; // 0xfa0		
	};
};
