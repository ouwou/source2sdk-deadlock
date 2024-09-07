#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
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
	// Size: 0x650
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderGpuImplicit : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertySortPriority "-1"
		// MPropertyDescription "Honors the per-particle radius (multiplied by radius scale) but is more expensive to render.  Some particles with large radii can make things much costlier"
		bool m_bUsePerParticleRadius; // 0x210		
	private:
		[[maybe_unused]] uint8_t __pad0211[0x3]; // 0x211
	public:
		// MPropertyFriendlyName "(optional) vertex buffer size (k)"
		// MPropertyAttributeRange "0 1024"
		uint32_t m_nVertexCountKb; // 0x214		
		// MPropertyFriendlyName "(optional) index buffer size (k)"
		// MPropertyAttributeRange "0 2048"
		uint32_t m_nIndexCountKb; // 0x218		
	private:
		[[maybe_unused]] uint8_t __pad021c[0x4]; // 0x21c
	public:
		particleslib::CParticleCollectionRendererFloatInput m_fGridSize; // 0x220		
		particleslib::CParticleCollectionRendererFloatInput m_fRadiusScale; // 0x380		
		// MPropertyAttributeRange ".1 .95"
		particleslib::CParticleCollectionRendererFloatInput m_fIsosurfaceThreshold; // 0x4e0		
		// MPropertyFriendlyName "scale CP (grid size/particle radius/threshold = x/y/z)"
		int32_t m_nScaleCP; // 0x640		
	private:
		[[maybe_unused]] uint8_t __pad0644[0x4]; // 0x644
	public:
		CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial; // 0x648		
	};
};
