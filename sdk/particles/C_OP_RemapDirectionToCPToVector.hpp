#pragma once
#include "particles/CParticleFunctionOperator.hpp"
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
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapDirectionToCPToVector : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "control point"
		int32_t m_nCP; // 0x1c0		
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_vector"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4		
		// MPropertyFriendlyName "scale factor"
		float m_flScale; // 0x1c8		
		// MPropertyFriendlyName "offset rotation"
		float m_flOffsetRot; // 0x1cc		
		// MPropertyFriendlyName "offset axis"
		// MVectorIsCoordinate
		Vector m_vecOffsetAxis; // 0x1d0		
		// MPropertyFriendlyName "normalize"
		bool m_bNormalize; // 0x1dc		
	private:
		[[maybe_unused]] uint8_t __pad01dd[0x3]; // 0x1dd
	public:
		// MPropertyFriendlyName "strength field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldStrength; // 0x1e0		
	};
};
