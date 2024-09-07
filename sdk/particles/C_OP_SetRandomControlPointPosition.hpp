#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x4b0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetRandomControlPointPosition : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "set positions in world space"
		bool m_bUseWorldLocation; // 0x1c8		
		// MPropertyFriendlyName "inherit CP orientation"
		bool m_bOrient; // 0x1c9		
	private:
		[[maybe_unused]] uint8_t __pad01ca[0x2]; // 0x1ca
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nCP1; // 0x1cc		
		// MPropertyFriendlyName "control point to offset positions from"
		int32_t m_nHeadLocation; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
	public:
		// MPropertyFriendlyName "re-randomize rate (-1 for once only)"
		particleslib::CParticleCollectionFloatInput m_flReRandomRate; // 0x1d8		
		// MPropertyFriendlyName "control point min"
		Vector m_vecCPMinPos; // 0x338		
		// MPropertyFriendlyName "control point max"
		Vector m_vecCPMaxPos; // 0x344		
		// MPropertyFriendlyName "Interpolation"
		particleslib::CParticleCollectionFloatInput m_flInterpolation; // 0x350		
	};
};
