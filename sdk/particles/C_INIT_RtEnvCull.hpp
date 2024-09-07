#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
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
	class C_INIT_RtEnvCull : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "test direction"
		// MVectorIsCoordinate
		Vector m_vecTestDir; // 0x1c8		
		// MPropertyFriendlyName "cull normal"
		// MVectorIsCoordinate
		Vector m_vecTestNormal; // 0x1d4		
		// MPropertyFriendlyName "use velocity for test direction"
		bool m_bUseVelocity; // 0x1e0		
		// MPropertyFriendlyName "cull on miss"
		bool m_bCullOnMiss; // 0x1e1		
		// MPropertyFriendlyName "velocity test adjust lifespan"
		bool m_bLifeAdjust; // 0x1e2		
		// MPropertyFriendlyName "ray trace environment name"
		char m_RtEnvName[128]; // 0x1e3		
	private:
		[[maybe_unused]] uint8_t __pad0263[0x1]; // 0x263
	public:
		// MPropertyFriendlyName "ray trace environment cp"
		int32_t m_nRTEnvCP; // 0x264		
		// MPropertyFriendlyName "rt env control point component"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nComponent; // 0x268		
	};
};
