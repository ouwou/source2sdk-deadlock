#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/MaterialProxyType_t.hpp"
#include "particles/MaterialVariable_t.hpp"
#include "particles/ParticleColorBlendType_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xb90
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderMaterialProxy : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "Control Point for Model"
		int32_t m_nMaterialControlPoint; // 0x210		
		// MPropertyFriendlyName "proxy type"
		particles::MaterialProxyType_t m_nProxyType; // 0x214		
		// MPropertyFriendlyName "material variables"
		// MPropertyAutoExpandSelf
		CUtlVector<particles::MaterialVariable_t> m_MaterialVars; // 0x218		
		// MPropertyFriendlyName "material override"
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hOverrideMaterial; // 0x230		
		// MPropertyFriendlyName "material override enable"
		particleslib::CParticleCollectionFloatInput m_flMaterialOverrideEnabled; // 0x238		
		// MPropertyFriendlyName "model tint"
		particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x398		
		// MPropertyFriendlyName "model alpha"
		particleslib::CPerParticleFloatInput m_flAlpha; // 0xa10		
		// MPropertyFriendlyName "model tint blend type"
		particles::ParticleColorBlendType_t m_nColorBlendType; // 0xb70		
	};
};
