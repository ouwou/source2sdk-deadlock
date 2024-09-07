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
	// Size: 0x260
	// Has VTable
	// 
	// MGetKV3ClassDefaults
	class C_OP_SetControlPointPositionToTimeOfDayValue : public particles::CParticleFunctionPreEmission
	{
	public:
		// MPropertyFriendlyName "control point number"
		int32_t m_nControlPointNumber; // 0x1c8		
		// MPropertyFriendlyName "time-of-day parameter"
		char m_pszTimeOfDayParameter[128]; // 0x1cc		
		// MPropertyFriendlyName "default value"
		Vector m_vecDefaultValue; // 0x24c		
	};
};
