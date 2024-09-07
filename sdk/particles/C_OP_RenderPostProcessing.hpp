#pragma once
#include "particles/CParticleFunctionRenderer.hpp"
#include "particles/ParticlePostProcessPriorityGroup_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include "resourcesystem/InfoForResourceTypeCPostProcessingResource.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x380
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RenderPostProcessing : public particles::CParticleFunctionRenderer
	{
	public:
		// MPropertyFriendlyName "Post Processing Strength"
		particleslib::CPerParticleFloatInput m_flPostProcessStrength; // 0x210		
		// MPropertyFriendlyName "Post Processing File"
		// MPropertyAttributeEditor "AssetBrowse( vpost, *showassetpreview )"
		CStrongHandle<resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostTexture; // 0x370		
		// MPropertyFriendlyName "Post Processing Priority Group"
		particles::ParticlePostProcessPriorityGroup_t m_nPriority; // 0x378		
	};
};
