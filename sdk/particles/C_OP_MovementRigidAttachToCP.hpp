#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_MovementRigidAttachToCP : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1c0		
		// MPropertyFriendlyName "scale control point number"
		int32_t m_nScaleControlPoint; // 0x1c4		
		// MPropertyFriendlyName "scale control point field"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nScaleCPField; // 0x1c8		
		// MPropertyFriendlyName "cache attribute to read from"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1cc		
		// MPropertyFriendlyName "attribute to write to"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1d0		
		// MPropertyFriendlyName "local space"
		bool m_bOffsetLocal; // 0x1d4		
	};
};
