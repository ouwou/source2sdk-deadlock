#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/MaterialVariable_t.hpp"
#include "particleslib/CParticleCollectionRendererFloatInput.hpp"
#include "resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x678
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderBlobs : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "cube width"
		particleslib::CParticleCollectionRendererFloatInput m_cubeWidth; // 0x210		
		// MPropertyFriendlyName "cutoff radius"
		particleslib::CParticleCollectionRendererFloatInput m_cutoffRadius; // 0x370		
		// MPropertyFriendlyName "render radius"
		particleslib::CParticleCollectionRendererFloatInput m_renderRadius; // 0x4d0		
		// MPropertyFriendlyName "(optional) vertex buffer size (k)"
		// MPropertyAttributeRange "0 1024"
		uint32_t m_nVertexCountKb; // 0x630		
		// MPropertyFriendlyName "(optional) index buffer size (k)"
		// MPropertyAttributeRange "0 1024"
		uint32_t m_nIndexCountKb; // 0x634		
		// MPropertyFriendlyName "scale CP (cube width/cutoff/render = x/y/z)"
		int32_t m_nScaleCP; // 0x638		
	private:
		[[maybe_unused]] uint8_t __pad063c[0x4]; // 0x63c
	public:
		// MPropertyFriendlyName "material variables"
		// MPropertyAutoExpandSelf
		// MPropertySortPriority "600"
		CUtlVector<particles::MaterialVariable_t> m_MaterialVars; // 0x640		
	private:
		[[maybe_unused]] uint8_t __pad0658[0x18]; // 0x658
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial; // 0x670		
	};
};
