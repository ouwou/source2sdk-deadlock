#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 8
	// Size: 0x268
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_RtEnvCull : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "test direction"
		// MVectorIsCoordinate
		Vector m_vecTestDir; // 0x1c0		
		// MPropertyFriendlyName "cull normal"
		// MVectorIsCoordinate
		Vector m_vecTestNormal; // 0x1cc		
		// MPropertyFriendlyName "cull on miss"
		bool m_bCullOnMiss; // 0x1d8		
		// MPropertyFriendlyName "stick instead of cull"
		bool m_bStickInsteadOfCull; // 0x1d9		
		// MPropertyFriendlyName "ray trace environment name"
		char m_RtEnvName[128]; // 0x1da		
	private:
		[[maybe_unused]] uint8_t __pad025a[0x2]; // 0x25a
	public:
		// MPropertyFriendlyName "ray trace environment cp"
		int32_t m_nRTEnvCP; // 0x25c		
		// MPropertyFriendlyName "rt env control point component"
		// MPropertyAttributeChoiceName "vector_component"
		int32_t m_nComponent; // 0x260		
	};
};
