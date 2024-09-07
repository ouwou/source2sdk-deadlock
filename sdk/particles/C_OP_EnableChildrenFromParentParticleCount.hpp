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
	// Size: 0x338
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_EnableChildrenFromParentParticleCount : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "group ID to affect"
		int32_t m_nChildGroupID; // 0x1c8		
		// MPropertyFriendlyName "first child to enable"
		int32_t m_nFirstChild; // 0x1cc		
		// MPropertyFriendlyName "max # of children to enable (-1 for max particle count)"
		particleslib::CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x1d0		
		// MPropertyFriendlyName "remove children when particle count lowers"
		bool m_bDisableChildren; // 0x330		
		// MPropertyFriendlyName "play endcap when children are removed"
		// MPropertySuppressExpr "!m_bDisableChildren"
		bool m_bPlayEndcapOnStop; // 0x331		
		// MPropertyFriendlyName "destroy particles immediately when child is removed"
		// MPropertySuppressExpr "!m_bDisableChildren"
		bool m_bDestroyImmediately; // 0x332		
	};
};
