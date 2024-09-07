#pragma once
#include "particles/ParticleReplicationMode_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1118
	// 
	// MGetKV3ClassDefaults
	class CReplicationParameters
	{
	public:
		// MPropertyFriendlyName "Replication mode"
		particles::ParticleReplicationMode_t m_nReplicationMode; // 0x0		
		// MPropertyFriendlyName "Scale child particle radius based on parent radius"
		bool m_bScaleChildParticleRadii; // 0x4		
	private:
		[[maybe_unused]] uint8_t __pad0005[0x3]; // 0x5
	public:
		// MPropertyFriendlyName "Minimum random scale for radius"
		particleslib::CParticleCollectionFloatInput m_flMinRandomRadiusScale; // 0x8		
		// MPropertyFriendlyName "Maximum random scale for radius"
		particleslib::CParticleCollectionFloatInput m_flMaxRandomRadiusScale; // 0x168		
		// MPropertyFriendlyName "min random displacement for child particles"
		particleslib::CParticleCollectionVecInput m_vMinRandomDisplacement; // 0x2c8		
		// MPropertyFriendlyName "max random displacement for child particles"
		particleslib::CParticleCollectionVecInput m_vMaxRandomDisplacement; // 0x940		
		// MPropertyFriendlyName "Modelling scale"
		particleslib::CParticleCollectionFloatInput m_flModellingScale; // 0xfb8		
	};
};
