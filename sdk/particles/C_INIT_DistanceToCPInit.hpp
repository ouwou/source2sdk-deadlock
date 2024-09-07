#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleAttributeIndex_t.hpp"
#include "particles/ParticleSetMethod_t.hpp"
#include "particles/ParticleTraceSet_t.hpp"
#include "particleslib/CPerParticleFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x960
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_DistanceToCPInit : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "output field"
		// MPropertyAttributeChoiceName "particlefield_scalar"
		particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		// MPropertyFriendlyName "distance minimum"
		particleslib::CPerParticleFloatInput m_flInputMin; // 0x1d0		
		// MPropertyFriendlyName "distance maximum"
		particleslib::CPerParticleFloatInput m_flInputMax; // 0x330		
		// MPropertyFriendlyName "output minimum"
		particleslib::CPerParticleFloatInput m_flOutputMin; // 0x490		
		// MPropertyFriendlyName "output maximum"
		particleslib::CPerParticleFloatInput m_flOutputMax; // 0x5f0		
		// MPropertyFriendlyName "control point"
		int32_t m_nStartCP; // 0x750		
		// MPropertyFriendlyName "ensure line of sight"
		bool m_bLOS; // 0x754		
		// MPropertyFriendlyName "LOS collision group"
		char m_CollisionGroupName[128]; // 0x755		
	private:
		[[maybe_unused]] uint8_t __pad07d5[0x3]; // 0x7d5
	public:
		// MPropertyFriendlyName "Trace Set"
		particles::ParticleTraceSet_t m_nTraceSet; // 0x7d8		
	private:
		[[maybe_unused]] uint8_t __pad07dc[0x4]; // 0x7dc
	public:
		// MPropertyFriendlyName "Maximum Trace Length"
		particleslib::CPerParticleFloatInput m_flMaxTraceLength; // 0x7e0		
		// MPropertyFriendlyName "LOS Failure Scalar"
		float m_flLOSScale; // 0x940		
		// MPropertyFriendlyName "set value method"
		particles::ParticleSetMethod_t m_nSetMethod; // 0x944		
		// MPropertyFriendlyName "only active within specified distance"
		bool m_bActiveRange; // 0x948		
	private:
		[[maybe_unused]] uint8_t __pad0949[0x3]; // 0x949
	public:
		// MPropertyFriendlyName "distance component scale"
		Vector m_vecDistanceScale; // 0x94c		
		// MPropertyFriendlyName "remap bias"
		float m_flRemapBias; // 0x958		
	};
};
