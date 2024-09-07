#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x850
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RemapExternalWindToCP : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "control point to sample wind"
		int32_t m_nCP; // 0x1c8		
		// MPropertyFriendlyName "output control point"
		int32_t m_nCPOutput; // 0x1cc		
		// MPropertyFriendlyName "wind scale"
		particleslib::CParticleCollectionVecInput m_vecScale; // 0x1d0		
		// MPropertyFriendlyName "set magnitude instead of vector"
		bool m_bSetMagnitude; // 0x848		
	private:
		[[maybe_unused]] uint8_t __pad0849[0x3]; // 0x849
	public:
		// MPropertyFriendlyName "magnitude output component"
		// MPropertyAttributeChoiceName "vector_component"
		// MPropertySuppressExpr "!m_bSetMagnitude"
		int32_t m_nOutVectorField; // 0x84c		
	};
};
