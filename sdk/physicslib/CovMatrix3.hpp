#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: physicslib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::physicslib
{
	// Alignment: 4
	// Size: 0x18
	// Has Trivial Constructor
	// Has Trivial Destructor
	// 
	// MGetKV3ClassDefaults
	class CovMatrix3
	{
	public:
		Vector m_vDiag; // 0x0		
		float m_flXY; // 0xc		
		float m_flXZ; // 0x10		
		float m_flYZ; // 0x14		
	};
};
