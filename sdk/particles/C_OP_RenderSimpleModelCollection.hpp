#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleModelInput.hpp"
#include "resourcesystem/InfoForResourceTypeCModel.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x3f8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderSimpleModelCollection : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyStartGroup "Orientation"
		// MPropertyFriendlyName "center mesh"
		// MPropertySortPriority "750"
		bool m_bCenterOffset; // 0x210		
	private:
		[[maybe_unused]] uint8_t __pad0211[0x7]; // 0x211
	public:
		// MPropertyStartGroup "Model"
		// MPropertyFriendlyName "model"
		CStrongHandle<resourcesystem::InfoForResourceTypeCModel> m_hModel; // 0x218		
		// MPropertyFriendlyName "input model override"
		particleslib::CParticleModelInput m_modelInput; // 0x220		
		// MPropertyStartGroup "Rendering"
		// MPropertyFriendlyName "size cull scale"
		particleslib::CParticleCollectionFloatInput m_fSizeCullScale; // 0x280		
		// MPropertyFriendlyName "disable shadows"
		bool m_bDisableShadows; // 0x3e0		
		// MPropertyFriendlyName "disable motion blur"
		bool m_bDisableMotionBlur; // 0x3e1		
		// MPropertyFriendlyName "accept decals"
		bool m_bAcceptsDecals; // 0x3e2		
	private:
		[[maybe_unused]] uint8_t __pad03e3[0x1]; // 0x3e3
	public:
		// MPropertyFriendlyName "angular velocity attribute (improves motion blur)"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nAngularVelocityField; // 0x3e4		
	};
};
