#pragma once
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particleslib/CParticleFloatInput.hpp"
#include "particleslib/CParticleInput.hpp"
#include "particleslib/ParticleVecType_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particleslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particleslib
{
	// Alignment: 8
	// Size: 0x678
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	// MClassIsParticleVec
	// MParticleCustomFieldDefaultValue
	class CParticleVecInput : public particleslib::CParticleInput
	{
	public:
		particleslib::ParticleVecType_t m_nType; // 0x10		
		Vector m_vLiteralValue; // 0x14		
		Color m_LiteralColor; // 0x20		
	private:
		[[maybe_unused]] uint8_t __pad0024[0x4]; // 0x24
	public:
		CParticleNamedValueRef m_NamedValue; // 0x28		
		bool m_bFollowNamedValue; // 0x68		
	private:
		[[maybe_unused]] uint8_t __pad0069[0x3]; // 0x69
	public:
		particles::ParticleAttributeIndex_t m_nVectorAttribute; // 0x6c		
		Vector m_vVectorAttributeScale; // 0x70		
		int32_t m_nControlPoint; // 0x7c		
		int32_t m_nDeltaControlPoint; // 0x80		
		Vector m_vCPValueScale; // 0x84		
		Vector m_vCPRelativePosition; // 0x90		
		Vector m_vCPRelativeDir; // 0x9c		
		particleslib::CParticleFloatInput m_FloatComponentX; // 0xa8		
		particleslib::CParticleFloatInput m_FloatComponentY; // 0x208		
		particleslib::CParticleFloatInput m_FloatComponentZ; // 0x368		
		particleslib::CParticleFloatInput m_FloatInterp; // 0x4c8		
		float m_flInterpInput0; // 0x628		
		float m_flInterpInput1; // 0x62c		
		Vector m_vInterpOutput0; // 0x630		
		Vector m_vInterpOutput1; // 0x63c		
		CColorGradient m_Gradient; // 0x648		
		Vector m_vRandomMin; // 0x660		
		Vector m_vRandomMax; // 0x66c		
	};
};
