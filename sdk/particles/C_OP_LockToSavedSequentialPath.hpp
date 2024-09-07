#pragma once
#include "particles/CParticleFunctionOperator.hpp"
#include "particles/CPathParameters.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
	// Alignment: 16
	// Size: 0x210
	// Has VTable
	// 
	// MParticleMaxVersion "7"
	// MParticleReplacementOp "C_OP_LockToSavedSequentialPathV2"
	// MGetKV3ClassDefaults
	class C_OP_LockToSavedSequentialPath : public particles::CParticleFunctionOperator
	{
	private:
		[[maybe_unused]] uint8_t __pad01c0[0x4]; // 0x1c0
	public:
		// MPropertyFriendlyName "start fade time"
		float m_flFadeStart; // 0x1c4		
		// MPropertyFriendlyName "end fade time"
		float m_flFadeEnd; // 0x1c8		
		// MPropertyFriendlyName "Use sequential CP pairs between start and end point"
		bool m_bCPPairs; // 0x1cc		
	private:
		[[maybe_unused]] uint8_t __pad01cd[0x3]; // 0x1cd
	public:
		particles::CPathParameters m_PathParams; // 0x1d0		
	};
};
