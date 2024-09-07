#pragma once
#include "particles/CParticleFunctionInitializer.hpp"
#include "particles/CPathParameters.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 16
	// Size: 0x230
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_INIT_CreateAlongPath : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "maximum distance"
		float m_fMaxDistance; // 0x1c8		
	private:
		[[maybe_unused]] uint8_t __pad01cc[0x4]; // 0x1cc
	public:
		particles::CPathParameters m_PathParams; // 0x1d0		
		// MPropertyFriendlyName "randomly select sequential CP pairs between start and end points"
		bool m_bUseRandomCPs; // 0x210		
	private:
		[[maybe_unused]] uint8_t __pad0211[0x3]; // 0x211
	public:
		// MPropertyFriendlyName "Offset from control point for path end"
		// MVectorIsCoordinate
		Vector m_vEndOffset; // 0x214		
		// MPropertyFriendlyName "save offset"
		bool m_bSaveOffset; // 0x220		
	};
};
