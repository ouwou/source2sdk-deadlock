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
	// Size: 0x5f0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SelectivelyEnableChildren : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "group ID to affect"
		particleslib::CParticleCollectionFloatInput m_nChildGroupID; // 0x1c8		
		// MPropertyFriendlyName "first child to enable"
		particleslib::CParticleCollectionFloatInput m_nFirstChild; // 0x328		
		// MPropertyFriendlyName "# of children to enable"
		particleslib::CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x488		
		// MPropertyFriendlyName "play endcap when children are removed"
		bool m_bPlayEndcapOnStop; // 0x5e8		
		// MPropertyFriendlyName "destroy particles immediately when child is removed"
		bool m_bDestroyImmediately; // 0x5e9		
	};
};
