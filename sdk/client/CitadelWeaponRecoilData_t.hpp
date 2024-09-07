#pragma once
#include "tier2/CRangeFloat.hpp"
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
	// Alignment: 4
	// Size: 0x14
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	// MPropertyAutoExpandSelf
	struct CitadelWeaponRecoilData_t
	{
	public:
		tier2::CRangeFloat m_Range; // 0x0		
		float m_flBurstSlope; // 0x8		
		float m_flBurstExponent; // 0xc		
		float m_flBurstConstant; // 0x10		
	};
};
