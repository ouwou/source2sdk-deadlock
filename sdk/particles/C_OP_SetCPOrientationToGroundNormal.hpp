#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/ParticleTraceSet_t.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x270
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetCPOrientationToGroundNormal : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "interpolation rate"
		float m_flInterpRate; // 0x1c0		
		// MPropertyFriendlyName "max trace length"
		float m_flMaxTraceLength; // 0x1c4		
		// MPropertyFriendlyName "CP movement tolerance"
		float m_flTolerance; // 0x1c8		
		// MPropertyFriendlyName "trace offset"
		float m_flTraceOffset; // 0x1cc		
		// MPropertyFriendlyName "collision group"
		char m_CollisionGroupName[128]; // 0x1d0		
		// MPropertyFriendlyName "Trace Set"
		particles::ParticleTraceSet_t m_nTraceSet; // 0x250		
		// MPropertyFriendlyName "CP to trace from"
		int32_t m_nInputCP; // 0x254		
		// MPropertyFriendlyName "CP to set"
		int32_t m_nOutputCP; // 0x258		
	private:
		[[maybe_unused]] uint8_t __pad025c[0xc]; // 0x25c
	public:
		// MPropertyFriendlyName "include water"
		bool m_bIncludeWater; // 0x268		
	};
};
