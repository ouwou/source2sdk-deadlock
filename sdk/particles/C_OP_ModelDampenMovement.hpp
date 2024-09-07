#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particleslib/CPerParticleVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x8c8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_ModelDampenMovement : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1c0		
		// MPropertyFriendlyName "use only bounding box"
		bool m_bBoundBox; // 0x1c4		
		// MPropertyFriendlyName "dampen outside instead of inside"
		bool m_bOutside; // 0x1c5		
		// MPropertyFriendlyName "use bones instead of hitboxes"
		bool m_bUseBones; // 0x1c6		
		// MPropertyFriendlyName "hitbox set"
		char m_HitboxSetName[128]; // 0x1c7		
	private:
		[[maybe_unused]] uint8_t __pad0247[0x1]; // 0x247
	public:
		// MPropertyFriendlyName "test position offset"
		// MVectorIsCoordinate
		particleslib::CPerParticleVecInput m_vecPosOffset; // 0x248		
		// MPropertyFriendlyName "drag"
		// MPropertyAttributeRange "-1 1"
		float m_fDrag; // 0x8c0		
	};
};
