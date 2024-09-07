#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticlePinDistance_t.hpp"
#include "particles/ParticleSelection_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include "particleslib/CParticleCollectionVecInput.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x1098
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_PinParticleToCP : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1c0		
	private:
		[[maybe_unused]] uint8_t __pad01c4[0x4]; // 0x1c4
	public:
		// MPropertyFriendlyName "offset"
		particleslib::CParticleCollectionVecInput m_vecOffset; // 0x1c8		
		// MPropertyFriendlyName "offset in local space"
		bool m_bOffsetLocal; // 0x840		
	private:
		[[maybe_unused]] uint8_t __pad0841[0x3]; // 0x841
	public:
		// MPropertyFriendlyName "particle to use"
		particles::ParticleSelection_t m_nParticleSelection; // 0x844		
		// MPropertyFriendlyName "particle number/offset"
		particleslib::CParticleCollectionFloatInput m_nParticleNumber; // 0x848		
		// MPropertyFriendlyName "pin break type"
		particles::ParticlePinDistance_t m_nPinBreakType; // 0x9a8		
	private:
		[[maybe_unused]] uint8_t __pad09ac[0x4]; // 0x9ac
	public:
		// MPropertyFriendlyName "break length %"
		particleslib::CParticleCollectionFloatInput m_flBreakDistance; // 0x9b0		
		// MPropertyFriendlyName "break speed"
		particleslib::CParticleCollectionFloatInput m_flBreakSpeed; // 0xb10		
		// MPropertyFriendlyName "break age"
		particleslib::CParticleCollectionFloatInput m_flAge; // 0xc70		
		// MPropertyFriendlyName "break comparison control point 1"
		int32_t m_nBreakControlPointNumber; // 0xdd0		
		// MPropertyFriendlyName "break comparison control point 2"
		int32_t m_nBreakControlPointNumber2; // 0xdd4		
		// MPropertyFriendlyName "break value"
		particleslib::CParticleCollectionFloatInput m_flBreakValue; // 0xdd8		
		// MPropertyFriendlyName "Interpolation"
		particleslib::CPerParticleFloatInput m_flInterpolation; // 0xf38		
	};
};
