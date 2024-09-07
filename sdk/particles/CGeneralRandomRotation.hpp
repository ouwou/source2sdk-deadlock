#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1e8
	// Has VTable
	// Is Abstract
	// 
	// MGetKV3ClassDefaults
	class CGeneralRandomRotation : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "rotation field"
		// MPropertyAttributeChoiceName "particlefield_rotation"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8		
		// MPropertyFriendlyName "rotation initial"
		float m_flDegrees; // 0x1cc		
		// MPropertyFriendlyName "rotation offset from initial min"
		float m_flDegreesMin; // 0x1d0		
		// MPropertyFriendlyName "rotation offset from initial max"
		float m_flDegreesMax; // 0x1d4		
		// MPropertyFriendlyName "rotation offset exponent"
		float m_flRotationRandExponent; // 0x1d8		
		// MPropertyFriendlyName "randomly flip direction"
		bool m_bRandomlyFlipDirection; // 0x1dc		
	};
};
