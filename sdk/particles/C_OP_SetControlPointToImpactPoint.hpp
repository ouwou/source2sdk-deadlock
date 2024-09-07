#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particles/ParticleTraceSet_t.hpp"
#include "particleslib/CParticleCollectionFloatInput.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x3d8
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetControlPointToImpactPoint : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "control point to set"
		int32_t m_nCPOut; // 0x1c8		
		// MPropertyFriendlyName "control point to trace from"
		int32_t m_nCPIn; // 0x1cc		
		// MPropertyFriendlyName "trace update rate"
		float m_flUpdateRate; // 0x1d0		
	private:
		[[maybe_unused]] uint8_t __pad01d4[0x4]; // 0x1d4
	public:
		// MPropertyFriendlyName "max trace length"
		particleslib::CParticleCollectionFloatInput m_flTraceLength; // 0x1d8		
		// MPropertyFriendlyName "offset start point amount"
		float m_flStartOffset; // 0x338		
		// MPropertyFriendlyName "offset end point amount"
		float m_flOffset; // 0x33c		
		// MPropertyFriendlyName "trace direction override"
		// MVectorIsCoordinate
		Vector m_vecTraceDir; // 0x340		
		// MPropertyFriendlyName "trace collision group"
		char m_CollisionGroupName[128]; // 0x34c		
		// MPropertyFriendlyName "Trace Set"
		particles::ParticleTraceSet_t m_nTraceSet; // 0x3cc		
		// MPropertyFriendlyName "set to trace endpoint if no collision"
		bool m_bSetToEndpoint; // 0x3d0		
		// MPropertyFriendlyName "trace to closest surface along all cardinal directions"
		bool m_bTraceToClosestSurface; // 0x3d1		
		// MPropertyFriendlyName "include water"
		bool m_bIncludeWater; // 0x3d2		
	};
};
