#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/ModelReference_t.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x248
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderAsModels : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "models"
		// MParticleRequireDefaultArrayEntry
		CUtlVector<particles::ModelReference_t> m_ModelList; // 0x210		
	private:
		[[maybe_unused]] uint8_t __pad0228[0x4]; // 0x228
	public:
		// MPropertyFriendlyName "scale factor for radius"
		float m_flModelScale; // 0x22c		
		// MPropertyFriendlyName "scale model to match particle size"
		bool m_bFitToModelSize; // 0x230		
		// MPropertyFriendlyName "non-uniform scaling"
		bool m_bNonUniformScaling; // 0x231		
	private:
		[[maybe_unused]] uint8_t __pad0232[0x2]; // 0x232
	public:
		// MPropertyFriendlyName "X axis scaling scalar field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nXAxisScalingAttribute; // 0x234		
		// MPropertyFriendlyName "Y axis scaling scalar field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nYAxisScalingAttribute; // 0x238		
		// MPropertyFriendlyName "Z axis scaling scalar field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nZAxisScalingAttribute; // 0x23c		
		// MPropertyFriendlyName "model size cull bloat"
		// MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
		int32_t m_nSizeCullBloat; // 0x240		
	};
};
