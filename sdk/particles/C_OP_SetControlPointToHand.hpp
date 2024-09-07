#pragma once
#include "particles/CParticleFunctionPreEmission.hpp"
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
	class C_OP_SetControlPointToHand : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nCP1; // 0x1c8		
		// MPropertyFriendlyName "hand"
		int32_t m_nHand; // 0x1cc		
		// MPropertyFriendlyName "control point offset"
		// MVectorIsCoordinate
		Vector m_vecCP1Pos; // 0x1d0		
		// MPropertyFriendlyName "use hand orientation"
		bool m_bOrientToHand; // 0x1dc		
	};
};
