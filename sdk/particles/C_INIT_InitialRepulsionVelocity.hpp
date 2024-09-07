#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/ParticleTraceSet_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x280
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_InitialRepulsionVelocity : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "collision group"
		char m_CollisionGroupName[128]; // 0x1c8		
		// MPropertyFriendlyName "Trace Set"
		particles::ParticleTraceSet_t m_nTraceSet; // 0x248		
		// MPropertyFriendlyName "minimum velocity"
		// MVectorIsCoordinate
		Vector m_vecOutputMin; // 0x24c		
		// MPropertyFriendlyName "maximum velocity"
		// MVectorIsCoordinate
		Vector m_vecOutputMax; // 0x258		
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x264		
		// MPropertyFriendlyName "per particle world collision tests"
		bool m_bPerParticle; // 0x268		
		// MPropertyFriendlyName "offset instead of accelerate"
		bool m_bTranslate; // 0x269		
		// MPropertyFriendlyName "offset proportional to radius 0/1"
		bool m_bProportional; // 0x26a		
	private:
		[[maybe_unused]] uint8_t __pad026b[0x1]; // 0x26b
	public:
		// MPropertyFriendlyName "trace length"
		float m_flTraceLength; // 0x26c		
		// MPropertyFriendlyName "use radius for per particle trace length"
		bool m_bPerParticleTR; // 0x270		
		// MPropertyFriendlyName "inherit from parent"
		bool m_bInherit; // 0x271		
	private:
		[[maybe_unused]] uint8_t __pad0272[0x2]; // 0x272
	public:
		// MPropertyFriendlyName "control points to broadcast to children (n + 1)"
		int32_t m_nChildCP; // 0x274		
		// MPropertyFriendlyName "child group ID to affect"
		int32_t m_nChildGroupID; // 0x278		
	};
};
