#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ControlPointReference_t.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x220
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_CalculateVectorAttribute : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "start value"
		Vector m_vStartValue; // 0x1c0		
		// MPropertyFriendlyName "input field 1"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldInput1; // 0x1cc		
		// MPropertyFriendlyName "input scale 1"
		float m_flInputScale1; // 0x1d0		
		// MPropertyFriendlyName "input field 2"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldInput2; // 0x1d4		
		// MPropertyFriendlyName "input scale 2"
		float m_flInputScale2; // 0x1d8		
		// MPropertyFriendlyName "control point input 1"
		particles::ControlPointReference_t m_nControlPointInput1; // 0x1dc		
		// MPropertyFriendlyName "control point scale 1"
		float m_flControlPointScale1; // 0x1f0		
		// MPropertyFriendlyName "control point input 2"
		particles::ControlPointReference_t m_nControlPointInput2; // 0x1f4		
		// MPropertyFriendlyName "control point scale 2"
		float m_flControlPointScale2; // 0x208		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x20c		
		// MPropertyFriendlyName "final per component scale"
		Vector m_vFinalOutputScale; // 0x210		
	};
};
