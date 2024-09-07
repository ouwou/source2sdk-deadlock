#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
#include "particles/ParticleParentSetMode_t.hpp"
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
	class C_OP_SetControlPointToCenter : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "control point number to set"
		int32_t m_nCP1; // 0x1c8		
		// MPropertyFriendlyName "center offset"
		// MVectorIsCoordinate
		Vector m_vecCP1Pos; // 0x1cc		
		// MPropertyFriendlyName "use average particle position"
		// MVectorIsCoordinate
		bool m_bUseAvgParticlePos; // 0x1d8		
	private:
		[[maybe_unused]] uint8_t __pad01d9[0x3]; // 0x1d9
	public:
		// MPropertyFriendlyName "set parent"
		particles::ParticleParentSetMode_t m_nSetParent; // 0x1dc		
	};
};
