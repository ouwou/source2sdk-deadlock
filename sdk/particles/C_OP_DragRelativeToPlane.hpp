#pragma once
#include "particles/CParticleFunctionOperator.hpp"
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
	// Size: 0xb08
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_DragRelativeToPlane : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "dampening"
		particleslib::CParticleCollectionFloatInput m_flDragAtPlane; // 0x1c0		
		// MPropertyFriendlyName "falloff"
		particleslib::CParticleCollectionFloatInput m_flFalloff; // 0x320		
		// MPropertyFriendlyName "dampen on only one side of plane"
		bool m_bDirectional; // 0x480		
	private:
		[[maybe_unused]] uint8_t __pad0481[0x7]; // 0x481
	public:
		// MPropertyFriendlyName "plane normal"
		// MVectorIsCoordinate
		particleslib::CParticleCollectionVecInput m_vecPlaneNormal; // 0x488		
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0xb00		
	};
};
