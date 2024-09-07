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
	// Size: 0x220
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_MaintainSequentialPath : public particles::CParticleFunctionOperator
	{
	public:
		// MPropertyFriendlyName "maximum distance"
		float m_fMaxDistance; // 0x1c0		
		// MPropertyFriendlyName "particles to map from start to end"
		float m_flNumToAssign; // 0x1c4		
		// MPropertyFriendlyName "cohesion strength"
		float m_flCohesionStrength; // 0x1c8		
		// MPropertyFriendlyName "control point movement tolerance"
		float m_flTolerance; // 0x1cc		
		// MPropertyFriendlyName "restart behavior (0 = bounce, 1 = loop )"
		bool m_bLoop; // 0x1d0		
		// MPropertyFriendlyName "use existing particle count"
		bool m_bUseParticleCount; // 0x1d1		
	private:
		[[maybe_unused]] uint8_t __pad01d2[0xe]; // 0x1d2
	public:
		particles::CPathParameters m_PathParams; // 0x1e0		
	};
};
