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
	// Size: 0x220
	// Has VTable
	// 
	// MParticleMaxVersion "7"
	// MParticleReplacementOp "C_INIT_CreateSequentialPathV2"
	// MGetKV3ClassDefaults
	class C_INIT_CreateSequentialPath : public particles::CParticleFunctionInitializer
	{
	public:
		// MPropertyFriendlyName "maximum distance"
		float m_fMaxDistance; // 0x1c8		
		// MPropertyFriendlyName "particles to map from start to end"
		float m_flNumToAssign; // 0x1cc		
		// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
		bool m_bLoop; // 0x1d0		
		// MPropertyFriendlyName "use sequential CP pairs between start and end point"
		bool m_bCPPairs; // 0x1d1		
		// MPropertyFriendlyName "save offset"
		bool m_bSaveOffset; // 0x1d2		
	private:
		[[maybe_unused]] uint8_t __pad01d3[0xd]; // 0x1d3
	public:
		particles::CPathParameters m_PathParams; // 0x1e0		
	};
};
