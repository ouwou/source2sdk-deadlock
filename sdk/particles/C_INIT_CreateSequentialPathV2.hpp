#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/CPathParameters.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 16
	// Size: 0x4e0
	// Has VTable
	// 
	// MParticleMinVersion "8"
	// MGetKV3ClassDefaults
	class C_INIT_CreateSequentialPathV2 : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "maximum distance"
		particleslib::CPerParticleFloatInput m_fMaxDistance; // 0x1c8		
		// MPropertyFriendlyName "particles to map from start to end"
		particleslib::CParticleCollectionFloatInput m_flNumToAssign; // 0x328		
		// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
		bool m_bLoop; // 0x488		
		// MPropertyFriendlyName "use sequential CP pairs between start and end point"
		bool m_bCPPairs; // 0x489		
		// MPropertyFriendlyName "save offset"
		bool m_bSaveOffset; // 0x48a		
	private:
		[[maybe_unused]] uint8_t __pad048b[0x5]; // 0x48b
	public:
		particles::CPathParameters m_PathParams; // 0x490		
	};
};
