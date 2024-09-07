#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0xa10
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_CreateOnGrid : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "X Dimension Count"
		particleslib::CParticleCollectionFloatInput m_nXCount; // 0x1c8		
		// MPropertyFriendlyName "Y Dimension Count"
		particleslib::CParticleCollectionFloatInput m_nYCount; // 0x328		
		// MPropertyFriendlyName "Z Dimension Count"
		particleslib::CParticleCollectionFloatInput m_nZCount; // 0x488		
		// MPropertyFriendlyName "X Dimension Spacing"
		particleslib::CParticleCollectionFloatInput m_nXSpacing; // 0x5e8		
		// MPropertyFriendlyName "Y Dimension Spacing"
		particleslib::CParticleCollectionFloatInput m_nYSpacing; // 0x748		
		// MPropertyFriendlyName "Z Dimension Spacing"
		particleslib::CParticleCollectionFloatInput m_nZSpacing; // 0x8a8		
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0xa08		
		// MPropertyFriendlyName "use local space"
		bool m_bLocalSpace; // 0xa0c		
		// MPropertyFriendlyName "center around control point"
		bool m_bCenter; // 0xa0d		
		// MPropertyFriendlyName "hollow"
		bool m_bHollow; // 0xa0e		
	};
};
