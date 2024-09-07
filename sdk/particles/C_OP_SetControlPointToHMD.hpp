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
	class C_OP_SetControlPointToHMD : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nCP1; // 0x1c8		
		// MPropertyFriendlyName "control point offset"
		// MVectorIsCoordinate
		Vector m_vecCP1Pos; // 0x1cc		
		// MPropertyFriendlyName "use hmd orientation"
		bool m_bOrientToHMD; // 0x1d8		
	};
};
