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
	// Size: 0x1e0
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_SequenceFromCP : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "kill unused"
		bool m_bKillUnused; // 0x1c8		
		// MPropertyFriendlyName "offset propotional to radius"
		bool m_bRadiusScale; // 0x1c9		
	private:
		[[maybe_unused]] uint8_t __pad01ca[0x2]; // 0x1ca
	public:
		// MPropertyFriendlyName "control point"
		int32_t m_nCP; // 0x1cc		
		// MPropertyFriendlyName "per particle spatial offset"
		// MVectorIsCoordinate
		Vector m_vecOffset; // 0x1d0		
	};
};
