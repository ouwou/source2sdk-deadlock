#pragma once
#include "particles/CBaseRendererSource2.hpp"
#include "particles/ParticleOrientationChoiceList_t.hpp"
#include "particleslib/CParticleCollectionRendererFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x2ac0
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CBaseTrailRenderer : public particles::CBaseRendererSource2
	{
	public:
		// MPropertyStartGroup "Orientation"
		// MPropertyFriendlyName "orientation type"
		// MPropertySortPriority "750"
		particles::ParticleOrientationChoiceList_t m_nOrientationType; // 0x27e8		
		// MPropertyFriendlyName "orientation control point"
		// MPropertySortPriority "750"
		// MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
		int32_t m_nOrientationControlPoint; // 0x27ec		
		// MPropertyStartGroup "Screenspace Fading and culling"
		// MPropertyFriendlyName "minimum visual screen-size"
		// MPropertySortPriority "900"
		float m_flMinSize; // 0x27f0		
		// MPropertyFriendlyName "maximum visual screen-size"
		// MPropertySortPriority "900"
		float m_flMaxSize; // 0x27f4		
		// MPropertyFriendlyName "start fade screen-size"
		// MPropertySortPriority "900"
		particleslib::CParticleCollectionRendererFloatInput m_flStartFadeSize; // 0x27f8		
		// MPropertyFriendlyName "end fade and cull screen-size"
		// MPropertySortPriority "900"
		particleslib::CParticleCollectionRendererFloatInput m_flEndFadeSize; // 0x2958		
		// MPropertyStartGroup "Trail UV Controls"
		// MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
		// MPropertySortPriority "800"
		bool m_bClampV; // 0x2ab8		
	};
};
